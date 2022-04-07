#include "test.h"
#include "../libft.h"

int case1_ft_strjoin(void)
{
	char *ret_user;
	char s1[] = "Hello World ";
	char s2[] = "42Tokyo!";
	char result[] = "Hello World 42Tokyo!";

	ret_user = ft_strjoin(s1, s2);
	return (str_ret_cmp(result, ret_user));
}

int case2_ft_strjoin(void)
{
	char *ret_user;
	char s1[] = "Hi I'm ";
	char s2[] = "ååååååååå";
	char result[] = "Hi I'm ååååååååå";

	ret_user = ft_strjoin(s1, s2);
	return (str_ret_cmp(result, ret_user));
}

void test_ft_strjoin(void)
{
	NAME("ft_strjoin.c");
	// case1
	case1_ft_strjoin() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strjoin() == 1 ? OK(2) : KO(2);
	putchar('\n');
	return;
}
