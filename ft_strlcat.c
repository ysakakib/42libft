/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 21:03:25 by yusakaki          #+#    #+#             */
/*   Updated: 2026/04/26 21:49:12 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(dst) >= size)
		return (ft_strlen(src) + size);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + ft_strlen(dst));
}

int	main(void)
{
	char	src[20] = "hello ";
	char	dst[20] = "world";

	printf("%zu\n", ft_strlcat(dst, src, 4));
	return (0);
}
