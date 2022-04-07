#include "test.h"
#include "../libft.h"

int case1_ft_strstr(void)
{
	char *ret_test;
	char *ret_user;
	char needle[][10] = {"Hello", "World", "42Tokyo"};

	for (int i = 0; i < 3; i++)
	{
		char test[] = "Hello World 42Tokyo!";
		char user[] = "Hello World 42Tokyo!";
		ret_test = strstr(test, needle[i]);
		ret_user = ft_strstr(user, needle[i]);
		if (str_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case2_ft_strstr(void)
{
	char *ret_test;
	char *ret_user;
	char needle[][10] = {"Hello", "World"};

	for (int i = 0; i < 2; i++)
	{
		char test[] = "HelloHelloHelloWorldWorldWorld";
		char user[] = "HelloHelloHelloWorldWorldWorld";
		ret_test = strstr(test, needle[i]);
		ret_user = ft_strstr(user, needle[i]);
		if (str_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case3_ft_strstr(void)
{
	char *ret_test;
	char *ret_user;
	char needle[][10] = {"'", "åå", " ", "\0"};

	for (int i = 0; i < 4; i++)
	{
		char test[] = "Hi I'm åååå 42";
		char user[] = "Hi I'm åååå 42";
		ret_test = strstr(test, needle[i]);
		ret_user = ft_strstr(user, needle[i]);
		if (str_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

void test_ft_strstr(void)
{
	NAME("ft_strstr.c");
	// case1
	case1_ft_strstr() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strstr() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_strstr() == 1 ? OK(3) : KO(3);
	putchar('\n');
	return;
}
