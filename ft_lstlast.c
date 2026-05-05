/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 17:12:41 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/06 03:01:20 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*node1 = ft_lstnew("Node 1");
// 	t_list	*node2 = ft_lstnew("Node 2");
// 	t_list	*node3 = ft_lstnew("Node 3"); // これが最後のノードになるはず

// 	// リストを連結する
// 	node1->next = node2;
// 	node2->next = node3;

// 	// ft_lstlast を呼び出す
// 	t_list	*last = ft_lstlast(node1);

// 	// 結果の確認
// 	if (last)
// 		printf("最後のノードの内容: %s\n", (char *)last->content);
// 	else
// 		printf("リストは空です。\n");

// 	// メモリ解放（簡易的）
// 	free(node1);
// 	free(node2);
// 	free(node3);

// 	return (0);
// }
