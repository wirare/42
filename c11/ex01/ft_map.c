/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellanglo <ellanglo@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:45:45 by ellanglo          #+#    #+#             */
/*   Updated: 2024/07/29 13:13:29 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int	ft_is_odd(int nb)
{
	return (nb % 2);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*values;

	i = 0;
	values = malloc(sizeof(int) * length);
	if (values == NULL)
		return (NULL);
	while (i < length)
	{
		values[i] = f(tab[i]);
		i++;
	}
	return (values);
}

int	main(int ac, char **av)
{
	int	size;
	int	*tab;

	srand(time(NULL));
	size = atoi(av[1]);
	tab = malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++)
		tab[i] = rand();
	tab = ft_map(tab, size, *ft_is_odd);
	for (int i = 0; i < size; i++)
		printf("%d", tab[i]);
	free(tab);
}
