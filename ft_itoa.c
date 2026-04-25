/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:02:10 by yusakaki          #+#    #+#             */
/*   Updated: 2026/04/23 20:38:19 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_length(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*s;
	long	num;

	num = n;
	size = ft_length(n);
	s = (char *)malloc(sizeof(char) * (size + 1));
	if (!s)
		return (NULL);
	s[size] = '\0';
	if (num < 0)
	{
		s[0] = '-';
		num *= -1;
	}
	if (num == 0)
		s[0] = '0';
	while (num > 0)
	{
		s[size - 1] = (num % 10) + '0';
		num /= 10;
		size--;
	}

	return (s);
}

int	main(void)
{
	int		n;
	char	*s;

	n = -2147483648;
	s = ft_itoa(n);
	printf("%s\n", s);
	free (s);
	return (0);
}
