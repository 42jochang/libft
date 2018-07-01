/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macro.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 17:11:16 by jochang           #+#    #+#             */
/*   Updated: 2018/07/01 08:22:45 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MACRO_H
# define MACRO_H

# define BUFF_SIZE 42
/*
** Exit Checks
*/
# define ERROR_CHECK(x) if (x) return (-1)
# define ZERO_CHECK(x) if (x) return (0)
# define NULL_CHECK(x) if (x) return (NULL)
# define BREAK_CHECK(x) if (x) break
/*
** Status Checks
*/
# define IS_ALPHA(x) ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')) ? 1 : 0
# define IS_DIGIT(x) (x >= '0' && x <= '9') ? 1 : 0
# define IS_ALNUM(x) (IS_ALPHA(x) || IS_DIGIT(x)) ? 1 : 0
# define IS_ASCII(x) (x >= 0 && x <= 127) ? 1 : 0
# define IS_PRINT(x) (x >= 32 && x <= 126) ? 1 : 0
/*
** Switches
*/
# define TO_LOWER(x) (x >= 'A' && x <= 'Z') ? x + 32 : x
# define TO_UPPER(x) (x >= 'a' && x <= 'z') ? x - 32 : x
/*
** Comparisons
*/
# define MIN(x, y) x < y ? x : y
# define MAX(x, y) x > y ? x : y
/*
** Conditionals
*/
# define IF_TRUE(x, y) if (x) y
# define IF_FALSE(x, y) if (!x) y
# define IF_EXISTS(x, y) if (x) y
/*
** Bitwise Operations
*/
# define BIT_RL32(x, c) (x << c) | (x >> (32 - c))
# define BIT_RR32(x, c) (x >> c) | (x << (32 - c))
# define BIT_RL64(x, c) (x << c) | (x >> (64 - c))
# define BIT_RR64(x, c) (x >> c) | (x << (32 - c))

#endif
