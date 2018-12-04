/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creek <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 21:52:15 by creek             #+#    #+#             */
/*   Updated: 2018/11/25 17:02:55 by creek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 || *s2)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}

int		sort_params(int argc, char **argv)
{
	int j;

	j = 1;
	while (j < argc - 1)
	{
		if (ft_strcmp(argv[j], argv[j + 1]) > 0)
		{
			argv[0] = argv[j];
			argv[j] = argv[j + 1];
			argv[j + 1] = argv[0];
			j = 0;
		}
		j++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	j = 1;
	sort_params(argc, argv);
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}
