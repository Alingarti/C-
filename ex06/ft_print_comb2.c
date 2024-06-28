/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angarti <angarti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 08:48:08 by angarti           #+#    #+#             */
/*   Updated: 2024/06/27 18:44:20 by angarti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	c;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			c = '0' + (a / 10);
			write(1, &c, 1);
			c = '0' + (a % 10);
			write(1, &c, 1);
			write(1, " ", 1);
			c = '0' + (b / 10);
			write(1, &c, 1);
			c = '0' + (b % 10);
			write(1, &c, 1);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}