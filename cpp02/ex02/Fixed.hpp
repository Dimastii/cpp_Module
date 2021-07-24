#include <iostream>
#include <cmath>

class Fixed {
private:
	int					_fixed_point_value;
	static const int	_num_of_frac_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& copy);
	explicit Fixed(int a);
	explicit Fixed(float b);

	float	toFloat() const;
	int		toInt() const;

	Fixed& operator=(const Fixed& fixed);

	bool operator>=(const Fixed& fixed);
	bool operator<=(const Fixed& fixed);
	bool operator!=(const Fixed& fixed);
	bool operator==(const Fixed& fixed);
	bool operator>(const Fixed& fixed);
	bool operator<(const Fixed& fixed);

	Fixed& operator+(const Fixed& fixed);
	Fixed& operator-(const Fixed& fixed);
	Fixed& operator*(const Fixed& fixed);
	Fixed& operator/(const Fixed& fixed);

	Fixed& operator++();
	Fixed& operator--();

	Fixed& operator++(int);
	Fixed& operator--(int);


	int		getRawBits() const;
	void	setRawBits(int raw);

	static Fixed& max(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);

};

std::ostream& operator<< (std::ostream& out, const Fixed& reference);

