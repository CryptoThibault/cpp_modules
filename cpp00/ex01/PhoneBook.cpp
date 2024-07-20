#include "PhoneBook.hpp"
/*
class PhoneBook {
private :
	Contact	array[8];
	int	index;

public :
*/
	PhoneBook::PhoneBook() : index(0) {}

	void	PhoneBook::add(Contact& elem)
	{
		if (index == array.size())
			index = 0;
		array[index++] = elem;
	}

	void	PhoneBook:search(int i)
	{
		if (i >= 0 &&  i < array.size())
			array[i].show();
		else
			throw out_of_range("Index out of range");
	}

	void	PhoneBook::print()
	{
		cout << "+-------------------------------------------+" << endl;
		cout << "|     index|first name| last name|  nickname|"	<< endl;
		cout << "+-------------------------------------------+" << endl;
		for (int i = 0; i < array.size(); ++i)
		{
			cout << "|" << i << "|";
			cout << array[i].firstname << "|";
			cout << array[i].lastname << "|";
			cout << array[i].nickname << "|";
		}
		cout << "+-------------------------------------------+" << endl;
	}
//};
