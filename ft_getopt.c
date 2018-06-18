/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 13:34:54 by jochang           #+#    #+#             */
/*   Updated: 2018/06/17 17:51:58 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_getopt(int argc, char **argv, char *optstring)
{
	static int	nextchar;
	int			i;

	g_optind += (ft_strequ(argv[g_optind], g_optarg) ? 1 : 0);
	g_optarg = NULL;
	if (g_optind >= argc || argv[g_optind][0] != '-')
		return (-1);
	i = -1;
	nextchar++;
	while (++i < (int)ft_strlen(optstring))
	{
		if (argv[g_optind][nextchar] == optstring[i])
		{
			g_optarg = (optstring[i + 1] == ':' ?
					&argv[g_optind + 1][0] : g_optarg);
			if (!(argv[g_optind][nextchar + 1]))
			{
				g_optind++;
				nextchar = 0;
			}
			return (optstring[i]);
		}
	}
	g_optopt = argv[g_optind][nextchar];
	return ('?');
}
