/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:13:28 by yusakaki          #+#    #+#             */
/*   Updated: 2026/04/27 13:32:57 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int main(void)
{
	int c = 'a';
	printf("%c\n", ft_tolower(c));
	c = 'A';
	printf("%c\n", ft_tolower(c));
	c = '-';
	printf("%c\n", ft_tolower(c));
	return (0);
}
