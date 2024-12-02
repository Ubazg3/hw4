#ifndef PlainText_H
#define PlainText_H
#include <iostream>
#include <string>
using std::string;
class PlainText
{
protected:
    string text;
    bool _isEncrypted;
public:
    static int numOfTexts;
    PlainText(string text);
    ~PlainText();
    bool isEncrypted() const;
    string getText() const;
};
#endif