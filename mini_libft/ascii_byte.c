/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ascii_byte.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 10:26:18 by muhozkan          #+#    #+#             */
/*   Updated: 2022/03/26 14:44:39 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


int	*ascii_byte(int c)
{
	int		i;
	int		value;
	char	*str;

	i = 0;
	value = 0;
	str = (char *)malloc(sizeof(char) * 8);
	while (i < 8)
	{
		value = c / ussunu_alma(2, i);
		if (value % 2 == 0)
			str[7 - i] = '0';
		else if (value % 2 != 0)
			str[7 - i] = '1';
		i++;
	}	
	str[8] = '\0';
	if (str == NULL)
		return (0);
	return (mini_atoi(str));
}

int	byte_ascii(int *numbers)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (i < 8)
	{
		result += numbers[7 - i] * ussunu_alma(2, i);
		i++;
	}
	return (result);
}
