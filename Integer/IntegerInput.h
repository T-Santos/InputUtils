#ifndef INTEGERINPUT_H_INCLUDED
#define INTEGERINPUT_H_INCLUDED

// Include depends
#include <string>
#include <iostream>
#include <sstream>

// TODO overload function w/o message?
// TODO need getInt and getPosInt()
int getInt();

bool isValidInt(const std::string&);

int toInt(const std::string&);

#endif // INTEGERINPUT_H_INCLUDED
