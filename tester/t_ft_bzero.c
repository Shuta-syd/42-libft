#include "test.h"
#include "../libft.h"

int	case1_ft_bzero(void)
{
	char	test[100] = {0};
	char	user[100] = {0};

	bzero(test, 1);
	ft_bzero(user, 1);
	return (str_ret_cmp(test, user));
}

int case2_ft_bzero(void)
{
	char	test[100] = {0};
	char	user[100] = {0};

	bzero(test, 20);
	ft_bzero(test, 20);
	return (str_ret_cmp(test, user));
}

void test_ft_bzero(void)
{
	NAME("ft_bzero.c");
	// case1
	case1_ft_bzero() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_bzero() == 1 ? OK(2) : KO(2);
	putchar('\n');
	return;
}
