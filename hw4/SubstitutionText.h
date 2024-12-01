#include <iostream>
#include <string>
#include "PlainText.h"
#include <fstream>
#include <iostream> // the auto test is using this so i do too
using std::string;
class SubstitutionText : public PlainText
{
private:
    string _dictionaryFileName;
public:
    SubstitutionText(string text, string dictionaryFileName);
    ~SubstitutionText();
    static string encrypt(string text, string dictionaryFileName);
    static string decrypt(string text, string dictionaryFileName);
    string encrypt();
    string decrypt();
};