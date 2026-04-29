/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 20:40:21 by yusakaki          #+#    #+#             */
/*   Updated: 2026/04/29 22:24:51 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_separator(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (is_separator(s[i], c))
		i++;
	while (s[i])
	{
		if (!is_separator(s[i], c))
		{
			count++;
			while (s[i] && !is_separator(s[i], c))
				i++;
		}
		else
		{
			while (s[i] && is_separator(s[i], c))
				i++;
		}
	}
	return (count);
}

char	*word_spliter(char const *s, char c, int i)
{
	int		j;
	char	*str;
	int		k;

	j = i;
	while (s[i] && !is_separator(s[i], c))
		i++;
	str = (char *)malloc(sizeof(char) * (i - j + 1));
	if (!str)
		return (NULL);
	k = 0;
	while (!is_separator(s[j], c) && s[j])
	{
		str[k] = s[j];
		j++;
		k++;
	}
	str[k] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c) // constとは何？
{
	int size;
	size = count_words(s, c);
	char **array;
	array = (char **)malloc(sizeof(char *) * size + 1);
	if (!array || !s || !c)
		return (NULL);
	int i = 0;
	while (is_separator(s[i], c))
		i++;
	int j = 0;
	while (s[i])
	{
		if (!is_separator(s[i], c))
		{
			array[j] = word_spliter(s, c, i);
			j++;
		}
		while (s[i] && !is_separator(s[i], c))
			i++;
		while (s[i] && is_separator(s[i], c))
			i++;
	}
	array[j] = NULL;
	return (array);
}

int	main(void)
{
	char	s[] = " hello world";
	char	c;
	char	**a;
	int		i;

	c = ' ';
	a = ft_split(s, c);
	i = 0;
	while (a[i])
	{
		printf("%s\n", a[i]);
		free(a[i]);
		i++;
	}
	return (0);
}
