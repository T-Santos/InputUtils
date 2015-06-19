#include "IntegerInput.h"

bool isValidInt(const std::string&);
int toInt(const std::string&);
/*
   This is the main function to call
*/
int getInt()
{
    std::string strInt;
    bool validInt = false;
    do{
        std::cout <<"Enter an integer: ";
        std::getline(std::cin, strInt);
        if (isValidInt(strInt))
        {
            //std::cout << "Valid int: " << strInt << std::endl;
            validInt = true;
        }
        else
        {
            std::cout << "Invalid input\n";
        }

    }while(!validInt);

    return toInt(strInt);
};

bool isValidInt(const std::string& str)
{
    std::string::const_iterator it;
    for (it = str.begin(); it != str.end(); ++it)
        if(!isdigit(*it))
            return false;

    return true;
};

int toInt(const std::string &str)
{
    int x;
    std::istringstream ss(str);
    ss >> x;
    return x;
};
