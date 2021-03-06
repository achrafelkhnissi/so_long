/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_banner_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:55:54 by ael-khni          #+#    #+#             */
/*   Updated: 2022/01/11 09:31:21 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/so_long_bonus.h"

void	display_banner(void)
{
	printf("\n");
	printf("%s ██████  ▒█████      ██▓     ▒█████   ███▄    █   ▄████ \n", RED);
	printf("▒██    ▒ ▒██▒  ██▒   ▓██▒    ▒██▒  ██▒ ██ ▀█   █  ██▒ ▀█▒\n");
	printf("░ ▓██▄   ▒██░  ██▒   ▒██░    ▒██░  ██▒▓██  ▀█ ██▒▒██░▄▄▄░\n");
	printf("  ▒   ██▒▒██   ██░   ▒██░    ▒██   ██░▓██▒  ▐▌██▒░▓█  ██▓\n");
	printf("▒██████▒▒░ ████▓▒░   ░██████▒░ ████▓▒░▒██░   ▓██░░▒▓███▀▒\n");
	printf("▒ ▒▓▒ ▒ ░░ ▒░▒░▒░    ░ ▒░▓  ░░ ▒░▒░▒░ ░ ▒░   ▒ ▒  ░▒   ▒ \n");
	printf("░ ░▒  ░ ░  ░ ▒ ▒░    ░ ░ ▒  ░  ░ ▒ ▒░ ░ ░░   ░ ▒░  ░   ░ \n");
	printf("░  ░  ░  ░ ░ ░ ▒       ░ ░   ░ ░ ░ ▒     ░   ░ ░ ░ ░   ░ \n");
	printf("      ░      ░ ░         ░  ░    ░ ░           ░       ░ \n");
	printf("\t- BONUS VERSION.%s\t- by: ael-khni\n", END);
	printf("\n");
}
