/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:14:47 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/28 15:25:26 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"

Number::Number():
	n(0)
{
}

Number::Number(int const &n):
	n(n)
{
}

Number::~Number()
{
}

Number &Number::operator=(Number const &other)
{
	this->n = other.n;
	return (*this);
}

bool Number::operator<(Number const &b)
{
	return (this->n < b.n);
}

bool Number::operator<=(Number const &b)
{
	return (this->n <= b.n);
}

bool Number::operator>(Number const &b)
{
	return (this->n > b.n);
}

bool Number::operator>=(Number const &b)
{
	return (this->n >= b.n);
}

bool Number::operator==(Number const &b)
{
	return (this->n == b.n);
}

bool Number::operator!=(Number const &b)
{
	return (this->n != b.n);
}

int Number::getValue(void) const
{
	return (this->n);
}

std::ostream &operator<<(std::ostream &out, Number const &n)
{
	out << n.getValue();
	return (out);
}
