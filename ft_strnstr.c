/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:23:24 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/07 21:46:22 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len && big[i + j] != '\0')
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*b;
// 	char	*l;

// 	b = "hello world";
// 	l = "world";
// 	printf("%p\n", ft_strnstr(b, l, 60));
// 	b = "hello world";
// 	l = "false";
// 	printf("%p\n", ft_strnstr(b, l, 60));
// 	b = "hello world";
// 	l = "world";
// 	printf("%p\n", strnstr(b, l, 60));
// 	b = "hello world";
// 	l = "false";
// 	printf("%p\n", strnstr(b, l, 60));
// 	return (0);
// }

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	if (little[0] == '\0')
// 		return ((char *)big);
// 	while (i < len && big[i] != '\0')
// 	{
// 		j = 0;
// 		while (big[i + j] == little[j] && (i + j) < len && big[i + j] != '\0')
// 		{
// 			if (little[j + 1] == '\0')
// 				return ((char *)&big[i]);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }


// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	if (little[0] == '\0')
// 		return ((char *)big);
// 	while (big[i] != '\0' && i < len)
// 	{
// 		j = 0;
// 		while (big[i + j] == little[j] && (i + j) < len)
// 		{
// 			if (little[j + 1] == '\0')
// 				return ((char *)&big[i]);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }
