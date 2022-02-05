/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbolic_constant.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:57:30 by tkomeno           #+#    #+#             */
/*   Updated: 2022/02/03 20:29:39 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define LOWER_LIMIT 0
#define UPPER_LIMIT 300
#define STEP 20

int	main(void)
{
	int		fahr;
	float	celsius;

	fahr = LOWER_LIMIT;
	while (fahr <= UPPER_LIMIT)
	{
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("%3d %6.1f\n", fahr, celsius);
		fahr += STEP;
	}
	return (0);
}
