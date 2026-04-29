/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 09:02:08 by yusakaki          #+#    #+#             */
/*   Updated: 2026/04/29 16:00:01 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void *s;
	size_t ts;

	ts = count * size;

	s = malloc(ts);

	if (s == NULL)
		return (NULL);

	ft_bzero(s, ts);
	return (s);
}

// 間違え
// int main(void)
// {
// 	size_t c = 6;
// 	size_t s = 5;
// 	printf("%s\n", ft_calloc(c, s));
// 	return (0);
// }

int main(void)
{
    size_t count = 5;
    size_t size = sizeof(int); // int型を5個分
    int *res;
    size_t i;

    res = (int *)ft_calloc(count, size);

    if (res == NULL)
    {
        printf("Malloc failed\n");
        return (1);
    }

    // 中身がすべて 0 であることを確認
    i = 0;
    while (i < count)
    {
        printf("[%d] ", res[i]); // 全て 0 と表示されれば成功
        i++;
    }
    printf("\n");

    free(res);
    return (0);
}
