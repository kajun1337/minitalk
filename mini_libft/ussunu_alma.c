/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ussunu_alma.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:31:59 by muhozkan          #+#    #+#             */
/*   Updated: 2022/03/26 14:31:59 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ussunu_alma(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
