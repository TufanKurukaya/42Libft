/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:10:38 by tkurukay          #+#    #+#             */
/*   Updated: 2023/12/28 16:16:12 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sing;
	int	result;

	i = 0;
	sing = 1;
	result = 0;
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sing = sing * (-1);
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sing);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	int		x;

// 	str = "    \t -2147483a648";
// 	x = ft_atoi(str);
// 	printf("String hali: %s\n", str);
// 	printf("Integer hali: %d\n", x);
// }
