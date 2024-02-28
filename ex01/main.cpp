/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kabb <mel-kabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:02:29 by mel-kabb          #+#    #+#             */
/*   Updated: 2024/02/27 19:19:15 by mel-kabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    return 0;
}

// int main()
// {
//     try
//     {
//         Span sp = Span(5);
//         sp.addNumber(6);
//         std::cout << sp.shortestSpan() << std::endl;
//         std::cout << sp.longestSpan() << std::endl;
//     }
//     catch (Span::NoSpanException &e)
//     {
//         std::cout << e.what() << std::endl;
//     }
//     catch (Span::FullSpanException &e)
//     {
//         std::cout << e.what() << std::endl;
//     }
// }
// int main()
// {
//     try
//     {
//         Span sp = Span(5);
//         sp.addNumber(6);
//         std::cout << sp.longestSpan() << std::endl;
//     }
//     catch (Span::FullSpanException &e)
//     {
//         std::cout << e.what() << std::endl;
//     }
// }

// int main()
// {
//     try
//     {
//         Span sp = Span(10000);
//         std::vector<int> v(10000, 1);
//         sp.addSpan(v);
//         for (int i = 0; i < 10000; i++)
//             std::cout << v[i] << std::endl;
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << "to much numbers" << '\n';
//     }
// }