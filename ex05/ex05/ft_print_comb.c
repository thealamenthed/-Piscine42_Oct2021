/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:24:52 by dle               #+#    #+#             */
/*   Updated: 2021/10/28 14:24:57 by dle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	numb[3];	

	numb[0] = '0';
	while (numb[0] <= '9')
	{
		numb[1] = numb[0] + 1;
		while (numb[1] <= '9')
		{
			numb[2] = numb[1] + 1;
			while (numb[2] <= '9')
			{
				ft_putchar(numb[0]);
				ft_putchar(numb[1]);
				ft_putchar(numb[2]);
				if (!(numb[0] == '7' && numb[1] == '8' && numb[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				numb[2]++;
			}
			numb[1]++;
		}
		numb[0]++;
	}
}
