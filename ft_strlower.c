/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 17:34:58 by jochang           #+#    #+#             */
/*   Updated: 2018/06/17 17:36:19 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlower(const char *src)
{
	int		i;
	char	*str;

	str = ft_strdup(src);
	i = -1;
	while (str[++i])
		str[i] = ft_tolower(str[i]);
	return (str);
}
