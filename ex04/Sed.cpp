/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <zessadqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:04:11 by zessadqu          #+#    #+#             */
/*   Updated: 2023/04/19 01:52:26 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
}

Sed::~Sed()
{
}

void	Sed::replace(void)
{
    std::string  buffer;
    std::ifstream	ifs(_filename);
    std::ofstream	ofs(_filename + ".replace");
    std::string		line;

    if (!ifs.is_open())
    {
        std::cout << "Error: File not found" << std::endl;
        return ;
    }
    if (_s1 !="")
    {
        while (std::getline(ifs, line))
        {
            while (line.find(_s1) != std::string::npos)
            {
                if (line.find(_s1) !=0)
                {
                    buffer = line.substr(0, line.find(_s1) );
                    buffer += _s2;
                    buffer += line.substr(line.find(_s1) + _s1.length());
                    line = buffer;
                }
                else
                {
                    buffer = line.substr(0, line.find(_s1) + 1 );
                    buffer += _s2;
                    buffer += line.substr(line.find(_s1) + 1);
                    line = buffer;
                }
            }
            ofs << line << std::endl;
        }
    }
    ifs.close();
    ofs.close();
}