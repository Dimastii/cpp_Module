//
// Created by 111 on 25.05.2021.
//

#include "Book.h"
#include <string>
#include <iostream>
#include <iomanip>

Book::Book() {
	cur_num = 0;
}

int Book::addContact()
{
	if (cur_num < 8)
	{
		contact[cur_num].setFirstName(getValueField("Write First name"));
		contact[cur_num].setLastName(getValueField("Write Last name"));
		contact[cur_num].setNickname(getValueField("Write Nickname"));
		contact[cur_num].setLogin(getValueField("Write Login"));
		contact[cur_num].setPostAddress(getValueField("Write Post Address"));
		contact[cur_num].setEmailAddress(getValueField("Write Email Address"));
		contact[cur_num].setPhoneNumber(getValueField("Write Phone Number"));
		contact[cur_num].setBirthday(getValueField("Write Birthday"));
		contact[cur_num].setFavoriteMeal(getValueField("Write Favorite Meal"));
		contact[cur_num].setUnderwearColour(getValueField("Write Underwear Colour"));
		contact[cur_num].setDarkestSecret(getValueField("Write Darkest Secret"));
		cur_num++;
	}
	else
		std::cout << "No space" << std::endl;
	return 0;
}



std::string Book::getValueField(const std::string& cout_str)
{
	std::string ret_str;
	std::cout << cout_str << std::endl;
	std::cin >> ret_str;
	return ret_str;
}

std::string truncate(std::string str)
{
	if (str.length() > 9)
		return str.substr(0, 9) + ".";
	return str;
}


int Book::searchContact() {
	int ind = 0;
	if (cur_num > 0) {
		for (int i = 0; i < cur_num; ++i) {
			std::cout << std::setw(10) << i << "|";
			std::cout << std::setw(10) << truncate(contact[i].getFirstName()) << "|";
			std::cout << std::setw(10) << truncate(contact[i].getLastName()) << "|";
			std::cout << std::setw(10) << truncate(contact[i].getNickname()) << std::endl;
		}
		std::cout << "Enter index" << std::endl;
		std::cin >> ind;
		if (ind < cur_num && ind >= 0)
		{
			std::cout << contact[ind].getFirstName() << std::endl;
			std::cout << contact[ind].getLastName() << std::endl;
			std::cout << contact[ind].getNickname() << std::endl;
			std::cout << contact[ind].getLogin() << std::endl;
			std::cout << contact[ind].getPostAddress() << std::endl;
			std::cout << contact[ind].getEmailAddress() << std::endl;
			std::cout << contact[ind].getPhoneNumber() << std::endl;
			std::cout << contact[ind].getBirthday() << std::endl;
			std::cout << contact[ind].getFavoriteMeal() << std::endl;
			std::cout << contact[ind].getUnderwearColour() << std::endl;
			std::cout << contact[ind].getDarkestSecret() << std::endl;
		}
		else
			std::cout << "Out of range" << std::endl;
	}
	else
		std::cout << "No contacts found" << std::endl;
	return 0;
}
