/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 04:50:19 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/05 05:42:13 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	size_t			len;

	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// i 番目の文字をどう加工は自由
// static char	my_mapping_function(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (toupper(c));
// 	return (c);
// }

// int	main(void)
// {
// 	char	*str;
// 	char	*result;

// 	str = "hello world";
// 	printf("Original: %s\n", str);
// 	result = ft_strmapi(str, my_mapping_function);
// 	if (result == NULL)
// 		return (1);
// 	printf("Result  : %s\n", result);
// 	free(result);
// 	return (0);
// }
