/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:19:56 by vinguyen          #+#    #+#             */
/*   Updated: 2025/04/28 14:54:45 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	size_t			i;

	i = n;
	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (dest > src && dest < src + n)
	{
		while (i > 0)
		{
			i--;
			dest1[i] = src1[i];
		}
	}
	else
	{	
		i = 0;
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return (dest1);
}
