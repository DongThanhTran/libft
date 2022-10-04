/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 16:42:15 by dtran         #+#    #+#                 */
/*   Updated: 2022/10/04 17:55:59 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx1;
	size_t	idx2;

	idx1 = 0;
	if (!*needle)
		return ((char *)haystack);
	while (idx1 < len && haystack[idx1] != '\0')
	{
		idx2 = 0;
		while (haystack[idx1 + idx2] == needle[idx2] && idx1 + idx2 < len)
		{
			idx2++;
			if (needle[idx2] == '\0')
				return (((char *)haystack) + idx1);
		}
		idx2 = 0;
		idx1++;
	}
	return (0);
}
