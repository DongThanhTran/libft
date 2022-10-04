/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 11:48:52 by dtran         #+#    #+#                 */
/*   Updated: 2022/10/04 17:47:17 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t num)
{
	unsigned char	*ptr;
	size_t			idx;

	ptr = (unsigned char *)src;
	idx = 0;
	while (idx < num)
	{
		if (ptr[idx] == (unsigned char)c)
			return ((unsigned char *)src + idx);
		idx++;
	}
	return (0);
}
