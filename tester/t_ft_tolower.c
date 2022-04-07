#include "test.h"
#include "../libft.h"

int case1_ft_tolower(void)
{
	int ret_test;
	int ret_user;

	for (int i = 0; i < 255; i++)
	{
		ret_test = tolower(i);
		ret_user = ft_tolower(i);
		if (int_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

void test_ft_tolower(void)
{
	NAME("ft_tolower.c");
	// case1
	case1_ft_tolower() == 1 ? OK(1) : KO(1);
	return;
}
