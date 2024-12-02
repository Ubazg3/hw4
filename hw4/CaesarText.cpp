#include "CaesarText.h"
#define DEFAULT_AMOUNT_SHIFT 3
/*
	ctor
*/
CaesarText::CaesarText(string text) : ShiftText(text, DEFAULT_AMOUNT_SHIFT)
{
}
/*
	dtor
*/
CaesarText::~CaesarText()
{
}
/*
	this function is encrypting a string 
	input: text
	output: encrypted text
*/
string CaesarText::encrypt(string text)
{
	return ShiftText::encrypt(text, DEFAULT_AMOUNT_SHIFT);
}
/*
	this function is decrypting a string
	input: text
	output: decrypted text
*/
string CaesarText::decrypt(string text)
{
	return ShiftText::decrypt(text, DEFAULT_AMOUNT_SHIFT);
}
/*
	this function is encrypting a string
	input: text
	output: encrypted text
*/
string CaesarText::encrypt()
{
	this->text = ShiftText::encrypt(this->text, DEFAULT_AMOUNT_SHIFT);
	this->_isEncrypted = true;
	return this->text;

}
/*
	this function is decrypting a string
	input: text
	output: decrypted text
*/
string CaesarText::decrypt()
{
	this->text = ShiftText::decrypt(this->text, DEFAULT_AMOUNT_SHIFT);
	this->_isEncrypted = false;
	return this->text;
}
/*
	this function is making use of the operator << so everytime we print it it can be used
	input: text
	output: the text
*/
ostream& operator<<(ostream& os, const CaesarText& obj)
{
	os << "CaesarText\n";
	os << obj.text << "\n";
	return os;
}
