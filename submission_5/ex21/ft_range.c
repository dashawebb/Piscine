/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creek <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 23:20:54 by creek             #+#    #+#             */
/*   Updated: 2018/11/25 17:58:21 by creek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *new_array;
	int i;

	if (min >= max)
		return (NULL);
	else
	{
		new_array = (int *)malloc(sizeof(int) * (max - min));
		i = 0;
		while (i < (max - min))
		{
			new_array[i] = min + i;
			i++;
		}
		new_array[i] = '\0';
	}
	return (new_array);
}
