/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_actions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvecchio <hvecchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 03:30:20 by hvecchio          #+#    #+#             */
/*   Updated: 2024/06/05 15:14:21 by hvecchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_back(t_stack *stack, t_stack_elem *new_elem)
{
	if (!stack->stack_elem)
		stack->stack_elem = new_elem;
	else
	{
		ft_elem_last(stack->stack_elem)->next = new_elem;
		new_elem->prev = ft_elem_last(stack->stack_elem);
		new_elem->next = stack->stack_elem;
		(stack->stack_elem)->prev = new_elem;
	}
	stack->size += 1;
}

t_stack_elem	*ft_elem_new(int value, t_stack *stack_a)
{
	t_stack_elem *elem;
	
	elem = malloc(sizeof(t_stack_elem));
	if (!elem)
		return (ft_free(stack_a), ft_error(), NULL); // TODO a verifier
	elem->value = value;
	elem->next = elem;
	elem->prev = elem;
	return (elem);
}

t_stack	*ft_elem_last(t_stack_elem *elem)
{
	if (elem == NULL)
		return (NULL);
	return (elem->prev);
}
