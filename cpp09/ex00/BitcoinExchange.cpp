#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(): _data(parseData("data.csv")) {}

BitcoinExchange::BitcoinExchange(std::string file): _data(parseData(file)) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other): _data(other.getData()) {}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& other) {
	if (this != &other)
		_data = other.getData();
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

std::map<std::string, float>	BitcoinExchange::getData() const {
	return _data;
}

std::map<std::string, float>	BitcoinExchange::parseData(std::string name) const {
	std::map<std::string, float>	data;
	std::string			line;
	std::ifstream			file(name.c_str());

	if (!file)
		throw	InvalidDataFile();

	while (std::getline(file, line)) {
		size_t comma = line.find(',');
		std::string		date = line.substr(0, comma);
		std::istringstream	priceStream(line.substr(comma + 1));
		float	price;
		priceStream >> price;
		data[date] = price;
	}
	
	file.close();
	
	return data;
}

float	BitcoinExchange::convert(std::string date, float value) const {
	std::map<std::string, float>::const_iterator	it = _data.lower_bound(date);

	if (it == _data.begin() || !value)
		throw BadInput(date);
	if (value < 0)
		throw NotPositiveNumber();
	if (value > 1000)
		throw TooLargeNumber();
	if (it != _data.end() && it->first == date)
		return value * it->second;
	--it;
	return value * it->second;
}
