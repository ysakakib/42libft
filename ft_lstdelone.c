/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 22:53:10 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/06 00:13:18 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void	del_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*node;
// 	char	*str;

// 	str = strdup("Hello, 42!");
// 	node = (t_list *)malloc(sizeof(t_list));
// 	if (!node)
// 		return (1);
// 	node->content = str;
// 	node->next = NULL;
// 	printf("%s\n", (char *)node->content);
// 	ft_lstdelone(node, del_content);
// 	return (0);
// }
