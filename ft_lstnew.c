/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 15:42:52 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/06 01:23:47 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// int	main(void)
// {
// 	t_list	*node;
// 	char	*str;

// 	str = "Hello, 42!";
// 	// 1. ft_lstnew を呼び出して新しいノードを作成
// 	// 引数には保存したいデータ（ここでは文字列のポインタ）を渡します
// 	node = ft_lstnew(str);
// 	// 2. メモリ確保に成功したかチェック
// 	if (node == NULL)
// 	{
// 		printf("Memory allocation failed.\n");
// 		return (1);
// 	}
// 	// 3. 格納された内容を確認
// 	// node->content は void* 型なので、表示する際に適切な型にキャストします
// 	printf("Content: %s\n", (char *)node->content);
// 	// 4. next が NULL で初期化されているか確認
// 	if (node->next == NULL)
// 		printf("Next is successfully initialized to NULL.\n");
// 	// 5. 使用したメモリ（mallocで確保されたノード）を解放
// 	free(node);
// 	return (0);
// }
