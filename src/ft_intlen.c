/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dtran <dtran@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/16 19:59:52 by dtran         #+#    #+#                 */
/*   Updated: 2022/10/04 17:32:47 by dtran         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_intlen(int num)
{
	int	len;

	len = 0;
	if (num <= 0)
		len++;
	while (num)
	{
		len++;
		num = num / 10;
	}
	return (len);
}
