/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ting <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:51:31 by ting              #+#    #+#             */
/*   Updated: 2023/09/22 21:01:37 by ting             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;
	
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	(*new).content = content;
	(*new).next = NULL;
	return (new);
}
/*
int	main(void)
{
	t_list	*sample = ft_lstnew("Hello World");

	if (sample)
	{
		printf("%s\n", (char *)sample->content);
		free(sample);
	}
	else
		printf("Error occured\n");
	return (1);
}
*/
