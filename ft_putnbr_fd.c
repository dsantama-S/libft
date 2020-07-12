/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 09:14:13 by dsantama          #+#    #+#             */
/*   Updated: 2020/07/09 08:23:57 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int n2;

	n2 = n;
	if (n2 < 0)
	{
		ft_putchar_fd('-', fd);
		n2 *= -1;
	}
	if (n2 > 10)
		ft_putnbr_fd(n2 / 10, fd);
	ft_putchar_fd(n2 % 10 + 48, fd);
}
