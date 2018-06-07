/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 13:34:54 by jochang           #+#    #+#             */
/*   Updated: 2018/06/07 13:44:16 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_getopt(int argc, char **argv, char *optstring)
{
	static int	nextchar;
	static int	optcount;
	int			i;

	if (nextchar >= argc - 1 || argv[nextchar][0] != '-')
		return (-1);
	i = -1;
	optcount++;
	while (++i < (int)ft_strlen(optstring))
	{
		if (argv[nextchar][optcount] == optstring[i])
		{
			if (!(argv[nextchar][optcount + 1]))
			{
				nextchar++;
				optcount = 0;
			}
			g_optarg = (optstring[i + 1] == ':' ?
					&argv[nextchar][0] : g_optarg);
			nextchar = nextchar + (optstring[i + 1] == ':' ? 1 : 0);
			return (optstring[i]);
		}
	}
	nextchar++;
	return ('?');
}
