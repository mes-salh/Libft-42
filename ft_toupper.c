/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:01:21 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/18 16:12:09 by mes-salh         ###   ########.fr       */
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

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
