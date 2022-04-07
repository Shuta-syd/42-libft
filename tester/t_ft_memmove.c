#include "test.h"
#include "../libft.h"

int case1_ft_memmove(void)
{
	char *ret_test;
	char *ret_user;
	char test[] = "1234567890";
	char user[] = "1234567890";

	ret_test = memmove(test + 4, test, 6);
	ret_user = ft_memmove(user + 4, user, 6);
	return (str_ret_cmp(ret_test, ret_user));
}

int case2_ft_memmove(void)
{
	char *ret_test;
	char *ret_user;
	char test[20] = "1234567890";
	char user[20] = "1234567890";
	const char src[] = "hello world";

	ret_test = memmove(test, src, sizeof(src));
	ret_user = ft_memmove(user, src, sizeof(src));
	return (str_ret_cmp(ret_test, ret_user));
}

int case3_ft_memmove(void)
{
	char *ret_test;
	char *ret_user;
	char test[20] = "1234567890";
	char user[20] = "1234567890";

	ret_test = memmove(test, test + 4, 5);
	ret_user = ft_memmove(user, user + 4, 5);
	return (str_ret_cmp(ret_test, ret_user));
}

void test_ft_memmove(void)
{
	NAME("ft_memmove.c");
	// case1
	case1_ft_memmove() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_memmove() == 1 ? OK(2) : KO(2);
	// case3
	case2_ft_memmove() == 1 ? OK(2) : KO(2);
	putchar('\n');
	return;
}
