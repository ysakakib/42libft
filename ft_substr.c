/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 22:48:03 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/06 21:44:05 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	l;

	if (!s)
		return (NULL);
	i = 0;
	l = ft_strlen(s);
	if (start >= l)
		return (ft_strdup(""));
	if (len > l - start)
		len = l - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	int		start;
// 	int		len;

// 	s1 = "hello world";
// 	start = 6;
// 	len = 4;
// 	s2 = ft_substr(s1, start, len);
// 	printf("%s\n", s2);
// 	s1 = "hello world";
// 	start = 11;
// 	len = 4;
// 	s2 = ft_substr(s1, start, len);
// 	printf("%s\n", s2);
// 	free(s2);
// 	return (0);
// }

// 間違い
//  char	*ft_substr(char const *s, unsigned int start, size_t len)
//  {
//  	size_t	l1;
//  	size_t	l2;
//  	char	*sub;
//  	size_t	i;

// 	i = 0;
// 	l1 = ft_strlen(s) - start;
// 	sub = (char *)malloc(sizeof(char) * (l1 + 1));
// 	if (!sub)
// 		return (NULL);
// 	if (l1 <= 0)
// 	{
// 		sub[0] = '\0';
// 		return (sub);
// 	}
// 	if (l1 < len)
// 	{
// 		// l2 =l1 - len;
// 		while (i <= l1)
// 		{
// 			sub[i] = s[start];
// 			i++;
// 			start++;
// 		}
// 		sub[i] = '\0';
// 		return (sub);
// 	}
// 	while (i <= len)
// 	{
// 		sub[i] = s[start];
// 		i++;
// 		start++;
// 	}
// 	sub[i] = '\0';
// 	return (str);
// }
