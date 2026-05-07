/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:48:32 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/08 07:33:37 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	if (!lst)
		return (0);
	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list	*lst;

// 	// リストを繋げる（中身は何でもいいので NULL でOK）
// 	lst = ft_lstnew(NULL);
// 	lst->next = ft_lstnew(NULL);
// 	lst->next->next = ft_lstnew(NULL);

// 	// サイズを確認
// 	printf("Size: %d\n", ft_lstsize(lst)); // 期待値: 3

// 	return (0);
// }
