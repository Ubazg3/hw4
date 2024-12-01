#include "PlainText.h"

PlainText::PlainText(string text)
{
	this->text = text;
	this->_isEncrypted = false;
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
