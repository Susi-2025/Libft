/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:19:56 by vinguyen          #+#    #+#             */
/*   Updated: 2025/04/15 19:24:04 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	size_t			i;

	i = 0;
	if (dest == src)
		return (dest);
	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (dest1 > src1)
	{
		while (n-- > 0)
			dest1[n] = src1[n];
	}
	else
	{			
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	dest1[i] = '\0';
	return (dest);
}
