/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:18:02 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/08 06:14:25 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int main(void)
// {
// 	int c = '3';

// 	printf("%d\n", isprint(c));
// 	printf("%d\n", ft_isprint(c));
// 	return (0);
// }

// int	ft_isprint(int c)
// {
// 	if (c >= 32 || c <= 126)
// 		return (1);
// 	return (0);
// }
