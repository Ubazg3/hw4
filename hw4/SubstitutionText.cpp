#include "SubstitutionText.h"
#define KEY_PLACE 0
#define VALUE_PLACE 2
SubstitutionText::SubstitutionText(string text, string dictionaryFileName) : PlainText(text)
{
    this->_dictionaryFileName = dictionaryFileName;
    this->text = encrypt(text, dictionaryFileName);
    this->_isEncrypted = true;
}

SubstitutionText::~SubstitutionText()
{
}

string SubstitutionText::encrypt(string text, string dictionaryFileName)
{
    std::ifstream csv(dictionaryFileName);
    std::string line;
    char key = NULL, value = NULL;
    string encryptedText = "";
    bool flag = false;
    for (int i = 0; i < text.length(); i++)
    {
        flag = false;
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            csv.clear(); // clearing the end of file(eof)
            csv.seekg(0, std::ios::beg); // going back to the start of the file
            while (std::getline(csv, line) && !flag)
            {
                key = line[KEY_PLACE];
                value = line[VALUE_PLACE];
                if (key == text[i])
                {
                    encryptedText += value;
                    flag = true;
                }
            }
        }
        else
        {
            encryptedText += text[i];
        }
    }
    return encryptedText;
}

string SubstitutionText::decrypt(string text, string dictionaryFileName)
{
    std::ifstream csv(dictionaryFileName);
    std::string line;
    char key = NULL, value = NULL;
    string encryptedText = "";
    bool flag = false;
    for (int i = 0; i < text.length(); i++)
    {
        flag = false;
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            csv.clear(); // clearing the end of file(eof)
            csv.seekg(0, std::ios::beg); // going back to the start of the file
            while (std::getline(csv, line) && !flag)
            {
                key = line[KEY_PLACE];
                value = line[VALUE_PLACE];
                if (value == text[i])
                {
                    encryptedText += key;
                    flag = true;
                }
            }
        }
        else
        {
            encryptedText += text[i];
        }

    }
    return encryptedText;
}

string SubstitutionText::encrypt()
{
    if (this->_isEncrypted == false)
    {
        this->text = encrypt(this->text, this->_dictionaryFileName);
        this->_isEncrypted = true;
    }
    return this->text;
}

string SubstitutionText::decrypt()
{
    if (this->_isEncrypted == true)
    {
        this->text = decrypt(this->text, this->_dictionaryFileName);
        this->_isEncrypted = false;
    }
    return this->text;
}
