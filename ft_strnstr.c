/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuftuog <amuftuog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:02:54 by amuftuog          #+#    #+#             */
/*   Updated: 2022/10/24 17:29:13 by amuftuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n )
{
	size_t	i;
	size_t	len;

	len = ft_strlen(needle);
	if (!len)
		return ((char *)haystack);
	else if (n == 0 || !haystack[0])
		return (0);
	while (*haystack && n-- >= ft_strlen(needle))
	{
		i = 0;
		while (needle[i] == haystack[i])
		{
			i++;
			if (!needle[i])
				return ((char *)(haystack));
		}
		haystack++;
	}
	return (0);
}
