/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:23:24 by yusakaki          #+#    #+#             */
/*   Updated: 2026/04/28 17:05:48 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n;
	size_t h = 0;
	if (haystack[0] == '\0')
		return ((char *)haystack);
	while (haystack[h] != '\0')
	{
		n =0;
		while (needle[n] == haystack[h + n] && (h + n) < len)
		{
			if (needle[n + 1] == '\0')
				return (needle);
			n++;
		}
		h++;
	}
	return (NULL);
}

int main(void)
{
	char *h = "hello world";
	char *n = "world";
	printf("%s\n", ft_strnstr(h, n, 60));
	return (0);
}
