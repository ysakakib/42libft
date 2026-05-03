/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:03:14 by yusakaki          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/05/03 11:41:44 by yusakaki         ###   ########.fr       */
=======
/*   Updated: 2026/05/03 03:32:57 by yusakaki         ###   ########.fr       */
>>>>>>> 4390aeb (A)
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *buffer = (unsigned char *)b;
	unsigned char uc = (unsigned char)c;
	size_t i = 0;

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
