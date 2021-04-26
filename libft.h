#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

void	*ft_memset (void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *destination, const void *source, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove (void *dest, const void *src, size_t n);
void	*ft_memchr (const void *arr, int c, size_t n);
int		ft_memcmp (const void *arr1, const void *arr2, size_t n);
size_t	ft_strlen(const char *s);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
int ft_islower(int c);
int ft_isupper(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
int	ft_isspace(int c);
int ft_isprint(int c);
int ft_isnotprint(int c);
int ft_isascii(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int	ft_atoi(const char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr (const char *str, int ch);
void	*ft_memrchr (const void *arr, int c, size_t n);
size_t	ft_strlcpy (char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
void ft_putchar_fd(char c, int fd);
void ft_putnbr_fd(int n, int fd);
char	**ft_split(char const *s, char c);



t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);








#endif