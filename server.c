/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 10:25:34 by muhozkan          #+#    #+#             */
/*   Updated: 2022/03/28 00:37:00 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	idx_end(int *numbers, int *i, siginfo_t *siginfo)
{
	if (*i == 8)
	{
		kill(siginfo->si_pid, SIGUSR2);
		print_byte(numbers);
		*i = 0;
	}
}

void	print_byte(int *numbers)
{
	int	ascii;

	ascii = byte_ascii(numbers);
	ft_putchar_fd(ascii,1);
}

void	sig_handler(int signum, siginfo_t *siginfo, void *unused)
{
	static int	idx = 0;
	static int	count[8];

	if (signum == SIGUSR2)
	{
		count[idx++] = 1;
		idx_end(count, &idx, siginfo);
	}
	else if (signum == SIGUSR1)
	{
		count[idx++] = 0;
		idx_end(count, &idx, siginfo);
	}
	(void)unused;
}


