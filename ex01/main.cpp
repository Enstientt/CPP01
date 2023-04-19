/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:03:39 by zessadqu          #+#    #+#             */
/*   Updated: 2023/04/18 00:29:38 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{   
    Zombie* zombie_hord = zombieHorde(5, "zimbabue");
    delete [] zombie_hord;
    return (0);
}
