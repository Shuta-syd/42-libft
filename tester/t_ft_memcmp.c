#include "test.h"
#include "../libft.h"

int case1_ft_memcmp(void)
{
	int ret_test;
	int ret_user;
	int input[] = {0, 5, 10, 15, 21, 100};
	char test[] = "Hello World 42Tokyo!";
	char user[] = "Hello World 42Tokyo!";
	char str[] = "Hello World 42Tokyo!";

	for (int i = 0; i < 6; i++)
	{
		ret_test = memcmp(test, str, input[i]);
		ret_user = ft_memcmp(user, str, input[i]);
		if (int_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case2_ft_memcmp(void)
{
	int ret_test;
	int ret_user;
	int input[] = {0, 5, 10, 15, 21, 100};
	char test[] = "Hello World 42Tokyo!";
	char user[] = "Hello World 42Tokyo!";
	char str[] = "Hello World 92Tokyo!";

	for (int i = 0; i < 6; i++)
	{
		ret_test = memcmp(test, str, input[i]);
		ret_user = ft_memcmp(user, str, input[i]);
		if (int_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case3_ft_memcmp(void)
{
	int ret_test;
	int ret_user;
	int input[] = {0, 5, 16, 100};
	char test[] = "Hi I'm shuta";
	char user[] = "Hi I'm shuta";
	char str[] = "Hi I'm å√∂";

	for (int i = 0; i < 6; i++)
	{
		ret_test = memcmp(test, str, input[i]);
		ret_user = ft_memcmp(user, str, input[i]);
		if (int_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

void test_ft_memcmp(void)
{
	NAME("ft_memcmp.c");
	// case1
	case1_ft_memcmp() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_memcmp() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_memcmp() == 1 ? OK(3) : KO(3);
	putchar('\n');
	return;
}
