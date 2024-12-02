#include "ShiftText.h"
#define ALL_ENGLISH_LETTERS 26
/*
	ctor
*/
ShiftText::ShiftText(string text, int key) : PlainText(text)
{
	this->text = text;
	this->key = key;
	this->text = encrypt(this->text, this->key);
	this->_isEncrypted = true;
}
/*
	dtor
*/
ShiftText::~ShiftText()
{
}
/*
	this function is encrypting a string
	input: text
	output: encrypted text
*/
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
/*
	this function is decrypting a string
	input: text
	output: decrypted text
*/
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
/*
	this function is encrypting a string
	input: text
	output: encrypted text
*/
string ShiftText::encrypt()
{
	if (this->_isEncrypted == false)
	{
		this->text = encrypt(this->text, this->key);
		this->_isEncrypted = true;
	}
	return this->text;

}
/*
	this function is decrypting a string
	input: text
	output: decrypted text
*/
string ShiftText::decrypt()
{
	if (this->_isEncrypted == true)
	{
		this->text = decrypt(this->text, this->key);
		this->_isEncrypted = false;
	}
	return this->text;
}
/*
	this function is making use of the operator << so everytime we print it it can be used
	input: text
	output: the text
*/
ostream& operator<<(ostream& os, const ShiftText& obj)
{
	os << "ShiftText\n";
	os << obj.text << "\n";
	return os;
}