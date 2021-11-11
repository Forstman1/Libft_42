#ifndef libft_h
#include <stddef.h>
#include <stdlib.h>
#define libft_h

char* printthings(char *str);
int ft_isalpha(int a);
int ft_isdigit(int a);
int ft_isalnum(int a);
int ft_isascii(int a);
int ft_toupper(int a);
int ft_tolower(int a);
int ft_isprint(int a);
size_t ft_strlen(const char *s);
void	*ft_memset(void *ptr, int i, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
int	ft_atoi(const char *str);
void	*ft_calloc(size_t n, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char **ft_split(const char *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);



#endif