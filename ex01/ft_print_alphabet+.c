/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet+.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:26:03 by dle               #+#    #+#             */
/*   Updated: 2021/10/18 18:56:40 by dle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_print_alphabet(void)
{
        write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

void    ft_print_alphabet(void);
int	main(void)
{

ft_print_alphabet();
	return (0);
	
}
