/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 22:46:36 by zessadqu          #+#    #+#             */
/*   Updated: 2023/04/19 01:42:08 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(std::string level) : _level(level)
{
};

Harl::~Harl(void)
{
    std::cout << this->_level << " is dead" << std::endl;
};

void Harl::_debug(void)
{
    
};

void Harl::_warning(void)
{
    
};

void Harl::_info(void)
{
    
};

void Harl::_error(void)
{
    
};

void Harl::complain(std::string level)
{
    
}
