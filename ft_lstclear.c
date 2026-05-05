/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 23:01:56 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/06 01:28:14 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del || !*lst)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

// void	del_content(void *content)
// {
// 	free(content);
// 	printf("Content deleted.\n");
// }

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node1;
// 	t_list	*node2;

// 	head = malloc(sizeof(t_list));
// 	node1 = malloc(sizeof(t_list));
// 	node2 = malloc(sizeof(t_list));

// 	// 2. コンテンツ（文字列）を割り当て
// 	head->content = strdup("First Node");
// 	node1->content = strdup("Second Node");
// 	node2->content = strdup("Third Node");

// 	// 3. リストを連結
// 	head->next = node1;
// 	node1->next = node2;
// 	node2->next = NULL;

// 	printf("--- Before ft_lstclear ---\n");
// 	printf("Address of head: %p\n", (void *)head);

// 	// 4. ft_lstclear を実行
// 	// ノードのアドレスと削除用関数を渡します。
// 	ft_lstclear(&head, del_content);

// 	printf("--- After ft_lstclear ---\n");
// 	// 指示通り、最後にポインタがNULLになっているか確認
// 	if (head == NULL)
// 		printf("Head is now NULL. Success!\n");
// 	else
// 		printf("Head is NOT NULL. Check your implementation.\n");

// 	return (0);
// }
