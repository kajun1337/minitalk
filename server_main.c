/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 23:35:01 by muhozkan          #+#    #+#             */
/*   Updated: 2022/03/28 23:35:01 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(void)
{
	struct sigaction	act;
	int					p_id;

	p_id = getpid();
	ft_bzero(&act, sizeof(act));
	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = sig_handler;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	ft_putstr_fd("pid = ", 1);
	ft_putnbr_fd(p_id, 1);
	ft_putchar_fd('\n', 1);
	while (1)
	{
		pause();
	}
	ft_putchar_fd('\n', 1);
}