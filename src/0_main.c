/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wruet-su <william.ruetsuquet@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:57:37 by wruet-su          #+#    #+#             */
/*   Updated: 2023/12/30 17:00:53 by aabdyli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (write(2, "Input one arg only\n", 19), 1);
	ft_cube(argv);
}
