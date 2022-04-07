#include "test.h"
int str_ret_cmp(char *ret_test, char *ret_user)
{
	int ret_cmp;

	if (ret_test == 0 && ret_user == 0)
		return (1);
	ret_cmp = strcmp(ret_test, ret_user);
	if (ret_cmp == 0)
		return (1);
	return (0);
}

int int_ret_cmp(int ret_test, int ret_user)
{
	if (ret_test == ret_user)
		return (1);
	else
		return (0);
}
