/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 20:40:21 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/05 04:42:07 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	**free_all(char **res, int i)
{
	while (i > 0)
	{
		i--;
		free(res[i]);
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;
	int		i;
	size_t	word_len;

	words = count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		word_len = 0;
		while (s[word_len] && s[word_len] != c)
			word_len++;
		res[i] = ft_substr(s, 0, word_len);
		if (!res[i])
			return (free_all(res, i));
		s += word_len;
		i++;
	}
	res[i] = NULL;
	return (res);
}

// int	main(void)
// {
// 	char	s[] = " hello world";
// 	char	c;
// 	char	**a;
// 	int		i;

// 	c = ' ';
// 	a = ft_split(s, c);
// 	i = 0;
// 	while (a[i])
// 	{
// 		printf("%s\n", a[i]);
// 		free(a[i]);
// 		i++;
// 	}
// 	return (0);
// }

// int	is_separator(char s, char c)
// {
// 	if (s == c)
// 		return (1);
// 	return (0);
// }

// int	count_words(char const *s, char c)
// {
// 	int	i;
// 	int	count;

// 	i = 0;
// 	count = 0;
// 	while (is_separator(s[i], c))
// 		i++;
// 	while (s[i])
// 	{
// 		if (!is_separator(s[i], c))
// 		{
// 			count++;
// 			while (s[i] && !is_separator(s[i], c))
// 				i++;
// 		}
// 		else
// 		{
// 			while (s[i] && is_separator(s[i], c))
// 				i++;
// 		}
// 	}
// 	return (count);
// }

// char	*word_spliter(char const *s, char c, int i)
// {
// 	int		j;
// 	char	*str;
// 	int		k;

// 	j = i;
// 	while (s[i] && !is_separator(s[i], c))
// 		i++;
// 	str = (char *)malloc(sizeof(char) * (i - j + 1));
// 	if (!str)
// 		return (NULL);
// 	k = 0;
// 	while (!is_separator(s[j], c) && s[j])
// 	{
// 		str[k] = s[j];
// 		j++;
// 		k++;
// 	}
// 	str[k] = '\0';
// 	return (str);
// }

// char	**ft_split(char const *s, char c)
// {
// 	int		size;
// 	char	**array;
// 	int		i;
// 	int		j;

// 	size = count_words(s, c);
// 	array = (char **)malloc(sizeof(char *) * (size + 1));
// 	if (!array)
// 		return (NULL);
// 	i = 0;
// 	while (is_separator(s[i], c))
// 		i++;
// 	j = 0;
// 	while (s[i])
// 	{
// 		if (!is_separator(s[i], c))
// 		{
// 			array[j] = word_spliter(s, c, i);
// 			j++;
// 		}
// 		while (s[i] && !is_separator(s[i], c))
// 			i++;
// 		while (s[i] && is_separator(s[i], c))
// 			i++;
// 	}
// 	array[j] = NULL;
// 	return (array);
// }
