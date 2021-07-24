#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called " << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called " << std::endl;
}

Fixed::Fixed(const Fixed& f) {
	std::cout << "Copy constructor called " << std::endl;
	_fixedPointValue = f._fixedPointValue;
}

Fixed& Fixed::operator=(const Fixed &f) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &f)
		return *this;
	this->_fixedPointValue = f._fixedPointValue;
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _fixedPointValue;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPointValue = raw;
}
