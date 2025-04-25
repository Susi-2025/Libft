/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:07:20 by vinguyen          #+#    #+#             */
/*   Updated: 2025/04/21 14:54:20 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*p;

	p = s;
	while (*p)
	{
		if (*p == c)
			return ((char *)p);
		p++;
	}
	return ((void *)0);
}
