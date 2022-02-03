/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   celsius_fahrenheit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:01:49 by tkomeno           #+#    #+#             */
/*   Updated: 2022/02/03 17:11:06 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float fahrenheit;
	float celsius;
	float lower;
	float upper;
	float step;

	lower = 0;
	upper = 300;
	step = 20;
	celsius = lower;
	printf("celsius\tfahr\n");
	while (celsius <= upper)
	{
		fahrenheit = (9.0 / 5.0) * celsius + 32.0;
		printf("%3.0f\t%5.1f\n", celsius, fahrenheit);
		celsius += step;
	}
	return (0);
}
