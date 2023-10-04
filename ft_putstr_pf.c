/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadanow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:35:08 by asadanow          #+#    #+#             */
/*   Updated: 2022/11/24 17:13:26 by asadanow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr_pf("(null)"));
	while (*s)
		i += write(1, s++, 1);
	return (i);
}
