/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 02:00:33 by jochang           #+#    #+#             */
/*   Updated: 2018/04/26 07:56:00 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new;
	int		i;
	int		len;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	while (ft_isspace(s[i]))
		i++;
	if (i == len)
		return ("\0");
	while (ft_isspace(s[len - 1]))
		len--;
	if (!(new = (char*)malloc(len - i + 1)))
		return (NULL);
	j = -1;
	while (++j < len - i)
		new[j] = s[i + j];
	new[j] = '\0';
	return (new);
}
