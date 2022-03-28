/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 23:34:56 by muhozkan          #+#    #+#             */
/*   Updated: 2022/03/28 23:34:56 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int					i;
	int					spid;
	t_client			client;
	struct sigaction	act;

	if (argc != 3)
		return (0);
	spid = ft_atoi(argv[1]);
	client.p_id = spid;
	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = sig_fback;
	sigaction(SIGUSR2, &act, NULL);
	ft_putstr_fd("Sending to : ", 1);
	ft_putnbr_fd(spid, 1);
	ft_putchar_fd('\n', 1);
	i = 0;
	while (argv[2][i])
	{
		client.numbers = ascii_byte((unsigned char)argv[2][i]);
		send_byte(client.numbers, spid);
		i++;
	}
}
