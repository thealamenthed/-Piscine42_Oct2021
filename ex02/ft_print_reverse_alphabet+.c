/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet+.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:09:38 by dle               #+#    #+#             */
/*   Updated: 2021/10/18 19:26:31 by dle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)

{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

void	ft_print_reverse_alphabet(void);

int	main(void)

{
	ft_print_reverse_alphabet();
	return (0);
}
