/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:49:26 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/04/16 16:05:01 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	lon;

	lon = ft_strlen(s);
	while (lon >= 0)
	{
		if (s[lon] == (char)c)
		{
			return ((char *)(s + lon));
		}
		lon--;
	}
	return (NULL);
}
