/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:18:02 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/08 06:52:16 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		l;
	long	nbr;

	nbr = n;
	l = get_len(n);
	s = (char *)malloc(sizeof(char) * (l + 1));
	if (!s)
		return (NULL);
	s[l] = '\0';
	if (nbr == 0)
		s[0] = '0';
	if (nbr < 0)
	{
		s[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		s[--l] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (s);
}

// int	main(void)
// {
// 	int		n;
// 	char	*s;

// 	n = -2147483648;
// 	s = ft_itoa(n);
// 	printf("%s\n", s);
// 	free(s);
// 	return (0);
// }

// int	ft_length(int n)
// {
// 	int	i;

// 	i = 0;
// 	if (n <= 0)
// 		i++;
// 	while (n != 0)
// 	{
// 		n /= 10;
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_itoa(int n)
// {
// 	int		size;
// 	char	*s;
// 	long	num;

// 	num = n;
// 	size = ft_length(n);
// 	s = (char *)malloc(sizeof(char) * (size + 1));
// 	if (!s)
// 		return (NULL);
// 	s[size] = '\0';
// 	if (num < 0)
// 	{
// 		s[0] = '-';
// 		num *= -1;
// 	}
// 	if (num == 0)
// 		s[0] = '0';
// 	while (num > 0)
// 	{
// 		s[size - 1] = (num % 10) + '0';
// 		num /= 10;
// 		size--;
// 	}
// 	return (s);
// }
