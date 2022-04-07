#include "test.h"
#include "../libft.h"

int case1_ft_strchr(void)
{
	char *ret_test;
	char *ret_user;
	char test[] = "Hello World 42Tokyo!";
	char user[] = "Hello World 42Tokyo!";

	ret_test = strchr(test, '4');
	ret_user = ft_strchr(user, '4');
	if (str_ret_cmp(ret_test, ret_user) == 0)
		return (0);
	ret_test = strchr(test, 'b');
	ret_user = ft_strchr(user, 'b');
	if (str_ret_cmp(ret_test, ret_user) == 0)
		return (0);
	return (1);
}

int case2_ft_strchr(void)
{
	char *ret_test;
	char *ret_user;
	char test[] = "Hi I'm åååçççååå";
	char user[] = "Hi I'm åååçççååå";

	ret_test = strchr(test, 135); // 135 -> ç
	ret_user = ft_strchr(user, 135);
	if (str_ret_cmp(ret_test, ret_user) == 0)
		return (0);
	return (1);
}

int case3_ft_strchr(void)
{
	char *ret_test;
	char *ret_user;
	char test[] = "Hi I'm rockman";
	char user[] = "Hi I'm rockman";

	ret_test = strchr(test, '\0');
	ret_user = ft_strchr(user, '\0');
	if (str_ret_cmp(ret_test, ret_user) == 0)
		return (0);
	return (1);
}

void test_ft_strchr(void)
{
	NAME("ft_strchr.c");
	// case1
	case1_ft_strchr() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strchr() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_strchr() == 1 ? OK(3) : KO(3);
	putchar('\n');
	return;
}
