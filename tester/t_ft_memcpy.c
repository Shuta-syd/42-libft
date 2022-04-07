#include "test.h"
#include "../libft.h"

int case1_ft_memcpy(void)
{
	char *ret_test;
	char *ret_user;
	char test[21] = {0};
	char user[21] = {0};
	char str[] = "test";

	ret_test = memcpy(test, str, 0);
	ret_user = ft_memcpy(user, str, 0);
	return (str_ret_cmp(ret_test, ret_user));
}

int case2_ft_memcpy(void)
{
	char *ret_test;
	char *ret_user;
	char test[21] = {0};
	char user[21] = {0};
	char str[] = "Hello World!";

	ret_test = memcpy(test, str, 1);
	ret_user = ft_memcpy(user, str, 1);
	return (str_ret_cmp(ret_test, ret_user));
}

int case3_ft_memcpy(void)
{
	char *ret_test;
	char *ret_user;
	char test[21] = {0};
	char user[21] = {0};
	char str[] = "haioghvoahgou4398turn20uo";

	ret_test = memcpy(test, str, 20);
	ret_user = ft_memcpy(user, str, 20);
	return (str_ret_cmp(ret_test, ret_user));
}

int case4_ft_memcpy(void)
{
	char *ret_test;
	char *ret_user;
	char test[21] = "Hello-World!";
	char user[21] = "Hello-World!";
	char *str1 = test;
	char *str2 = user;

	ret_test = memcpy(test, str1, 1);
	ret_user = ft_memcpy(user, str2, 1);
	return (str_ret_cmp(ret_test, ret_user));
}

void test_ft_memcpy(void)
{
	NAME("ft_memcpy.c");
	// case1
	case1_ft_memcpy() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_memcpy() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_memcpy() == 1 ? OK(3) : KO(3);
	// case4
	case4_ft_memcpy() == 1 ? OK(4) : KO(4);
	putchar('\n');
	return;
}
