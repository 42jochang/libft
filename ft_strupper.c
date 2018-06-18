/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 17:32:34 by jochang           #+#    #+#             */
/*   Updated: 2018/06/17 17:34:17 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strupper(const char *src)
{
	int		i;
	char	*str;

	str = ft_strdup(src);
	i = -1;
	while (str[++i])
		str[i] = ft_toupper(str[i]);
	return (str);
}
