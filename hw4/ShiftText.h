#ifndef ShiftText_H
#define ShiftText_H
#include <iostream>
#include <string>
#include "PlainText.h"
using std::string;
class ShiftText : public PlainText
{
private:
    int key;
public:
    ShiftText(string text, int key);
    ~ShiftText();
    static string encrypt(string text, int key);
    static string decrypt(string text, int key);
    string encrypt();
    string decrypt();
};
#endif