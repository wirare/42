/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellanglo <ellanglo@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 22:06:47 by ellanglo          #+#    #+#             */
/*   Updated: 2024/08/01 22:10:18 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*node;

	while (node->next != (void *)0)
		node = node->next;
	return (node);
}
