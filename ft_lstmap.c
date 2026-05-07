/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 12:00:00 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/08 07:32:48 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new_lst;

// 	// 1. 適当にリストを作成
// 	lst = ft_lstnew(strdup("42"));
// 	lst->next = ft_lstnew(strdup("Tokyo"));

// 	// 2. ft_lstmap を実行
// 	// 内容をコピーしたいだけなので、f には strdup、del には free を入れる
// 	new_lst = ft_lstmap(lst, (void *(*)(void *))strdup, free);

// 	// 3. 表示
// 	t_list *tmp = new_lst;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}

// 	// 4. 解放（本当は lst も new_lst もやるべきですが、最小構成ということで）
// 	ft_lstclear(&lst, free);
// 	ft_lstclear(&new_lst, free);
// 	return (0);
// }
