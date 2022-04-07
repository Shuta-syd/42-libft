#include "test.h"
#include "../libft.h"

int case1_ft_isalpha(void)
{
	int ret_test;
	int ret_user;
	int test[] = {'a', 'z', 'A', 'Z'};
	int user[] = {'a', 'z', 'A', 'Z'};

	for (int i = 0; i < 4; i++)
	{
		ret_test = isalpha(test[i]);
		ret_user = ft_isalpha(user[i]);
		if (int_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case2_ft_isalpha(void)
{
	int ret_test;
	int ret_user;
	int test[] = {' ', '\r', '\n', '\0', 131};
	int user[] = {' ', '\r', '\n', '\0', 131};

	for (int i = 0; i < 5; i++)
	{
		ret_test = isalpha(test[i]);
		ret_user = ft_isalpha(user[i]);
		if (int_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

void test_ft_isalpha(void)
{
	NAME("ft_isalpha.c");
	// case1
	case1_ft_isalpha() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_isalpha() == 1 ? OK(2) : KO(2);
	putchar('\n');
	return;
}
