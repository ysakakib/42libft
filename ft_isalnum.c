/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:15:54 by username          #+#    #+#             */
/*   Updated: 2026/05/06 20:07:51 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int	main(void)
// {
// 	int c = '8';

// 	printf("%d\n", ft_isalnum(c));
// printf("%d\n", isalnum(c));
// 	return (0);
// }

// int	ft_isalnum(int c)
// {
// 	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A'
// 			&& c <= 'Z'))
// 		return (1);
// 	return (0);
// }


// int	ft_isalnum(int c)
// {
// 	return (ft_isalpha(c) || ft_isdigit(c));
// }
