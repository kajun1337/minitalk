/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 10:26:05 by muhozkan          #+#    #+#             */
/*   Updated: 2022/03/28 00:42:49 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	send_byte(int *byte, int pid)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (byte[i] == 1)
			kill(pid, SIGUSR2);
		else if (byte[i] == 0)
			kill(pid, SIGUSR1);
		usleep(100);
		i++;
	}
}

void	sig_fback(int signum, siginfo_t *siginfo, void *unused)
{
	(void)unused;
	(void)siginfo;
	(void)signum;
	ft_putstr_fd("Sinyal Gonderildi\n", 1);
}

