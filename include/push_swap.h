/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvecchio <hvecchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:36:44 by hvecchio          #+#    #+#             */
/*   Updated: 2024/06/10 14:14:05 by hvecchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> // TO REMOVE

typedef struct s_stack_elem
{
	int					value;
	int					position;
	int					move_cost;
	struct s_stack_elem	*target_below_node;
	struct s_stack_elem	*next;
	struct s_stack_elem	*prev;
}	t_stack_elem;

typedef struct s_stack
{
	t_stack_elem	*stack_elem;
	int				size;
	int				max_size;
	int				max_value;
	int				min_value;
}	t_stack;

void			ft_push_swap(int argc, char **argv);
void			ft_add_back(t_stack *stack, t_stack_elem *new_elem);
void			ft_stack_init(t_stack *stack_a, t_stack *stack_b);
void			ft_sort_three_elem(t_stack *stack_a);
void			ft_sort(t_stack *stack_a, t_stack *stack_b);
void			ft_sort_large(t_stack *stack_a, t_stack *stack_b);
void			ft_get_positions(t_stack *stack);
void			ft_find_target_position(t_stack *stack_a, t_stack *stack_b);
void			ft_determine_costs(t_stack *stack_a, t_stack *stack_b);
void			ft_apply_cheapest_move(t_stack *stack_a, t_stack *stack_b);
void			ft_parse(int argc, char **argv, t_stack *stack_a);
void			ft_parse_quoted_str(char **argv, t_stack *stack_a);
void			ft_duplicate_review(t_stack *stack_a);
void			ft_swap(t_stack *stack);
void			sa(t_stack *stack, int print_move);
void			sb(t_stack *stack, int print_move);
void			ss(t_stack *stack_a, t_stack *stack_b, int print_move);
void			ft_rrotate(t_stack *stack);
void			rra(t_stack *stack, int print_move);
void			rrb(t_stack *stack, int print_move);
void			rrr(t_stack *stack_a, t_stack *stack_b, int print_move);
void			ft_rotate(t_stack *stack);
void			ra(t_stack *stack, int print_move);
void			rb(t_stack *stack, int print_move);
void			rr(t_stack *stack_a, t_stack *stack_b, int print_move);
void			ft_push(t_stack *stack_src, t_stack *stack_dest);
void			pa(t_stack *stack_b, t_stack *stack_a, int print_move);
void			pb(t_stack *stack_a, t_stack *stack_b, int print_move);
void			ft_error(void);
void			ft_free(t_stack *stack_a, char **buffer);
void			ft_free_split(char **split);
void			ft_duplicate_review(t_stack *stack_a);
void			ft_get_min_on_top(t_stack *stack_a);
int				ft_is_sorted(t_stack *stack_a);
int				ft_atoi(char *str, t_stack *stack_a, char **buffer);
t_stack_elem	*ft_find_cheapest_elem(t_stack *stack_b);
t_stack_elem	*ft_min_elem(t_stack *stack_a);
t_stack_elem	*ft_max_elem(t_stack *stack_a);
t_stack_elem	*ft_new_e(int value, t_stack *stack_a, char **buffer);
t_stack_elem	*ft_elem_last(t_stack_elem *elem);
char			**ft_split(char const *s, char c);
void			ft_putstr_fd(char *s, int fd);
size_t			ft_strlen(const char *str);
void			ft_set_extrema(t_stack *stack_a);
void			ft_best_move_back(t_stack *stack_a, t_stack *stack_b);
void			ft_move_top_sa(t_stack *sa, t_stack_elem *cheap_e);
void			ft_move_top_sb(t_stack *sb, t_stack_elem *cheap_e);
void			ft_sort_five_elem(t_stack *stack_a, t_stack *stack_b);

#endif