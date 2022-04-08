# libft
## 関数一覧
### MANDATORY PART
- `void	*ft_memset(void *b, int c, size_t len)`  
メモリ領域bをlenバイト数cで埋める関数<br><br>
- `void	ft_bzero(void *b, size_t len)`  
メモリ領域bをlenバイト数0で初期化する関数<br><br>
- `void	*ft_calloc(size_t count, size_t size)`  
count(要素数) x size(バイト数)のメモリを確保し、同時に0で初期化する関数<br><br>
- `void	*ft_memcpy(void *dst, const void *src, size_t n)`  
メモリ領域srcの先頭nバイトをメモリ領域destにコピーする関数<br><br>
- `void	*ft_memccpy(void *dst, const void *src, int c, size_t n)`  
メモリ領域srcからメモリ領域destに最大でnバイトのコピーする関数  
nバイトコピーする前に文字cが見つかると、そこでコピーを中止する<br><br>
- `void	*ft_memmove(void *dst, const void *src, size_t n)`  
メモリ領域srcの先頭nバイトをメモリ領域destにコピーする関数  
メモリ領域が重なった場合（srcが前、dstが後場合）一時的な配列からdstにバイトのコピーが行われたかのように、コピーが行われる<br><br>
- `void	*ft_memchr(const void *s, int c, size_t n)`  
メモリ領域sからnバイト数において文字cを探索する関数<br><br>
- `int	ft_memcmp(const void *s1, const void *s2, size_t n)`  
メモリ領域s1とs2のnバイトを比較する関数<br><br>
- `size_t	ft_strlen(const char *s)`  
文字列sの要素するを求める関数<br><br>
- `char	*ft_strcpy(char *dst, const char *src)`  
文字列srcを文字列dstにコピーする関数<br><br>
- `char	*ft_strncpy(char *dst, const char *src, size_t len)`  
文字列srcを文字列dstにlenバイト数コピーする関数<br><br>
- `size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)`  
文字列srcから文字列dstまでdstsize -1文字までコピーする関数 srcの長さを返す<br><br>
- `char	*ft_strdup(const char *s1)`  
文字列sの複製である新しい文字列へのポインタを返す関数<br><br>
- `char	*ft_strcat(char *dst, const char *src)`  
文字列dstの末尾に文字列srcを連結する関数<br><br>
- `char	*ft_strncat(char *dst, const char *src, size_t n)`  
文字列dstの末尾に文字列srcをnバイト数だけ連結する関数<br><br>
- `size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)`  
dstsize - strlen(dst) - 1のバイト数分のみ文字列dstの末尾に文字列srcを連結する関数  
dst の初期値 + src の長さを返す<br><br>
- `char	*ft_strchr(const char *s, int c)`  
文字列s中に最初に文字cが現れた位置へのポインターを求める関数<br><br>
- `char *ft_strchr_rev(const char *s, int c)`  
文字列s中に最初に文字cでない文字が現れた位置へのポインターを求める関数<br><br>
- `char	*ft_strrchr(const char *s, int c)`  
文字列s中に最後に文字cが現れた位置へのポインターを求める関数<br><br>
- `char	*ft_strstr(const char *haystack, const char *needle)`  
文字列needleが文字列haystack中で最初に現れる位置を求める関する<br><br>
- `char	*ft_strnstr(const char *haystack, const char *needle, size_t n)`  
文字列needleが文字列haystackのnバイト数の中で最初に現れる位置を求める関する<br><br>
- `int	ft_strcmp(const char *s1, const char *s2)`  
二つの文字列s1とs2 を比較する関数<br><br>
- `int	ft_strncmp(const char *s1, const char *s2, size_t n)`  
二つの文字列s1とs2のnバイト数だけ比較する関数<br><br>
- `int	ft_atoi(const char *str)`  
char型の数値strをint型の数値に変換する関数<br><br>
- `char	*ft_itoa(int n)`  
int型の数値nをchar型の数値に変換する関数<br><br>
- `int	ft_isalpha(int c)`  
文字cが英字であるか調べる関数<br><br>
- `int	ft_isdigit(int c)`  
文字cが数字（0 ~ 9）であるか調べる関数<br><br>
- `int	ft_isalnum(int c)`  
文字cが英字または数字であるか調べる関数<br><br>
- `int	ft_isascii(int c)`  
文字cがASCIIコードに合致するか調べる関数<br><br>
- `int	ft_isprint(int c)`  
文字cが表示文字であるか調べる関数<br><br>
- `int	ft_toupper(int c)`  
文字cが小文字の場合、大文字に変換する関数<br><br>
- `int	ft_tolower(int c)`  
文字cが大文字の場合、小文字に変換する関数<br><br>
- `char	*ft_strnew(size_t size)`  
0で初期化され、sizeバイトを確保した文字列へのポインタを返す関数<br><br>
- `void	ft_striteri(char *s, void (*f)(unsigned int, char *))`  
文字列sを関数ポインタfに適用し、修正する関数<br><br>
- `char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))`  
文字列sを関数ポインタfに適用し、その戻り値を収容した文字列を返す関数<br><br>
- `char	*ft_substr(char const *s, unsigned int start, size_t len)`  
文字列sのindex番号startからlenバイト数だけ抽出した文字列を返す関数<br><br>
- `char	*ft_strjoin(char const *s1, char const *s2)`  
2つの文字列s1とs2を連結した新しい文字列を返す関数<br><br>
- `char	*ft_strtrim(char const *s1, char const *set)`  
文字列s1の前後に文字列setがある場合それらを削除した文字列を返す関数<br><br>
- `char	**ft_split(char const *s, char c)`  
文字列sを区切り文字cで区切った二次元配列を返す関する<br><br>
- `void	ft_putchar(char c)`  
文字cを標準出力する関数<br><br>
- `void	ft_putchar_fd(char c, int fd)`  
文字cをファイルディスクリプタfdに出力する関数<br><br>
- `void	ft_putstr(char const *s)`  
文字列sを標準出力する関数<br><br>
- `void	ft_putstr_fd(char const *s, int fd)`  
文字列sをファイルディスクリプタfdに出力する関数<br><br>
- `void	ft_putendl(char const *s);`  
文字列s（改行を含む）を標準出力する関数<br><br>
- `void	ft_putendl_fd(char const *s, int fd)`  
文字列s（改行を含む）をファイルディスクリプタfdに出力する関数<br><br>
- `void	ft_putnbr(int n)`  
int型の数値nを標準出力する関数<br><br>
- `void	ft_putnbr_fd(int n, int fd)`  
int型の数値nをファイルディスクリプタfdに出力する関数<br><br>

### BONUS PART
- `t_list	*ft_lstnew(void const *content)`  
メンバを初期化したt_listを返す関数<br><br>
- `void	ft_lstadd_front(t_list **lst, t_list *new)`  
メンバを初期化したt_listを返す関数<br><br>
- `void	ft_lstadd_front(t_list **lst, t_list *new)`  
lstの先頭にnewを追加する関数<br><br>
- `int	ft_lstsize(t_list *lst)`  
lstに含まれるサイズを求める関数<br><br>
- `t_list	*ft_lstlast(t_list *lst)`  
lst最後のlistを返す関数<br><br>
- `void	ft_lstadd_back(t_list **lst, t_list *new)`  
lstの最後のlistにnewを追加する関数<br><br>
- `void	ft_lstdelone(t_list *lst, void (*del)(void *))`  
del()およびfree(3)を用いてlstのメモリを解放する関数  
lstのメンバnextは解放してはならない<br><br>
- `void	ft_lstclear(t_list **lst, void (*del)(void *))`  
del()およびfree(3)を用いてlstの全メモリを解放する関数  
すべてのlstはNULLで初期化される<br><br>
- `void	ft_lstiter(t_list *lst, void (*f)(void *))`  
lstのメンバ各contentにf()を適用する関数<br><br>
- `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))`  
f()を適用した新しいlistを返す関数<br><br>

ft_split callocエラーチェック 
