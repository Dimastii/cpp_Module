
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &tar) : Form("ShrubberyCreationForm", 145, 137),target(tar) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy) {}

void ShrubberyCreationForm::execute(Bureaucrat &executor) {
	Form::execute(executor);
	std::ofstream outputfile(target + "_shrubbery");
	if (!outputfile.is_open())
		throw std::runtime_error("can't open the file");
	outputfile << "\n"
				  "          .     .  .      +     .      .          .\n"
				  "     .       .      .     #       .           .\n"
				  "        .      .         ###            .      .      .\n"
				  "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
				  "          .      . \"####\"###\"####\"  .\n"
				  "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
				  "  .             \"#########\"#########\"        .        .\n"
				  "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
				  "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
				  "                .\"##\"#####\"#####\"##\"           .      .\n"
				  "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
				  "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
				  "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
				  "            .     \"      000      \"    .     .\n"
				  "       .         .   .   000     .        .       .\n"
				  ".. .. ..................O000O........................ ...... ..." << std::endl;
	outputfile.close();
}