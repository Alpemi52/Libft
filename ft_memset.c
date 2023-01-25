/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuftuog <amuftuog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:10:50 by amuftuog          #+#    #+#             */
/*   Updated: 2022/10/21 13:19:46 by amuftuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;
	char	*src;

	src = (char *)b;
	i = 0;
	if (!b && !n)
		return (NULL);
	while (i < n)
	{
		src[i] = c;
		i++;
	}
	return (b);
}
