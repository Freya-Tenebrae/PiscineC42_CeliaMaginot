/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 13:58:16 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/15 09:40:36 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.c"
#include <unistd.h>

int main()
{
	int a = 2;
	int b = 3;

	ft_swap (&a, &b);
	if (a == 3 && b == 2)
		write(1, "1", 1);
}