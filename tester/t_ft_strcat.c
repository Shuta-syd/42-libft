#include "test.h"
#include "../libft.h"

int case1_ft_strcat(void)
{
	char *ret_test;
	char *ret_user;
	char test[100] = "Hello ";
	char user[100] = "Hello ";
	char strs[][30] = {"World", "42Tokyo", "ååå", "  "};

	for (int i = 0; i < 4; i++)
	{
		ret_test = strcat(test, strs[i]);
		ret_user = ft_strcat(user, strs[i]);
		if (str_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case2_ft_strcat(void)
{
	char *ret_test;
	char *ret_user;
	char test[100] = "Hello ";
	char user[100] = "Hello ";
	char *str1 = test;
	char *str2 = user;

	ret_test = strcat(test, str1);
	ret_user = ft_strcat(user, str2);
	return (str_ret_cmp(ret_test, ret_user));
}

void test_ft_strcat(void)
{
	NAME("ft_strcat.c");
	// case1
	case1_ft_strcat() == 1 ? OK(1) : KO(1);
	// case2
	// case2_ft_strcat() == 1 ? OK(2) : KO(2);
	putchar('\n');
	return;
}
