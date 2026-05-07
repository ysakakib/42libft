/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:15:05 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/08 06:14:25 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

// int main(void)
// {
// 	int c = '\0';
// 	char *s = "hello world";
// 	printf("%s\n", ft_strchr(s, c));
// 	c = '\0';
// 	s = "hello world";
// 	printf("%s\n", strchr(s, c));
// 	c = 'e';
// 	s = "hello world";
// 	printf("%s\n", ft_strchr(s, c));
// 	c = 'e';
// 	s = "hello world";
// 	printf("%s\n", strchr(s, c));
// 	return (0);
// }

// char	*ft_strchr(const char *s, int c)
// {
// 	while (*s)
// 	{
// 		if (*s == c)
// 			return ((char *)s);
// 		s++;
// 	}
// 	if (c == '\0')
// 		return ((char *)s);
// 	return (NULL);
// }

// char	*ft_strchr(const char *s, int c)
// {
// 	// char *str = (char *)s;
// 	size_t i = 0;
// 	while(s)
// 	{
// 		if (s = c)
// 			return((char *)&s);
// 			s++;
// 	}
// 	return (NULL);
// }
