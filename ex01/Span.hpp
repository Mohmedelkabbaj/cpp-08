/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kabb <mel-kabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:03:08 by mel-kabb          #+#    #+#             */
/*   Updated: 2024/02/27 19:13:10 by mel-kabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>

class Span
{
private:
    unsigned int n;
    std::vector<int> v;

public:
    Span();
    Span(unsigned int n);
    Span(Span const &src);
    ~Span();
    Span &operator=(Span const &rhs);
    void addNumber(int n);
    int shortestSpan();
    int longestSpan();
    void addSpan(std::vector<int> &v);
    class NoSpanException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class FullSpanException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

#endif