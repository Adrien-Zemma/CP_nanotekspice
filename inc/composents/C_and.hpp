/*
** EPITECH PROJECT, 2018
** cpp_nanotekspice
** File description:
** 
*/

#ifndef C_AND_HPP_
	#define C_AND_HPP_

#include "Chipset.hpp"

class C_and: public Chipset
{
public:
	C_and();
	virtual ~C_and() {};
	nts::Tristate calculate(size_t index);
};

#endif /* !C_AND_HPP_ */
