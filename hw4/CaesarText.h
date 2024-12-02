#ifndef CaesarText_H
#define CaesarText_H
#include <iostream>
#include <string>
#include "ShiftText.h"
using std::string;
class CaesarText : public ShiftText
{
private:
public:
    CaesarText(string text);
    ~CaesarText();
    static string encrypt(string text);
    static string decrypt(string text);
    string encrypt();
    string decrypt();
};
#endif