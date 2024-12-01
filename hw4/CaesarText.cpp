#include "CaesarText.h"
#define DEFAULT_AMOUNT_SHIFT 3
CaesarText::CaesarText(string text) : ShiftText(text, DEFAULT_AMOUNT_SHIFT)
{
}

CaesarText::~CaesarText()
{
}

string CaesarText::encrypt(string text)
{
	return ShiftText::encrypt(text, DEFAULT_AMOUNT_SHIFT);
}

string CaesarText::decrypt(string text)
{
	return ShiftText::decrypt(text, DEFAULT_AMOUNT_SHIFT);
}

string CaesarText::encrypt()
{
	this->text = ShiftText::encrypt(this->text, DEFAULT_AMOUNT_SHIFT);
	this->_isEncrypted = true;
	return this->text;

}

string CaesarText::decrypt()
{
	this->text = ShiftText::decrypt(this->text, DEFAULT_AMOUNT_SHIFT);
	this->_isEncrypted = false;
	return this->text;
}
