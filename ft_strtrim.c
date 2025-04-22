/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:04:20 by vinguyen          #+#    #+#             */
/*   Updated: 2025/04/22 14:48:30 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	find_start(char const *str, char const *set)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (set[j])
		{
			if (str[i] != set[j])
				return (i);
			j++;
		}
		i++;
	}
	return (0);
}

unsigned int	find_end(char const *str, char const *set, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = len - 1;
	while (str[i])
	{
		j = 0;
		while (set[j])
		{
			if (str[i] != set[j])
				return (i);
			j++;
		}
		i--;
	}
	return (len - 1);
}

char	*ft_strtrim(char const *str, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	unsigned int	len;
	unsigned int	k;
	char			*out;

	len = 0;
	k = 0;
	if (set[len] == '\0')
		return (0);
	while (str[len])
		len++;
	out = (char *)malloc(len + 1);
	if (!out)
		return (0);
	start = find_start(str, set);
	end = find_end(str, set, len);
	while (start <= end)
	{
		out[k] = str[start];
		start++;
		k++;
	}
	out[k] = '\0';
	return (out);
}
