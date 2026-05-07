/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:22:07 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/07 20:36:23 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((int)(str1[i] - str2[i]));
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "hello\0world!";
// 	s2 = "hello\0world";
// 	printf("%d\n", ft_memcmp(s1, s2, 60));
// 	s1 = "hello\0world";
// 	s2 = "hello\0world";
// 	printf("%d\n", ft_memcmp(s1, s2, 60));
// 	s1 = "hello\0world!";
// 	s2 = "hello\0world";
// 	printf("%d\n", memcmp(s1, s2, 60));
// 	s1 = "hello\0world";
// 	s2 = "hello\0world";
// 	printf("%d\n", memcmp(s1, s2, 60));
// 	return (0);
// }


// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	size_t			i;
// 	unsigned char	*str1;
// 	unsigned char	*str2;

// 	i = 0;
// 	str1 = (unsigned char *)s1;
// 	str2 = (unsigned char *)s2;
// 	while (i < n)
// 	{
// 		if (str1[i] != str2[i])
// 			return ((int)(str1[i] - str2[i]));
// 		i++;
// 	}
// 	return (0);
// }


// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	size_t			i;
// 	unsigned char	*str1;
// 	unsigned char	*str2;

// 	i = 0;
// 	str1 = (unsigned char *)s1;
// 	str2 = (unsigned char *)s2;
// 	if (n == 0)
// 		return (0);
// 	while(i <= (n - 1) && str1[i] == str2[i])//if文を使った方が良い
// 		i++;
// 	return ((int)(str1[i] - str2[i]));
// }

// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	size_t				i;
// 	const unsigned char	*str1;
// 	const unsigned char	*str2;

// 	i = 0;
// 	str1 = (const unsigned char *)s1;
// 	str2 = (const unsigned char *)s2;
// 	while (i < n)
// 	{
// 		if (str1[i] != str2[i])
// 			return (str1[i] - str2[i]);
// 		i++;
// 	}
// 	return (0);
// }

// ゴミ値を比較してしまうことがあるコードになっているため
// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	size_t i;
// 	const unsigned char *str1;
// 	const unsigned char *str2;

// 	i = 0;
// 	str1 = (const unsigned char *)s1;
// 	str2 = (const unsigned char *)s2;
// 	while (i < n && str1[i] == str2[i])
// 		i++;
// 	return(str1[i] - str2[i]);
// }
