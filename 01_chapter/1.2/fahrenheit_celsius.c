/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fahrenheit_celsius_float.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:50:36 by tkomeno           #+#    #+#             */
/*   Updated: 2022/02/03 17:00:02 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float	fahrenheit;
	float	celsius;
	float	lower;
	float	upper;
	float	step;

	lower = 0;
	upper = 300;
	step = 20;
	fahrenheit = lower;
	printf("fahr\tcelsius\n");
	while (fahrenheit <= upper)
	{
		celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
		printf("%3.0f\t%5.1f\n", fahrenheit, celsius);
		fahrenheit += step;
	}
	return (0);
}
