/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:00:16 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/06 02:57:15 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (sign == 1 && (result > LONG_MAX / 10 || (result == LONG_MAX / 10
					&& (str[i] - '0') > LONG_MAX % 10)))
			return ((int)LONG_MAX);
		if (sign == -1 && (result > (unsigned long)LONG_MIN / 10
				|| (result == (unsigned long)LONG_MIN / 10 && (str[i]
						- '0') > (unsigned long)LONG_MIN % 10)))
			return ((int)LONG_MIN);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(sign * result));
}

// int main(void)
// {
// 	printf("%d\n", ft_atoi("   42Tokyo"));
// 	printf("%d\n", ft_atoi("-42"));
//     printf("%d\n", ft_atoi("--42"));
//     printf("%d\n", ft_atoi(" +12345ab"));
// 	printf("%d\n", atoi("   42Tokyo"));
// 	printf("%d\n", atoi("-42"));
//     printf("%d\n", atoi("--42"));
//     printf("%d\n", atoi(" +12345ab"));
// 	return (0);
// }

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
