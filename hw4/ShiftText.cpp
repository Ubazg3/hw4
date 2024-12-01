#include "ShiftText.h"
#define ALL_ENGLISH_LETTERS 26
ShiftText::ShiftText(string text, int key) : PlainText(text)
{
	this->text = text;
	this->key = key;
	this->text = encrypt(this->text, this->key);
	this->_isEncrypted = true;
}

ShiftText::~ShiftText()
{
}

string ShiftText::encrypt(string text, int key)
{
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] >= 'a' && text[i] <= 'z')
		{
			text[i] = 'a' + (text[i] - 'a' + key) % ALL_ENGLISH_LETTERS;
		}
	}
	return text;
}

string ShiftText::decrypt(string text, int key)
{
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] >= 'a' && text[i] <= 'z')
		{
			text[i] = 'a' + (text[i] - 'a' - key + ALL_ENGLISH_LETTERS) % ALL_ENGLISH_LETTERS;
		}
	}
	return text;
}

string ShiftText::encrypt()
{
	if (this->_isEncrypted == false)
	{
		this->text = encrypt(this->text, this->key);
		this->_isEncrypted = true;
	}
	return this->text;

}

string ShiftText::decrypt()
{
	if (this->_isEncrypted == true)
	{
		this->text = decrypt(this->text, this->key);
		this->_isEncrypted = false;
	}
	return this->text;
}
