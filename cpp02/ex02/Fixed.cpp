#include "Fixed.hpp"

Fixed::Fixed() {
	//std::cout << "Default constructor called" << std::endl;
	this->_fixed_point_value = 0;
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) {
	//std::cout << "Copy constructor called" << std::endl;
	_fixed_point_value = copy.getRawBits();
}

int Fixed::getRawBits() const {
	return (_fixed_point_value);
}

void Fixed::setRawBits(const int raw) {
	_fixed_point_value = raw;
}

Fixed& Fixed::operator = (const Fixed& fixed) {
	//std::cout << "Assignation operator called" << std::endl;
	_fixed_point_value = fixed.getRawBits();
	return (*this);
}

bool Fixed::operator>=(const Fixed& fixed)
{
	if (int(this->_fixed_point_value * Fixed::_num_of_frac_bits) >= int(fixed._fixed_point_value * Fixed::_num_of_frac_bits))
		return 1;
	else
		return 0;
}

bool Fixed::operator<=(const Fixed& fixed)
{
	if (int(this->_fixed_point_value * Fixed::_num_of_frac_bits) <= int(fixed._fixed_point_value * Fixed::_num_of_frac_bits))
		return 1;
	else
		return 0;
}

bool Fixed::operator!=(const Fixed& fixed)
{
	if (int(this->_fixed_point_value * Fixed::_num_of_frac_bits) != int(fixed._fixed_point_value * Fixed::_num_of_frac_bits))
		return 1;
	else
		return 0;
}

bool Fixed::operator>(const Fixed& fixed)
{
	if (int(this->_fixed_point_value * Fixed::_num_of_frac_bits) > int(fixed._fixed_point_value * Fixed::_num_of_frac_bits))
		return 1;
	else
		return 0;
}

bool Fixed::operator<(const Fixed& fixed)
{
	if (int(this->_fixed_point_value * Fixed::_num_of_frac_bits) < int(fixed._fixed_point_value * Fixed::_num_of_frac_bits))
		return 1;
	else
		return 0;
}

Fixed& Fixed::operator+(const Fixed& fixed)
{
	Fixed ret;
	ret._fixed_point_value = this->_fixed_point_value + fixed._fixed_point_value;
	return ret;
}

Fixed& Fixed::operator-(const Fixed& fixed)
{
	Fixed ret;
	ret._fixed_point_value = this->_fixed_point_value - fixed._fixed_point_value;
	return ret;
}

Fixed& Fixed::operator*(const Fixed& fixed)
{
	Fixed ret(this->toFloat() * fixed.toFloat());
	return ret;
}

Fixed& Fixed::operator/(const Fixed& fixed)
{
	Fixed ret(this->toFloat() / fixed.toFloat());
	return ret;
}

bool Fixed::operator==(const Fixed& fixed)
{
	if (int(this->_fixed_point_value * Fixed::_num_of_frac_bits) == int(fixed._fixed_point_value * Fixed::_num_of_frac_bits))
		return 1;
	else
		return 0;
}

Fixed::Fixed(const int a) {
	//std::cout << "Int constructor called" << std::endl;
	_fixed_point_value = a << _num_of_frac_bits;
}

Fixed::Fixed(const float b) {
	//std::cout << "Float constructor called" << std::endl;
	_fixed_point_value = roundf(b * (1 << _num_of_frac_bits));
}

int Fixed::toInt() const {
	return (_fixed_point_value >> _num_of_frac_bits);
}

float Fixed::toFloat() const {
	return ((float)_fixed_point_value / (1 << _num_of_frac_bits));
}

std::ostream& operator << (std::ostream& out, const Fixed& reference) {
	out << reference.toFloat();
	return (out);
}