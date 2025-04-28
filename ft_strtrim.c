/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:04:20 by vinguyen          #+#    #+#             */
/*   Updated: 2025/04/28 19:56:22 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	unsigned int	k;
	char			*out;

	end = ft_strlen(str) - 1;
	start = 0;
	k = 0;
	if (!str || !set)
		return (NULL);
	while (ft_strchr(set, str[start]))
		start++;
	while (ft_strrchr(set, str[end]))
		end--;
	out = (char *)malloc(end - start + 2);
	if (!out)
		return (NULL);
	while (start <= end)
	{
		out[k] = str[start];
		start++;
		k++;
	}
	out[k] = '\0';
	return (out);
}
