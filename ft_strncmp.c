/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:49:12 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/18 16:25:36 by mes-salh         ###   ########.fr       */
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

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (ss1[i] && ss2[i] && (i < n - 1) && ss1[i] == ss2[i])
		i++;
	return (ss1[i] - ss2[i]);
}
