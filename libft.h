/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <gferreir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:41:29 by gferreir          #+#    #+#             */
/*   Updated: 2024/05/02 17:59:30 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h> 

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* Funções de Verificação de Caracteres */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

/* Funções de Manipulação de Memória */
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);

/* Funções de Manipulação de Strings */
char	**ft_split(const char *s, char c);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *s1);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *str, const char *to_find);
size_t	ft_strtok(const char *s, char c);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_substr(const char *s, unsigned int start, size_t len);

/* Funções de Conversão de Caracteres */
int		ft_toupper(int c);
int		ft_tolower(int c);

/* Funções de Conversão de Strings > Inteiro */
int		ft_atoi(const char *nptr);

/* Funções de Conversão de Inteiro > String */
char	*ft_itoa(int n);

/* Funções de Saída de Caracteres */
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

/* bonus - Funcoes que lidam com listas*/
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

/* adicionais*/
int		ft_abs(int i);
int		ft_isspace(int c);
int		ft_isnegative(int num);
int		ft_numlen(int n, int base);
long	ft_atol(const char *str);
char	*ft_itoa_base(int n, int base);
#endif
