/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonia <sleonia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 08:08:44 by sleonia           #+#    #+#             */
/*   Updated: 2019/11/16 04:00:19 by sleonia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if (size == SIZE_MAX)
		return (NULL);
	str = (char*)ft_safe_malloc(sizeof(*str) * (size + 1));
	ft_memset(str, 0, (size + 1));
	return (str);
}
