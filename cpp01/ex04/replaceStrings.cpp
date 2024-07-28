#include "replace.hpp"

std::string	replaceStrings(std::string text, std::string s1, std::string s2) {
	std::string	newText;
	size_t		pos = 0;
	size_t		prev = 0;

	while ((pos = text.find(s1, prev)) != std::string::npos) {
		newText.append(text, prev, pos - prev);
		newText.append(s2);
		prev = pos + s1.length();
	}
	newText.append(text, prev, std::string::npos);
	return newText;
}
