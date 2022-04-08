mv file_func_name_cmp.sh ../
mv file_func_name_cmp.c ../
rm -rf file_func_name_tester
find . -name 'ft_*.c' >> filename_user.txt
gcc filename_cmp.c
./a.out
rm -f filename_user.txt
