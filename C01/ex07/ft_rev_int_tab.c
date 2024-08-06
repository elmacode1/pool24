/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:50:24 by mael-gho          #+#    #+#             */
/*   Updated: 2024/07/28 15:35:27 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
/*#include<stdio.h>
int main()
{
	int i=0;
	int tab[4] = {1,0,6,-1};
	ft_rev_int_tab(tab,4);
	while(i<4)
	{
		printf("%d",tab[i]);
		i++;
	}*/
