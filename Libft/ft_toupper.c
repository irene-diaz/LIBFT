/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-ca <idiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:47:06 by idiaz-ca          #+#    #+#             */
/*   Updated: 2025/04/16 13:47:27 by idiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 0 && c <= 255)
	{
		if ((c >= 'a' && c <= 'z'))
		{
			c = c - ('a' - 'A');
		}
	}
	return (c);
}
