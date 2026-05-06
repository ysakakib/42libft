/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:17:03 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/06 16:52:21 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (1)
	{
		if (*s == (char)c)
			last = (char *)s;
		if (!*s)
			return (last);
		s++;
	}
}

// int	main(void)
// {
// 	int c = '\0';
// 	char *s = "hello world";
// 	printf("%s\n", ft_strrchr(s, c));
// 	c = '\0';
// 	s = "hello world";
// 	printf("%s\n", strrchr(s, c));
// 	c = 'e';
// 	s = "hello world";
// 	printf("%s\n", ft_strrchr(s, c));
// 	c = 'e';
// 	s = "hello world";
// 	printf("%s\n", strrchr(s, c));
// 	return (0);
// }


// char	*ft_strrchr(const char *s, int c)
// {
// 	char	*last;

// 	last = NULL;
// 	while (1)
// 	{
// 		if (*s == (char)c)
// 			last = (char *)s;
// 		if (*s == '\0')
// 			break ;
// 		s++;
// 	}
// 	return (last);
// }
