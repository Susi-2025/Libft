/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strampi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:11:11 by vinguyen          #+#    #+#             */
/*   Updated: 2025/04/22 16:24:35 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strampi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*out;

	i = 0;
	while (s[i])
		i++;
	out = (char *)malloc(i + 1);
	if (!out)
		return (0);
	i = 0;
	while (s[i])
	{
		out[i] = f(i, s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}
