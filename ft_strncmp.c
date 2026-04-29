/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:18:49 by yusakaki          #+#    #+#             */
/*   Updated: 2026/04/29 22:25:18 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	// size_tだからnがマイナスにならないようにする
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// 間違えが多い
// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	size_t i;

// 	i = 0;
// 	while (i <= n && s1[i] != '\0' && s2[i] != '\0')
// 	{
// 		if (s1[i] != s2[i])
// 			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
// 		i++;
// 	}
// 	return (0);
// }

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "hello";
	s2 = "world";
	printf("%d\n", ft_strncmp(s1, s2, 4));
	s1 = "hello";
	s2 = "hello";
	printf("%d\n", ft_strncmp(s1, s2, 4));
	s1 = "hel";
	s2 = "hello";
	printf("%d\n", ft_strncmp(s1, s2, 6));
	s1 = "hello";
	s2 = "hel";
	printf("%d\n", ft_strncmp(s1, s2, 6));
	return (0);
}
