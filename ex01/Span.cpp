/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kabb <mel-kabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:03:12 by mel-kabb          #+#    #+#             */
/*   Updated: 2024/02/27 19:14:31 by mel-kabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int n)
{
    this->n = n;
}

Span::Span(Span const &src)
{
    *this = src;
}

Span::~Span()
{
}

Span &Span::operator=(Span const &rhs)
{
    if (this != &rhs)
    {
        this->n = rhs.n;
        this->v = rhs.v;
    }
    return *this;
}

void Span::addNumber(int n)
{
    if (this->v.size() < this->n)
        this->v.push_back(n);
    else
        throw std::exception();
}

int Span::shortestSpan()
{
    if (this->v.size() < 2)
        throw Span::NoSpanException();
    std::vector<int> tmp = this->v;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (unsigned int i = 2; i < tmp.size(); i++)
    {
        if (tmp[i] - tmp[i - 1] < min)
            min = tmp[i] - tmp[i - 1];
    }
    return min;
}

int Span::longestSpan()
{
    int max;
    int min;
    if (this->v.size() < 2)
        throw Span::FullSpanException();
    max = *std::max_element(this->v.begin(), this->v.end());
    min = *std::min_element(this->v.begin(), this->v.end());
    return max - min;
}

const char *Span::NoSpanException::what() const throw()
{
    return "there isn't enough element to calculate a distance";
}

const char *Span::FullSpanException::what() const throw()
{
    return "Error: allowed number of element exceded ";
}

void Span::addSpan(std::vector<int> &v)
{
    if (this->v.size() + v.size() > this->n)
        throw std::exception();
    this->v.insert(this->v.end(), v.begin(), v.end());
}