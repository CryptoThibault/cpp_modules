#include "myphonebook.hpp"

class PhoneBook {
private :
	Contact	array[8];
	int	index;
public :

	PhoneBook()
		: index(0) {}

	void	add(Contact& elem)
	{
		if (index == array.size())
			index = 0;
		array[index++] = elem;
	}

	void	search(int i)
	{
		if (i >= 0 &&  i < array.size())
			array[i].show();
		else
			throw out_of_range("Index out of range");
	}

	void	print()
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
};
