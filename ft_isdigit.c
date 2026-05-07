/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:09:46 by username          #+#    #+#             */
/*   Updated: 2026/05/06 20:05:37 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	c = '5';

// 	printf("%d\n", ft_isdigit(c));
// 	printf("%d\n", isdigit(c));
// 	return (0);
// }


// int	ft_isdigit(int c)
// {
// 	if (c >= '0' || c <= '9')
// 		return (1);
// 	return (0);
// }
