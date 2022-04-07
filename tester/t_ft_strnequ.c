#include "test.h"
#include "../libft.h"

int case1_ft_strnequ(void)
{
	int ret_user;
	char user[] = "Hello!";
	char srcs[] = "Hello World and 42Tokyo!";
	int input[] = {0, 5, 10, 20, 50, 100};
	int result[] = {1, 1, 0, 0, 0, 0};

	for (int i = 0; i < 6; i++)
	{
		ret_user = ft_strnequ(user, srcs, input[i]);
		if (ret_user != result[i])
			return (0);
	}
	return (1);
}

void test_ft_strnequ(void)
{
	NAME("ft_strnequ.c");
	// case1
	case1_ft_strnequ() == 1 ? OK(1) : KO(1);
	putchar('\n');
	return;
}
