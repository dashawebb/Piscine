/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creek <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:58:19 by creek             #+#    #+#             */
/*   Updated: 2018/11/25 16:35:25 by creek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	res = 0;
	if (nb >= 0 && nb < 13)
	{
		res = 1;
		while (nb > 0)
		{
			res *= nb;
			nb--;
		}
	}
	return (res);
}
