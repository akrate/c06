/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:32:26 by aoussama          #+#    #+#             */
/*   Updated: 2024/09/11 13:32:28 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = ac;
	j--;
	if (ac > 1)
	{
		while (j >= 1)
		{
			i = 0;
			while (av[j][i] != '\0')
			{
				write(1, &av[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j--;
		}
	}
}
