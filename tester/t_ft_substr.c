#include "test.h"
#include "../libft.h"

int case1_ft_substr(void)
{
	char *ret_user;
	char srcs[] = "Hello World and 42Tokyo!";
	char result[][30] = {"", "Hello", "Hello Worl", "Hello World and 42To", "Hello World and 42Tokyo!"};
	int input[] = {0, 5, 10, 20, 50};

	for (int i = 0; i < 5; i++)
	{
		ret_user = ft_substr(srcs, 0, input[i]);
		if (str_ret_cmp(result[i], ret_user) == 0)
			return (0);
		free(ret_user);
	}
	return (1);
}

void test_ft_substr(void)
{
	NAME("ft_substr.c");
	// case1
	case1_ft_substr() == 1 ? OK(1) : KO(1);
	putchar('\n');
	return;
}
