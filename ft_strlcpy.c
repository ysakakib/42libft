/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:54:26 by yusakaki          #+#    #+#             */
/*   Updated: 2026/04/24 18:17:18 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	if ()
	int i;
	size_t len;

	len = ft_strlen(dstsize);
	if (dstsize == 0)
		return (0);
	i = 0;
	while (i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

int main(void)
{
	size_t size = 4;
	char src = "hello world";
	char dst[40];
	printf("%zu\n", strlcpy(dst, size, src));
	printf("%zu\n", ft_strlcpy(dst, size, src));
	return (0);
}
