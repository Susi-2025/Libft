/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:13:24 by vinguyen          #+#    #+#             */
/*   Updated: 2025/04/28 11:13:25 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list    *ft_lstlast(t_list *lst)
{
    if(!lst)
        return (NULL);
    while (lst != NULL && lst -> next != NULL)
        lst = lst -> next;
    return (lst);
}
