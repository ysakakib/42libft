/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 09:04:31 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/06 17:40:21 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(src);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	ft_memcpy(dst, src, len + 1);
	return (dst);
}

// int main(void)
// {
// 	char *s = ft_strdup("hello world");
// 	printf("%s\n", s);
// 	s = strdup("hello world");
// 	printf("%s\n", s);
// 	free(s);
// 	return (0);
// }
