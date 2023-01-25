/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuftuog <amuftuog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:11:49 by amuftuog          #+#    #+#             */
/*   Updated: 2022/11/13 14:03:07 by amuftuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*pstr;
	size_t	i;

	i = ft_strlen(str);
	pstr = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!pstr)
		return (NULL);
	i = 0;
	while (str[i])
	{
		pstr[i] = str[i];
		i++;
	}
	pstr[i] = 0;
	return (pstr);
}
