/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 17:11:13 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/16 17:13:58 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	char	s;

	s = (char)c;
	if (s == ' ' || s == '\t' || s == '\n' ||
		s == '\f' || s == '\r' || s == '\v')
		return (1);
	return (0);
}
