	//
// Created by 111 on 23.05.2021.
//

#include "Contact.h"



Contact::Contact(){}

void Contact::setFirstName(std::string firstName)
{
	this->first_name = std::move(firstName);
}

void Contact::setLastName(const std::string &lastName)
{
	this->last_name = lastName;
}

void Contact::setNickname(const std::string& nickname_)
{
	this->nickname = nickname_;
}

void Contact::setLogin(const std::string &login_)
{
	this->login = login_;
}

void Contact::setPostAddress(const std::string &postAddress)
{
	this->postal_address = postAddress;
}

void Contact::setEmailAddress(const std::string &emailAddress)
{
	this->email_address = emailAddress;
}

void Contact::setPhoneNumber(const std::string &phoneNumber)
{
	this->phone_number = phoneNumber;
}

void Contact::setBirthday(const std::string &birthday)
{
	this->birthday_date = birthday;
}

void Contact::setFavoriteMeal(const std::string &favoriteMeal)
{
	this->favorite_meal = favoriteMeal;
}

void Contact::setUnderwearColour(const std::string &underwearColour)
{
	this->underwear_color = underwearColour;
}

void Contact::setDarkestSecret(const std::string &darkestSecret)
{
	this->darkest_secret = darkestSecret;
}


std::string Contact::getFirstName()
{
	return this->first_name;
}

std::string Contact::getLastName()
{
	return this->last_name;
}

std::string Contact::getNickname()
{
	return this->nickname;
}

std::string Contact::getLogin()
{
	return this->login;
}

std::string Contact::getPostAddress()
{
	return this->postal_address;
}

std::string Contact::getEmailAddress()
{
	return this->email_address;
}

std::string Contact::getPhoneNumber()
{
	return this->phone_number;
}

std::string Contact::getBirthday()
{
	return this->birthday_date;
}

std::string Contact::getFavoriteMeal()
{
	return this->favorite_meal;
}

std::string Contact::getUnderwearColour()
{
	return this->underwear_color;
}

std::string Contact::getDarkestSecret()
{
	return this->darkest_secret;
}

Contact::~Contact(void){}