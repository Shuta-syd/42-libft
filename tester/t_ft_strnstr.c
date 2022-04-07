#include "test.h"
#include "../libft.h"

int case1_ft_strnstr(void)
{
	char *ret_test;
	char *ret_user;
	char needle[][10] = {"Hello", "World"};
	int input[] = {0, 5, 10, 20, 100};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			char test[] = "HelloHelloHelloWorldWorldWorld";
			char user[] = "HelloHelloHelloWorldWorldWorld";
			ret_test = strnstr(test, needle[i], input[j]);
			ret_user = ft_strnstr(user, needle[i], input[j]);
			// printf("\n%d %d %s | %s", i, j, ret_test, ret_user);
			if (str_ret_cmp(ret_test, ret_user) == 0)
				return (0);
		}
	}
	return (1);
}

int case2_ft_strnstr(void)
{
	char *ret_test;
	char *ret_user;
	char needle[][10] = {"Hello", "World", "42Tokyo"};
	int input[] = {0, 5, 10, 20, 100};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			char test[] = "Hello World 42Tokyo!";
			char user[] = "Hello World 42Tokyo!";
			ret_test = strnstr(test, needle[i], input[j]);
			ret_user = ft_strnstr(user, needle[i], input[j]);
			// printf("\n%d %d %s | %s", i, j, ret_test, ret_user);
			if (str_ret_cmp(ret_test, ret_user) == 0)
				return (0);
		}
	}
	return (1);
}

int case3_ft_strnstr(void)
{
	char *ret_test;
	char *ret_user;
	char test[] = "Hi I'm åååå 42";
	char user[] = "Hi I'm åååå 42";
	char needle[][10] = {"'", "åå", " ", "\0"};
	int input[] = {0, 5, 10, 20, 100};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			char test[] = "Hi I'm åååå 42";
			char user[] = "Hi I'm åååå 42";
			ret_test = strnstr(test, needle[i], input[j]);
			ret_user = ft_strnstr(user, needle[i], input[j]);
			if (str_ret_cmp(ret_test, ret_user) == 0)
				return (0);
		}
	}
	return (1);
}

void test_ft_strnstr(void)
{
	NAME("ft_strnstr.c");
	// case1
	case1_ft_strnstr() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strnstr() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_strnstr() == 1 ? OK(3) : KO(3);
	putchar('\n');
	return;
}
