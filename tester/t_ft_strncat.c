#include "test.h"
#include "../libft.h"

int case1_ft_strncat(void)
{
	char *ret_test;
	char *ret_user;
	char test[100] = "Hello ";
	char user[100] = "Hello ";
	char str[] = "World, I'm a software enginner.";
	size_t input[] = {0, 5, 15, 20, 35, 100};

	for (int i = 0; i < 5; i++)
	{
		ret_test = strncat(test, str, input[i]);
		ret_user = ft_strncat(user, str, input[i]);
		if (str_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case2_ft_strncat(void)
{
	char *ret_test;
	char *ret_user;
	char test[100] = "Hello ";
	char user[100] = "Hello ";
	char str[] = "ååååååååååååååååååå";
	size_t input[] = {0, 5, 15, 20, 35, 100};

	for (int i = 0; i < 5; i++)
	{
		ret_test = strncat(test, str, input[i]);
		ret_user = ft_strncat(user, str, input[i]);
		if (str_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

void test_ft_strncat(void)
{
	NAME("ft_strncat.c");
	// case1
	case1_ft_strncat() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strncat() == 1 ? OK(2) : KO(2);
	putchar('\n');
	return;
}
