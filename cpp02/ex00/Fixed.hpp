#include <iostream>
#include <string>

class Fixed
{
public:

	Fixed();

	~Fixed();

	Fixed(const Fixed& f);

	Fixed& operator=(const Fixed& f);

	int		getRawBits(void) const;

	void	setRawBits(int const raw);

private:
	static	const int _numberOfFractionalBits = 8;
	int _fixedPointValue;
};