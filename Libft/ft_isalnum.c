/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehammoud <ehammoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:50:46 by ehammoud          #+#    #+#             */
/*   Updated: 2023/11/05 20:50:46 by ehammoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90))
		return (1);
	if ((c >= 97 && c <= 122))
		return (1);
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}