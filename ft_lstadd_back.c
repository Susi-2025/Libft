/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:12:27 by vinguyen          #+#    #+#             */
/*   Updated: 2025/04/28 11:12:29 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{   
    t_list *temp;
    
    if (!lst || !new)
        return;
    if (*lst == NULL)
    {
        *lst = new;
        new -> next = NULL;
        return;
    }
    temp = *lst;
    while (temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = new;
    new -> next = NULL;
    return;
}
