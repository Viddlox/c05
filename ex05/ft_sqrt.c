/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:04:14 by itan              #+#    #+#             */
/*   Updated: 2022/09/01 09:16:00 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < nb / i)
		i++;
	if (i != nb / i)
	{
		return (0);
	}
	return (i);
}

int	main(void)
{
	printf("%d", ft_sqrt(2147483647));
	return (0);
}