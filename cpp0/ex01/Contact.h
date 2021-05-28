//
// Created by 111 on 23.05.2021.
//

#ifndef CPP0_CONTACT_H
#define CPP0_CONTACT_H
#include <iostream>

class Contact {
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

public:

	Contact();

	void setFirstName(std::string firstName);

	void setLastName(const std::string &lastName);

	void setNickname(const std::string& nickname_);

	void setLogin(const std::string &login_);

	void setPostAddress(const std::string &postAddress);

	void setEmailAddress(const std::string &emailAddress);

	void setPhoneNumber(const std::string &phoneNumber);

	void setBirthday(const std::string &birthday);

	void setFavoriteMeal(const std::string &favoriteMeal);

	void setUnderwearColour(const std::string &underwearColour);

	void setDarkestSecret(const std::string &darkestSecret);

	std::string getFirstName();

	std::string getLastName();

	std::string getNickname();

	std::string getLogin();

	std::string getPostAddress();

	std::string getEmailAddress();

	std::string getPhoneNumber();

	std::string getBirthday();

	std::string getFavoriteMeal();

	std::string getUnderwearColour();

	std::string getDarkestSecret();

	~Contact(void);
};

#endif //CPP0_CONTACT_H
