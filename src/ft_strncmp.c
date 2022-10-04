/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 10:51:17 by dtran         #+#    #+#                 */
/*   Updated: 2022/10/04 17:55:34 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t	idx;

	idx = 0;
	while (idx < num)
	{
		if (str1[idx] == '\0' || str2[idx] == '\0')
			return ((unsigned char)str1[idx] - (unsigned char)str2[idx]);
		else if (str1[idx] != str2[idx])
			return ((unsigned char)str1[idx] - (unsigned char)str2[idx]);
		idx++;
	}
	return (0);
}
