/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kabb <mel-kabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:58:18 by mel-kabb          #+#    #+#             */
/*   Updated: 2024/02/27 14:01:17 by mel-kabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    try
    {
        std::cout << easyfind(v, 3) << std::endl;
        std::cout << easyfind(v, 6) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Not found" << std::endl;
    }
    return 0;
}