#include "test.h"
#include "../libft.h"

int case1_ft_strlcat(void)
{
	int ret_test;
	int ret_user;
	char str[] = "World, I'm a software enginner.";

	for (int i = 0; i < 100; i++)
	{
		char test[100] = "Hello ";
		char user[100] = "Hello ";
		ret_test = strlcat(test, str, i);
		ret_user = ft_strlcat(user, str, i);
		if (str_ret_cmp(test, user) == 0 || int_ret_cmp(ret_test, ret_user) == 0)
		{
			printf("i->%d test->%d %s user->%d %s ", i, ret_test, test, ret_user, user);
			return (0);
		}
	}
	return (1);
}

int case2_ft_strlcat(void)
{
	int ret_test;
	int ret_user;
	char str[] = "åååååååååååååååååååååååå";

	for (int i = 0; i < 100; i++)
	{
		char test[100] = "Hello ";
		char user[100] = "Hello ";
		ret_test = strlcat(test, str, i);
		ret_user = ft_strlcat(user, str, i);
		if (str_ret_cmp(test, user) == 0 || int_ret_cmp(ret_test, ret_user) == 0)
		{
			printf("test->%d %s user->%d %s ", ret_test, test, ret_user, user);
			return (0);
		}
	}
	return (1);
}

void test_ft_strlcat(void)
{
	NAME("ft_strlcat.c");
	// case1
	case1_ft_strlcat() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strlcat() == 1 ? OK(2) : KO(2);
	putchar('\n');
	return;
}
