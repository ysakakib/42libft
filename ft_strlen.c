/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:37:33 by yusakaki          #+#    #+#             */
/*   Updated: 2026/04/24 16:02:20 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

// int main(void)
// {
// 	char* s = "hello world";

// 	// printf("%zu\n", strlen(s));
// 	printf("%zu\n", ft_strlen(s));
// 	return (0);
// }
