/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:40:46 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/07 15:40:52 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_check_sorted(int *tab, int size)
{
	int		i;
	char	check;

	i = 0;
	check = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			check = 1;
		}
		i++;
	}
	if (check == 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (!ft_check_sorted(tab, size))
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tab[i] ^= tab[i + 1];
				tab[i + 1] ^= tab[i];
				tab[i] ^= tab[i + 1];
			}
			i++;
		}
		i = 0;
	}
}
