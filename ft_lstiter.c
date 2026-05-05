/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 01:12:20 by yusakaki          #+#    #+#             */
/*   Updated: 2026/05/06 01:49:38 by yusakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// void	make_upper(void *content)
// {
// 	char	*str;

// 	str = (char *)content;
// 	while (*str)
// 	{
// 		*str = toupper((unsigned char)*str);
// 		str++;
// 	}
// }

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	node1 = ft_lstnew(ft_strdup("hello"));
// 	node2 = ft_lstnew(ft_strdup("world"));
// 	node3 = ft_lstnew(ft_strdup("42tokyo"));
// 	node1->next = node2;
// 	node2->next = node3;
// 	printf("--- [1] Display initial contents ---\n");
// 	ft_lstiter(node1, print_content);
// 	printf("\n--- [2] Converting to Uppercase ---\n");
// 	ft_lstiter(node1, make_upper);
// 	printf("\n--- [3] Display updated contents ---\n");
// 	// 再度表示して確認
// 	ft_lstiter(node1, print_content);
// 	// 後片付け（本来は ft_lstclear などを使うのがベストです）
// 	return (0);
// }
