#include "test.h"
#include "../libft.h"

int case1_ft_strdup(void)
{
	char *ret_test;
	char *ret_user;
	char test[] = "Hello World 42Tokyo!";
	char user[] = "Hello World 42Tokyo!";

	ret_test = strdup(test);
	ret_user = ft_strdup(user);
	return (str_ret_cmp(ret_test, ret_user));
}

int case2_ft_strdup(void)
{
	char *ret_test;
	char *ret_user;
	char test[] = "Hi I'm åååå";
	char user[] = "Hi I'm åååå";

	ret_test = strdup(test);
	ret_user = ft_strdup(user);
	return (str_ret_cmp(ret_test, ret_user));
}

void test_ft_strdup(void)
{
	NAME("ft_strdup.c");
	// case1
	case1_ft_strdup() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strdup() == 1 ? OK(2) : KO(2);
	putchar('\n');
	return;
}
