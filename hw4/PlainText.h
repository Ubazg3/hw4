#ifndef PlainText_H
#define PlainText_H
#include <iostream>
#include <string>
using std::string;
using std::ostream;
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
    friend ostream& operator<<(ostream& os, const PlainText& obj);
};
#endif