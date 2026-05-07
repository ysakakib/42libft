/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:00:16 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/07 23:04:21 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_atoi(const char *str)
// {
// 	int		i;
// 	int		sign;
// 	long	res;
// 	long	prev;

// 	i = 0;
// 	sign = 1;
// 	res = 0;
// 	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
// 		i++;
// 	if (str[i] == '-' || str[i] == '+')
// 		if (str[i++] == '-')
// 			sign = -1;
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		prev = res;
// 		res = res * 10 + (str[i++] - '0');
// 		if (res < prev && sign == 1)
// 			return ((int)LONG_MAX);
// 		if (res < prev && sign == -1)
// 			return ((int)LONG_MIN);
// 	}
// 	return ((int)(res * sign));
// }

int	main(void)
{
	printf("%d\n", ft_atoi("   42Tokyo"));
	printf("%d\n", ft_atoi("-42"));
	printf("%d\n", ft_atoi("--42"));
	printf("%d\n", ft_atoi(" +12345ab"));
	printf("%d\n", atoi("   42Tokyo"));
	printf("%d\n", atoi("-42"));
	printf("%d\n", atoi("--42"));
	printf("%d\n", atoi(" +12345ab"));
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	long	res;
	long	prev;

	sign = 1;
	res = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		prev = res;
		res = res * 10 + (str[i++] - '0');
		if (res < prev && sign == 1)
			return ((int)LONG_MAX);
		if (res < prev && sign == -1)
			return ((int)LONG_MIN);
	}
	return (sign * res);
}

// int ft_atoi(const char *str)
// {
// 	int i = 0;
// 	int sign = 1;
// 	long result = 0;
// 	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
// 		i++;
// 	if (str[i] == '+' || str[i] == '-')
// 	{
// 		if (str[i] == '-')
// 			sign = -1;
// 		i++;
// 	}
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		result = result * 10 + (str[i] - '0');
// 		i++;
// 	}
// 	return ((int)sign * result);
// }
