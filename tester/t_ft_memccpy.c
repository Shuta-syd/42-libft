#include "test.h"
#include "../libft.h"

int case1_ft_memccpy(void)
{
	char *ret_test;
	char *ret_user;
	char test[21] = {0};
	char user[21] = {0};
	char str[] = "hvoiahgoUfgaohvoatr";

	ret_test = memccpy(test, str, 'U', 0);
	ret_user = ft_memccpy(user, str, 'U', 0);
	return (str_ret_cmp(ret_test, ret_user));
}

int case2_ft_memccpy(void)
{
	char *ret_test;
	char *ret_user;
	char test[21] = {0};
	char user[21] = {0};
	char str[] = "afoyqty493ythfiWyqa";

	ret_test = memccpy(test, str, 'W', 19);
	ret_user = ft_memccpy(user, str, 'W', 19);
	return (str_ret_cmp(ret_test, ret_user));
}

int case3_ft_memccpy(void)
{
	char *ret_test;
	char *ret_user;
	char test[21] = {0};
	char user[21] = {0};
	char str[] = "hoahgou43W98tun20uo";

	ret_test = memccpy(test, str, 'W', 20);
	ret_user = ft_memccpy(user, str, 'W', 20);
	return (str_ret_cmp(ret_test, ret_user));
}

void test_ft_memccpy(void)
{
	NAME("ft_memccpy.c");
	// case1
	case1_ft_memccpy() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_memccpy() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_memccpy() == 1 ? OK(3) : KO(3);
	putchar('\n');
	return;
}
