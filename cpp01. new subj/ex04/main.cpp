//
// Created by Cloyster Veeta on 7/3/21.
//

#include <iostream>
#include <fstream>

std::string readFile(std::fstream &file)
{
	std::string text;
	std::string buf;

	while (std::getline(file, buf))
		text.append(buf + "\n");
	file.close();
	return text;
}

void 	replace(std::string &text, char **argv)
{
	int pos_s1 = text.find(argv[2]);
	int len_s1 = std::strlen(argv[2]);

	while (pos_s1 != -1)
	{
		text.erase(pos_s1, len_s1);
		text.insert(pos_s1, argv[3]);
		pos_s1 = text.find(argv[2]);
	}
}

int main(int argc, char** argv){
	if(argc != 4) {
		std::cerr << "argv error\n";
		return 1;
	}
	std::fstream file(argv[1]);

	if(file.is_open())
	{
		std::string text = readFile(file);

		replace(text, argv);
		file.open(argv[1], std::ios::out | std::ios::trunc);
		file << text;
	}
	else {
		std::cerr << "Can`t open file\n";
		return 2;
	}
	return 0;
}