/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerazo-c <eerazo-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:30:00 by eerazo-c          #+#    #+#             */
/*   Updated: 2023/10/22 16:32:18 by eerazo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main()
{
	int pro;
	int mio;

	pro = printf("%s\n", "some string with %s hehe");
	mio = ft_printf("%s\n", "some string with %s hehe");
    return 0;
}
