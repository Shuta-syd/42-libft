#include "test.h"
#include "../libft.h"

int case1_ft_strlcpy(void)
{
	int ret_user;
	int ret_test;
	char *dst_user;
	char *dst_test;
	char src[][30] = {"Hello", "World", "Hello World", "Hello 42Tokyo. Hi I'm good"};
	size_t input[] = {1, 3, 5, 10, 20, 30, 50, 100};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			dst_user = malloc(30);
			dst_test = malloc(30);
			ret_user = ft_strlcpy(dst_user, src[i], input[j]);
			ret_test = strlcpy(dst_test, src[i], input[j]);
			if (str_ret_cmp(dst_test, dst_user) == 0 || int_ret_cmp(ret_test, ret_user) == 0)
				return (0);
			free(dst_user);
			free(dst_test);
		}
	}
	return (1);
}

int case2_ft_strlcpy(void)
{
	int ret_user;
	int ret_test;
	char *dst_user;
	char *dst_test;
	char src[][30] = {"å", "åå", "Hello ççççç", "ååç∂∂∑∂∑∂∑"};
	size_t input[] = {1, 3, 5, 10, 20, 30, 50, 100};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			dst_user = malloc(30);
			dst_test = malloc(30);
			ret_user = ft_strlcpy(dst_user, src[i], input[j]);
			ret_test = strlcpy(dst_test, src[i], input[j]);
			if (str_ret_cmp(dst_test, dst_user) == 0 || int_ret_cmp(ret_test, ret_user) == 0)
				return (0);
			free(dst_user);
			free(dst_test);
		}
	}
	return (1);
}

void test_ft_strlcpy(void)
{
	NAME("ft_strlcpy.c");
	// case1
	case1_ft_strlcpy() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strlcpy() == 1 ? OK(2) : KO(2);
	putchar('\n');
	return;
}
