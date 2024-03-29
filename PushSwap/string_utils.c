/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehammoud <ehammoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:58:58 by ehammoud          #+#    #+#             */
/*   Updated: 2024/02/24 15:03:18 by ehammoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra_utils.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;
	size_t	n;

	n = ft_strlen(s1);
	dst = malloc((n + 1) * sizeof(char));
	if (dst)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			dst[i] = s1[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (dst);
}

size_t	ft_strlen(const char *str)
{
	size_t	n;

	n = 0;
	while (str && str[n])
		n++;
	return (n);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*ret;

	ret = malloc((ft_strlen(s1) + ft_strlen(s2) + 2) * sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (s1 && s1[i] != '\0')
	{
		ret[i] = s1[i];
		i++;
	}
	ret[i++] = ' ';
	j = 0;
	while (s2[j] != '\0')
		ret[i++] = s2[j++];
	ret[i] = '\0';
	if (s1)
		free(s1);
	return (ret);
}

int	ft_atoi(char *str)
{
	int				sign;
	unsigned long	lm_l;
	unsigned long	lm_r;
	unsigned long	n;

	if (!str)
		return (INT_MIN);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	sign = 1 - 2 * (str[0] == '-');
	str += (str[0] == '-' || str[0] == '+');
	n = 0;
	lm_l = INT_MAX / 10;
	if (sign == -1)
		lm_r = -1 * (INT_MIN % 10);
	else
		lm_r = INT_MAX % 10;
	while (*str >= '0' && *str <= '9')
	{
		if (n > lm_l || (n == lm_l && (*str - 48ul) > lm_r))
			return (-1 * (sign != -1));
		n = n * 10 + (*str - 48);
		str++;
	}
	return (n * sign);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	if (s1[i] == '\0' && s2[i] == '\n')
		return (1);
	return (s1[i] - s2[i] == 0);
}
