/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minit_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:44:53 by muhozkan          #+#    #+#             */
/*   Updated: 2022/03/26 14:44:53 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	*mini_atoi(char *c)
{
	int	len;
	int	*a;
	int	i;

	i = 0;
	len = (int)ft_strlen(c);
	a = (int *)malloc(len * sizeof(int));
	while (i < len)
	{
		a[i] = c[i] - 48;
		i++;
	}
	return (a);
}