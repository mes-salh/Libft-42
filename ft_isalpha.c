/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:02:42 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/18 16:10:59 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ▄▄▄█████▓ ▄▄▄     ▓██   ██▓  █████▒▒█████   ▒█████   ███▄    █ 
** ▓  ██▒ ▓▒▒████▄    ▒██  ██▒▓██   ▒▒██▒  ██▒▒██▒  ██▒ ██ ▀█   █ 
** ▒ ▓██░ ▒░▒██  ▀█▄   ▒██ ██░▒████ ░▒██░  ██▒▒██░  ██▒▓██  ▀█ ██▒
** ░ ▓██▓ ░ ░██▄▄▄▄██  ░ ▐██▓░░▓█▒  ░▒██   ██░▒██   ██░▓██▒  ▐▌██▒
**   ▒██▒ ░  ▓█   ▓██▒ ░ ██▒▓░░▒█░   ░ ████▓▒░░ ████▓▒░▒██░   ▓██░
**   ▒ ░░    ▒▒   ▓▒█░  ██▒▒▒  ▒ ░   ░ ▒░▒░▒░ ░ ▒░▒░▒░ ░ ▒░   ▒ ▒ 
**     ░      ▒   ▒▒ ░▓██ ░▒░  ░       ░ ▒ ▒░   ░ ▒ ▒░ ░ ░░   ░ ▒░
**   ░        ░   ▒   ▒ ▒ ░░   ░ ░   ░ ░ ░ ▒  ░ ░ ░ ▒     ░   ░ ░ 
**                  ░  ░░ ░                ░ ░      ░ ░           ░ 
**                      ░ ░                                         
*/

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}