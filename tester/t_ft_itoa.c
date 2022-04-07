#include "test.h"
#include "../libft.h"

int case1_ft_itoa(void)
{
	char *ret_user;
	int srcs[] = {
		42,
		4242,
		-42,
		-4242,
		2147483647,
		-2147483648
		};
	char result[][20] = {
		"42",
		"4242",
		"-42",
		"-4242",
		"2147483647",
		"-2147483648"
		};
	for (int i = 0; i < 6; i++)
	{
		ret_user = ft_itoa(srcs[i]);
		if (str_ret_cmp(result[i], ret_user) == 0)
			return (0);
		free(ret_user);
	}
	return (1);
}

void test_ft_itoa(void)
{
	NAME("ft_itoa.c");
	// case1
	case1_ft_itoa() == 1 ? OK(1) : KO(1);
	putchar('\n');
	return;
}
