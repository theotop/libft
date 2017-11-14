/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:37:14 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/13 19:22:54 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

size_t	ft_strlen(char *str);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *str1, char *str2);
char	*ft_strncat(char *str1, const char *str2, size_t n);
char	*ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_itoa(int i);
char	*ft_strcat(char *str1, const char *str2);
void	ft_strclr(char *s);
char	*ft_strcpy(char *dst, const char *src);
void	ft_striter(char *s, void (*f)(char *));
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strnew(size_t size);
char	*strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const *needle, size_t len);
char	*ft_strstr(const char *haystack, const *needle);
int		ft_toupper(int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *src);
int		ft_tolower(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	ft_strdel(char **as);
void	ft_memdel(void **ap);
void	*ft_memalloc(size_t size);

#endif
