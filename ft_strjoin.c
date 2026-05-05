/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:33:32 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/06 02:59:36 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*s;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1, len1 + 1);
	ft_strlcat(s, s2, len1 + len2 + 1);
	return (s);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*s;

// 	s1 = "hello ";
// 	s2 = "world";
// 	s = ft_strjoin(s1, s2);
// 	printf("%s\n", s);
// 	free(s);
// 	return (0);
// }

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	size;
// 	char	*s;

// 	i = 0;
// 	j = 0;
// 	size = ft_strlen(s1) + ft_strlen(s2);
// 	s = (char *)malloc(sizeof(char) * (size + 1));
// 	if (!s)
// 		return (NULL);
// 	while (s1[i] != '\0')
// 	{
// 		s[i] = s1[i];
// 		i++;
// 	}
// 	while (s2[j] != '\0')
// 	{
// 		s[i + j] = s2[j];
// 		j++;
// 	}
// 	s[i + j] = '\0';
// 	return (s);
// }

// int	ft_strlen(char const *s1, char const *s2)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	while (s1[i])
// 		i++;
// 	while (s2[j])
// 	{
// 		i++;
// 		j++;
// 	}
// 	return (i);
// }

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	int		size;
// 	char	*s;
// 	int		i;
// 	int		j;

// 	size = ft_strlen(s1, s2);
// 	s = (char *)malloc(sizeof(char) * (size + 1));
// 	if (!s)
// 		return (NULL);
// 	i = 0;
// 	while (s1[i])
// 	{
// 		s[i] = s1[i];
// 		i++;
// 	}
// 	j = 0;
// 	while (s2[j])
// 	{
// 		s[i] = s2[j];
// 		i++;
// 		j++;
// 	}
// 	s[i] = '\0';
// 	return (s);
// }

// int	main(int ac, char **av)
// {
// 	char	*s;

// 	if (ac != 3)
// 	{
// 		printf("error\n");
// 		return (0);
// 	}
// 	s = ft_strjoin(av[1], av[2]);
// 	printf("%s\n", s);
// 	free(s);
// 	return (0);
// }
