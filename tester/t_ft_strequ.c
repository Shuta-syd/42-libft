#include "test.h"
#include "../libft.h"

int case1_ft_strequ(void)
{
	int ret_user;
	char user[] = "Hello!";
	char srcs[][30] = {"Hello!Hello!", "Hello!Hello!Hello!", "Hello!", "Hello World and 42Tokyo!"};
	int result[] = {0, 0, 1, 0};

	for (int i = 0; i < 4; i++)
	{
		ret_user = ft_strequ(user, srcs[i]);
		if (ret_user != result[i])
			return (0);
	}
	return (1);
}

int case2_ft_strequ(void)
{
	int ret_user;
	char user[] = "Hello World and 42Tokyo!";
	char srcs[][30] = {"Hello World", "World", "Hello!", "Hello World and 42Tokyo!"};
	int result[] = {0, 0, 0, 1};

	for (int i = 0; i < 4; i++)
	{
		ret_user = ft_strequ(user, srcs[i]);
		if (ret_user != result[i])
			return (0);
	}
	return (1);
}

int case3_ft_strequ(void)
{
	int ret_user;
	char user[] = "Hello åååååååå";
	char srcs[][50] = {"Hello åååååååå", "Hello √√√√√", "Hello åååååååå It's worng"};
	int result[] = {1, 0, 0};

	for (int i = 0; i < 3; i++)
	{
		ret_user = ft_strequ(user, srcs[i]);
		if (ret_user != result[i])
			return (0);
	}
	return (1);
}

int case4_ft_strequ(void)
{
	int ret_user;
	char user[] = " 		";
	char srcs[][20] = {" ", " 		", "\0"};
	int result[] = {0, 1, 0};

	for (int i = 0; i < 3; i++)
	{
		ret_user = ft_strequ(user, srcs[i]);
		if (ret_user != result[i])
			return (0);
	}
	return (1);
}

void test_ft_strequ(void)
{
	NAME("ft_strequ.c");
	// case1
	case1_ft_strequ() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strequ() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_strequ() == 1 ? OK(3) : KO(3);
	// case4
	case4_ft_strequ() == 1 ? OK(4) : KO(4);
	putchar('\n');
	return;
}
