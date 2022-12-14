/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:22:03 by ide-albe          #+#    #+#             */
/*   Updated: 2022/10/07 18:36:21 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	cont;

	cont = 0;
	while (s[cont] != '\0' && s[cont] != 0)
	{
		write (fd, &s[cont], 1);
		cont++;
	}
}
