/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:53:06 by dle               #+#    #+#             */
/*   Updated: 2021/10/28 15:53:14 by dle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

int	main(void)
{
	ft_putnbr(42);
	ft_putchar(' ');
	ft_putnbr(0);
	ft_putchar(' ');
	ft_putnbr(123456);
	ft_putchar(' ');
	ft_putnbr(-1);
	ft_putchar(' ');
	ft_putnbr(-1230001);
	return (0);
}
