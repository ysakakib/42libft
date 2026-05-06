/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 21:16:31 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/06 15:08:13 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}

// t_list	*simple_new_node(void *content)
// {
// 	t_list	*node;

// 	node = (t_list *)malloc(sizeof(t_list));
// 	if (!node)
// 		return (NULL);
// 	node->content = content;
// 	node->next = NULL;
// 	return (node);
// }

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*tmp;

// 	t_list *head = NULL; // 最初はリストは空
// 	node1 = simple_new_node("First");
// 	node2 = simple_new_node("Second");
// 	node3 = simple_new_node("Third");
// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	tmp = head;
// 	while (tmp)
// 	{
// 		printf("Node content: %s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	// メモリ解放（本来は ft_lstclear などで行うのが理想）
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }
