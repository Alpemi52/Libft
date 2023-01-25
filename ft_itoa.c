/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuftuog <amuftuog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:25:07 by amuftuog          #+#    #+#             */
/*   Updated: 2022/10/21 12:17:23 by amuftuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static long	digit(int num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		i++;
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*pstr;
	int		i;
	long	nb;

	nb = n;
	i = digit(nb);
	pstr = (char *)malloc(i + 1);
	if (!pstr)
		return (NULL);
	if (n < 0)
	{
		nb *= -1;
		pstr[0] = '-';
	}
	pstr[i] = '\0';
	i--;
	while ((n < 0) <= i)
	{
		pstr[i] = (nb % 10) + 48;
		nb /= 10;
		i--;
	}
	return (pstr);
}
