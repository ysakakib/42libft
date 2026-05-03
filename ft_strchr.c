/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:15:05 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/03 17:17:05 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;

	cc = (char)c;
	while (*s != '\0')
	{
		if (*s == cc)
			return ((char *)s);
		s++;
	}
	if (cc == '\0')
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
