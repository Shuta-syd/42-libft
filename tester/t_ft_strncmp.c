#include "test.h"
#include "../libft.h"

int case1_ft_strncmp(void)
{
	int ret_test;
	int ret_user;
	char test[] = "Hello!";
	char user[] = "Hello!";
	char srcs[][30] = {"Hello World!", "World", "Hello!", "Hello World and 42Tokyo!"};
	int input[] = {0, 5, 10, 20, 50, 100};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			ret_test = strncmp(test, srcs[i], input[j]);
			ret_user = ft_strncmp(user, srcs[i], input[j]);
			if (int_ret_cmp(ret_test, ret_user) == 0)
			{
				printf("\n%d %d", i, j);
				printf(" %d %d", ret_test, ret_user);
				return (0);
			}
		}
	}
	return (1);
}

int case2_ft_strncmp(void)
{
	int ret_test;
	int ret_user;
	char test[] = "Hello World and 42Tokyo!";
	char user[] = "Hello World and 42Tokyo!";
	char srcs[][30] = {"World Hello!", "World", "Hello!", "Hello World and 42Tokyo!"};
	int input[] = {0, 5, 10, 20, 50, 100};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			ret_test = strncmp(test, srcs[i], input[j]);
			ret_user = ft_strncmp(user, srcs[i], input[j]);
			if (int_ret_cmp(ret_test, ret_user) == 0)
				return (0);
		}
	}
	return (1);
}

int case3_ft_strncmp(void)
{
	int ret_test;
	int ret_user;
	char test[] = "Hello åååååååå";
	char user[] = "Hello åååååååå";
	char srcs[][30] = {"Hello åååååååå", "Hello √√√√√", "Hello World and 42Tokyo!"};
	int input[] = {0, 5, 10, 20, 50, 100};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			ret_test = strncmp(test, srcs[i], input[j]);
			ret_user = ft_strncmp(user, srcs[i], input[j]);
			if (int_ret_cmp(ret_test, ret_user) == 0)
			{
				printf("\n%d %d", i, j);
				printf(" %d %d", ret_test, ret_user);
				return (0);
			}
		}
	}
	return (1);
}

int case4_ft_strncmp(void)
{
	int ret_test;
	int ret_user;
	char test[] = " 		";
	char user[] = " 		";
	char srcs[][20] = {" ", " 		", "\0"};
	int input[] = {0, 5, 10, 20, 50, 100};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			ret_test = strncmp(test, srcs[i], input[j]);
			ret_user = ft_strncmp(user, srcs[i], input[j]);
			if (int_ret_cmp(ret_test, ret_user) == 0)
				return (0);
		}
	}
	return (1);
}

void test_ft_strncmp(void)
{
	NAME("ft_strncmp.c");
	// case1
	case1_ft_strncmp() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strncmp() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_strncmp() == 1 ? OK(3) : KO(3);
	// case4
	case4_ft_strncmp() == 1 ? OK(4) : KO(4);
	putchar('\n');
	return;
}
