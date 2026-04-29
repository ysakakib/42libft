/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:54:49 by yusakaki          #+#    #+#             */
/*   Updated: 2026/04/29 22:24:25 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	uc;
	size_t			i;

	str = (unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *s = "hello world";
// 	char c = 'e';
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
