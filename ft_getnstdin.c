/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnstdin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 10:01:10 by jochang           #+#    #+#             */
/*   Updated: 2018/06/30 21:15:52 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl.h"

int		ft_getnstdin(int n, char **string)
{
	char	buf[n];
	char	*ptr;
	int		len;

	len = 0;
	ptr = &buf[0];
	while (read(0, ptr, 1) > 0)
	{
		len++;
		ptr++;
		BREAK_CHECK(len >= n);
	}
	ft_memcpy(*string, buf, len);
	return (len);
}
