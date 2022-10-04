/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/27 12:15:21 by dtran         #+#    #+#                 */
/*   Updated: 2022/10/04 17:43:17 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lstcount;

	lstcount = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst->next;
		lstcount++;
	}
	return (lstcount);
}

