#include "myphonebook.hpp"

int    main(void)
{
    string    line;

    while (getline(cin, line))
    {
        if (line == "ADD")
            cout << "ADD" << endl;
        else if (line == "SEARCH")
            cout << "SEARCH" << endl;
        else if (line == "EXIT")
            return (0);
    }
    return (0);
}
