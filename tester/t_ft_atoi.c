#include "test.h"
#include "../libft.h"

int case1_ft_atoi(void)
{
	int ret_test;
	int ret_user;
	char test[][30] = {"42", "-42", "4792374", "hhfaiahiufa"};
	char user[][30] = {"42", "-42", "4792374", "hhfaiahiufa"};

	for (int i = 0; i < 4; i++)
	{
		ret_test = atoi(test[i]);
		ret_user = ft_atoi(user[i]);
		if (int_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case2_ft_atoi(void)
{
	int ret_test;
	int ret_user;
	char test[][30] =  {"      42", " 	  	-42", "\r\v\f 	42", "			"};
	char user[][30] = {"      42", " 	  	-42", "\r\v\f 	42", "			"};

	for (int i = 0; i < 4; i++)
	{
		ret_test = atoi(test[i]);
		ret_user = ft_atoi(user[i]);
		if (int_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case3_ft_atoi(void)
{
	int ret_test;
	int ret_user;
	char test[][30] = {"\0", "åååghdoi3", "++++473973", "-----434", "	2147483647", "	-2147483648"};
	char user[][30] = {"\0", "åååghdoi3", "++++473973", "-----434", "	2147483647", "	-2147483648"};

	for (int i = 0; i < 7; i++)
	{
		ret_test = atoi(test[i]);
		ret_user = ft_atoi(user[i]);
		if (int_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

void test_ft_atoi(void)
{
	NAME("ft_atoi.c");
	// case1
	case1_ft_atoi() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_atoi() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_atoi() == 1 ? OK(3) : KO(3);
	putchar('\n');
	return;
}
