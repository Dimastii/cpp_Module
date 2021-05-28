//
// Created by 111 on 25.05.2021.
//

#ifndef CPP0_BOOK_H
#define CPP0_BOOK_H
#include "Contact.h"

class Book {
private:
	int cur_num;
	Contact contact[8];
public:
	Book();
	int addContact();
	int searchContact();
	std::string getValueField(const std::string& cout_str);
};

#endif //CPP0_BOOK_H
