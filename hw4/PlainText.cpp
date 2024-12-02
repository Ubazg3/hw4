#include "PlainText.h"
int PlainText::numOfTexts = 0;
/*
	ctor
*/
PlainText::PlainText(string text)
{
	this->text = text;
	this->_isEncrypted = false;
	numOfTexts++;
}
/*
	dtor
*/
PlainText::~PlainText()
{
	numOfTexts--;
}
/*
	checking if a string is encrypted
	input: none
	output: is the text encrypted
*/
bool PlainText::isEncrypted() const
{
	return this->_isEncrypted;
}
/*
	getter for text
*/
string PlainText::getText() const
{
	return this->text;
}
/*
	this function is making use of the operator << so everytime we print it it can be used
	input: text
	output: the text
*/
ostream& operator<<(ostream& os, const PlainText& obj)
{
	os << "PlainText\n";
	os << obj.text << "\n";
	return os;
}
