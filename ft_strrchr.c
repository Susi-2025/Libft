/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:51:17 by vinguyen          #+#    #+#             */
/*   Updated: 2025/04/21 14:55:54 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;
	int			i;

	p = s;
	i = 0;
	while (p[i])
		i++;
	i--;
	while (p[i] && (i >= 0))
	{
		if (p[i] == c)
			return ((char *)&p[i]);
		i--;
	}
	return ((void *)0);
}
