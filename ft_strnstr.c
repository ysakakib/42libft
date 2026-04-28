/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:23:24 by yusakaki          #+#    #+#             */
/*   Updated: 2026/04/29 08:08:39 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l;
	size_t	b;

	b = 0;
	if (big[0] == '\0')
		return ((char *)big);
	while (big[b] != '\0')
	{
		l = 0;
		while (little[l] == big[b + l] && (b + l) < len)
		{
			if (little[l + 1] == '\0')
				return ((char *)&big[b]);
			l++;
		}
		b++;
	}
	return (NULL);
}

int	main(void)
{
	char	*b;
	char	*l;

	b = "bello world";
	l = "world";
	printf("%p\n", ft_strnstr(b, l, 60));
	return (0);
}
