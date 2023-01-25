/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuftuog <amuftuog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:25:30 by amuftuog          #+#    #+#             */
/*   Updated: 2022/10/31 18:20:27 by amuftuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (!dst && !size)
		return (0);
	i = ft_strlen(dst);
	if (i >= size)
		return (ft_strlen(src) + size);
	ft_strlcpy((dst + i), src, size - i);
	return (i + ft_strlen(src));
}
