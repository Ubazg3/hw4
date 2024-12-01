#include "PlainText.h"
int PlainText::numOfTexts = 0;
PlainText::PlainText(string text)
{
	this->text = text;
	this->_isEncrypted = false;
	numOfTexts++;
}

PlainText::~PlainText()
{

}

bool PlainText::isEncrypted() const
{
	return this->_isEncrypted;
}

string PlainText::getText() const
{
	return this->text;
}
