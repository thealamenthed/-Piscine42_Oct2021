/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:08:21 by dle               #+#    #+#             */
/*   Updated: 2021/10/19 20:50:10 by dle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_put_nmb(char a, char b, char c)

{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	ft_print_comb(void)

{
	int	i;
	int	j;
	int	k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				ft_put_nmb(i, j, k);
				if (!(i == '7' && j == '8' && k == '9'))
					write(1, ",", 2);
				k ++;
			}
			j ++;
			k = j + 1;
		}
		i ++;
		j = i + 1;
		k = j + 1;
	}
}
