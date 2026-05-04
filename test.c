/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 17:18:35 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/04 17:35:41 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft(char* const s)
{
	printf("%s", s);
	s[2] = 'k';
	printf("%s", s);
}

int main(void)
{
	char *a = "nkoji";
	// char *b = "nomura";
	// char **s = ab;
	ft(a);
	return (0);
}
