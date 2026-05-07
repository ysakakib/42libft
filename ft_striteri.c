/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 05:41:14 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/06 21:49:09 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// static void	my_test_func(unsigned int i, char *c)
// {
// 	if (i % 2 != 0 && *c >= 'a' && *c <= 'z')
// 	{
// 		*c -= ('a' - 'A');
// 	}
// }

// int	main(void)
// {
// 	char	str[] = "hello world";

// 	printf("Before: %s\n", str);
// 	ft_striteri(str, my_test_func);
// 	printf("After:  %s\n", str);
// 	return (0);
// }
