#include "test.h"
#include "../libft.h"

int case1_ft_strrchr(void)
{
	char *ret_test;
	char *ret_user;
	char test[] = "Hello World 42Tokyo!Hello World 42Tokyo!";
	char user[] = "Hello World 42Tokyo!Hello World 42Tokyo!";

	ret_test = strrchr(test, '4');
	ret_user = ft_strrchr(user, '4');
	if (str_ret_cmp(ret_test, ret_user) == 0)
		return (0);
	ret_test = strrchr(test, 'b');
	ret_user = ft_strrchr(user, 'b');
	if (str_ret_cmp(ret_test, ret_user) == 0)
		return (0);
	return (1);
}

int case2_ft_strrchr(void)
{
	char *ret_test;
	char *ret_user;
	char test[] = "Hi I'm åååçççåååHi I'm åååçççååå";
	char user[] = "Hi I'm åååçççåååHi I'm åååçççååå";

	ret_test = strrchr(test, 135); // 135 -> ç
	ret_user = ft_strrchr(user, 135);
	if (str_ret_cmp(ret_test, ret_user) == 0)
		return (0);
	return (1);
}

int case3_ft_strrchr(void)
{
	char *ret_test;
	char *ret_user;
	char test[] = "Hi I'm rockman";
	char user[] = "Hi I'm rockman";

	ret_test = strrchr(test, '\0');
	ret_user = ft_strrchr(user, '\0');
	if (str_ret_cmp(ret_test, ret_user) == 0)
		return (0);
	return (1);
}

void test_ft_strrchr(void)
{
	NAME("ft_strrchr.c");
	// case1
	case1_ft_strrchr() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strrchr() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_strrchr() == 1 ? OK(3) : KO(3);
	putchar('\n');
	return;
}
