/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:45:11 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/08 06:14:25 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int main(void)
// {
// 	int c = 'a';
// 	printf("%c\n", ft_toupper(c));
// 	c = 'a';
// 	printf("%c\n", toupper(c));
// 	c = 'A';
// 	printf("%c\n", ft_toupper(c));
// 	c = 'A';
// 	printf("%c\n", toupper(c));
// 	c = '-';
// 	printf("%c\n", ft_toupper(c));
// 	c = '-';
// 	printf("%c\n", toupper(c));
// 	return (0);
// }

// int	ft_toupper(int c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return (c - ('a' - 'A'));
// 	return (c);
// }
