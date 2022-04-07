#include "test.h"
#include "../libft.h"

int case1_ft_strcmp(void)
{
	int ret_test;
	int ret_user;
	char test[] = "Hello!";
	char user[] = "Hello!";
	char srcs[][30] = {"Hello!Hello!", "Hello!Hello!Hello!", "Hello!", "Hello World and 42Tokyo!"};

	for (int i = 0; i < 4; i++)
	{
		ret_test = strcmp(test, srcs[i]);
		ret_user = ft_strcmp(user, srcs[i]);
		if (int_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case2_ft_strcmp(void)
{
	int ret_test;
	int ret_user;
	char test[] = "Hello World and 42Tokyo!";
	char user[] = "Hello World and 42Tokyo!";
	char srcs[][30] = {"Hello World", "World", "Hello!", "Hello World and 42Tokyo!"};

	for (int i = 0; i < 4; i++)
	{
		ret_test = strcmp(test, srcs[i]);
		ret_user = ft_strcmp(user, srcs[i]);
		if (int_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case3_ft_strcmp(void)
{
	int ret_test;
	int ret_user;
	char test[] = "Hello åååååååå";
	char user[] = "Hello åååååååå";
	char srcs[][50] = {"Hello åååååååå", "Hello √√√√√", "Hello åååååååå It's worng"};

	for (int i = 0; i < 3; i++)
	{
		ret_test = strcmp(test, srcs[i]);
		ret_user = ft_strcmp(user, srcs[i]);
		if (int_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case4_ft_strcmp(void)
{
	int ret_test;
	int ret_user;
	char test[] = " 		";
	char user[] = " 		";
	char srcs[][20] = {" ", " 		", "\0"};

	for (int i = 0; i < 3; i++)
	{
		ret_test = strcmp(test, srcs[i]);
		ret_user = ft_strcmp(user, srcs[i]);
		if (int_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

void test_ft_strcmp(void)
{
	NAME("ft_strcmp.c");
	// case1
	case1_ft_strcmp() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strcmp() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_strcmp() == 1 ? OK(3) : KO(3);
	// case4
	case4_ft_strcmp() == 1 ? OK(4) : KO(4);
	putchar('\n');
	return;
}
