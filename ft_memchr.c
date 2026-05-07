/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:54:49 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/07 20:08:47 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*s;
// 	char	c;

// 	s = "hello world";
// 	c = 'e';
// 	printf("%p\n", ft_memchr(s, c, 6));
// 	s = "hello world";
// 	c = 'e';
// 	printf("%p\n", memchr(s, c, 6));
// 	s = "hello world";
// 	c = 'a';
// 	printf("%p\n", ft_memchr(s, c, 6));
// 	s = "hello world";
// 	c = 'a';
// 	printf("%p\n", memchr(s, c, 6));
// 	return (0);
// }

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	unsigned char	*str;
// 	size_t			i;

// 	i = 0;
// 	str = (unsigned char *)s;
// 	if (!s)//不要、本家同様クラッシュしても良い。
// 		return (NULL);
// 	while (i < n)
// 	{
// 		if (str[i] == c)//(unsigned char)cにしなければならない
// 			return ((void *)&str[i]);
// 		i++;
// 	}
// 	return (NULL);
// }

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	unsigned char	*str;
// 	unsigned char	uc;
// 	size_t			i;

// 	str = (unsigned char *)s;
// 	uc = (unsigned char)c;
// 	i = 0;
// 	while (i < n)
// 	{
// 		if (str[i] == uc)
// 			return ((void *)&str[i]);
// 		i++;
// 	}
// 	return (NULL);
// }

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	size_t i = 0;
// 	unsigned char *str = (unsigned char *)s;
// 	while (i < n)
// 	{
// 		if (str[i] == c)
// 			return (str[i]);
// 		i++;
// 	}
// }
