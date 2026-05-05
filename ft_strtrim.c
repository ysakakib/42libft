/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 21:47:13 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/05 01:51:32 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*first;
	char const	*last;

	first = s1;
	last = s1 + ft_strlen(s1);
	while (first < last && ft_strchr(set, *first))
		first++;
	while (first < last && ft_strchr(set, *(last - 1)))
		last--;
	return (ft_substr(first, 0, (last - first)));
}

// int	main(void)
// {
// 	char	t[50] = "- ";
// 	char	*s1;
// 	char	*s2;

// 	s1 = " -- hello world -- ";
// 	s2 = ft_strtrim(s1, t);
// 	printf("%s\n", s2);
// 	free(s2);
// 	return (0);
// }

// int	ft_strlen(char const *s1)
// {
// 	int	i;

// 	while (s1)
// 		i++;
// 	return (i);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	int		i;
// 	int		j;
// 	int		l;
// 	char	*s2;

// 	l = ft_strlen(s1);
// 	s2 = (char *)malloc(sizeof(char) * (l + 1));
// 	if (!s2)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	while (s1)
// 	{
// 		while (set)
// 		{
// 			if (s1[i] == set[i])
// 			{
// 				s2[j] = s1[i];
// 				j++;
// 			}
// 			i++;
// 		}
// 	}
// 	return (s2);
// }
