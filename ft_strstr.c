/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlowe <nlowe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 15:23:04 by nlowe             #+#    #+#             */
/*   Updated: 2016/12/16 15:54:15 by nlowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
	int		i;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (*big)
	{
		if (*big == little[i])
		{
			while (big[i] == little[i])
				i++;
			if (little[i] == '\0')
				return ((char *)big);
		}
		i = 0;
		big++;
	}
	return (NULL);
}
