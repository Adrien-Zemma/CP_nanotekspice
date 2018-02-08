/*
** EPITECH PROJECT, 2018
** cpp_nanotekspice
** File description:
** 
*/

#ifndef C_FLIP_FLOP_HPP_
	#define C_FLIP_FLOP_HPP_


#include "Chipset.hpp"

class C_flip_flop: public Chipset
{
public:
	C_flip_flop();
private:
	nts::Tristate calculate(int index);
};

#endif /* !C_FLIP_FLOP_HPP_ */
