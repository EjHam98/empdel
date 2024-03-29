/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   stacks.h										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: codespace <codespace@student.42.fr>		+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/01/25 16:50:17 by codespace		 #+#	#+#			 */
/*   Updated: 2024/01/25 16:50:17 by codespace		###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#ifndef STACKS_H
# define STACKS_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include "string_utils.h"

typedef struct stack_node
{
	int					value;
	struct stack_node	*next;
}	t_stack;

int		pop(t_stack **s);
int		push(t_stack **s, t_stack *node);
int		stack_size(t_stack *s);
t_stack	*new_node(int value);
void	free_stack(t_stack **s);
char	*rotate(t_stack **s, int r, int a);
char	*move_top(t_stack **s1, t_stack **s2, int atb);
char	*swap_top(t_stack **s, int a);
void	double_rotate(t_stack **s, t_stack **h, int *n1, int *n2);
void	ft_print(char *s);

#endif