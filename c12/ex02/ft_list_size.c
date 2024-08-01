/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellanglo <ellanglo@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:34:50 by ellanglo          #+#    #+#             */
/*   Updated: 2024/08/01 19:45:37 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i;
	t_list	*current_node;

	current_node = begin_list;
	while(current_node->next != (void *)0)
	{
		i++;
		current_node = current_node->next;
	}
	return (i);
}
