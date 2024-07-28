#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <fstream>

std::string	readFile(std::string filename);
std::string	replaceStrings(std::string text, std::string s1, std::string s2);
void		writeFile(std::string filename, std::string text);

#endif
