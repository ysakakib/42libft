/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 13:41:55 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/03 13:42:00 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*buffer;
	unsigned char	uc;
	size_t			i;

	buffer = (unsigned char *)b;
	uc = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		buffer[i] = uc;
		i++;
	}
	return (b);
}

int	main(void)
{
	char	str[10] = "AAAAAA";

	printf("%s\n", (char *)memset(str, 'B', 5));
	printf("%s\n", (char *)ft_memset(str, 'B', 5));
	return (0);
}

// void	*ft_memset(void *b, int c, size_t len)
// {
// 	unsigned char	*p;
// 	size_t	i;

// 	p = (unsigned char *)b;
// 	i = 0;
// 	while (i < len)
// 	{
// 		p[i] = (unsigned char)c;
// 		i++;
// 	}
// 	return (b);
// }

// void	*ft_memset(void *b, int c, size_t len)
// {
// 	size_t i = 0;
// 	unsigned char *dst = (unsigned char *)b;
// 	while (i < len)
// 	{
// 		dst[i] = c;
// 		i++;
// 	}
// 	return (b);
// }

// void	*ft_memset(void *b, int c, size_t len)
// {
// 	size_t i = 0;
// 	char *s = (char *)b;
// 	while (i < len)
// 	{
// 		s[i] = c;
// 		i++;
// 	}
// 	return ((void	*)s);
// }
