/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuftuog <amuftuog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:02:42 by amuftuog          #+#    #+#             */
/*   Updated: 2022/12/24 16:37:55 by amuftuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dsttmp;
	char	*srctmp;
	size_t	i;

	dsttmp = (char *)dst;
	srctmp = (char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		dsttmp[i] = srctmp[i];
		i++;
	}
	return (dst);
}
