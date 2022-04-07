#include "test.h"
#include "../libft.h"

int case1_ft_isprint(void)
{
	int ret_test;
	int ret_user;
	int test[] = {0, 1, '0', '9', 'A', 'a', 'Z'};
	int user[] = {0, 1, '0', '9', 'A', 'a', 'Z'};

	for (int i = 0; i < 7; i++)
	{
		ret_test = isprint(test[i]);
		ret_user = ft_isprint(user[i]);
		if (int_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case2_ft_isprint(void)
{
	int ret_test;
	int ret_user;
	int test[] = {' ', '\r', '\n', '\0', 131};
	int user[] = {' ', '\r', '\n', '\0', 131};

	for (int i = 0; i < 5; i++)
	{
		ret_test = isprint(test[i]);
		ret_user = ft_isprint(user[i]);
		if (int_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case3_ft_isprint(void)
{
	int ret_test;
	int ret_user;

	for (int i = 0; i < 255; i++)
	{
		ret_test = isprint(i);
		ret_user = ft_isprint(i);
		if (int_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

void test_ft_isprint(void)
{
	NAME("ft_isprint.c");
	// case1
	case1_ft_isprint() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_isprint() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_isprint() == 1 ? OK(3) : KO(3);
	putchar('\n');
	return;
}
