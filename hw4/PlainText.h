#include <iostream>
#include <string>
using std::string;
class PlainText
{
protected:
    string text;
    bool _isEncrypted;
public:
    PlainText(string text);
    ~PlainText();
    bool isEncrypted() const;
    string getText() const;
};