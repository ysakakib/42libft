/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 09:04:31 by yusakaki          #+#    #+#             */
/*   Updated: 2026/04/29 19:48:14 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *s2;
	size_t i = 0;
	size_t l;
	l = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * (l + 1));
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1 , l);
	return (s2);
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
