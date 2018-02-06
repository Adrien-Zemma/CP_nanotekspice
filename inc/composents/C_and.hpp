/*
** EPITECH PROJECT, 2018
** cpp_nanotekspice
** File description:
** 
*/

#ifndef C_AND_HPP_
	#define C_AND_HPP_

#include "Chipset.hpp"

#define NB_PIN 20;

class C_and: public Chipset
{
public:
	C_and();
private:
	nts::Tristate calculate(int index);
};

#endif /* !C_AND_HPP_ */
