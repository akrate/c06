/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:53:57 by aoussama          #+#    #+#             */
/*   Updated: 2024/09/11 13:46:33 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(char **str, int size)
{
	int		i;
	int		j;
	char	*swp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (str_cmp(str[j], str[j + 1]) > 0)
			{
				swp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = swp;
			}
			j++;
		}
		i++;
	}
}

int	ft_len(char *s)
{
	int	i;

	i = 0 ;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	ft_sort_params(av, ac);
	while (i < ac)
	{
		write(1, av[i], ft_len(av[i]));
		write(1, "\n", 1);
		i++;
	}
}
