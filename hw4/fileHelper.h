#ifndef fileHelper_H
#define fileHelper_H
#include <iostream>
#include <string>
#include <fstream>
using std::string;
using std::ostream;
class FileHelper
{
private:
public:
    static string readFileToString(string fileName);
    static void writeWordsToFile(string inputFileName, string outputFileName);
    static void saveTextInFile(string text, string outputFileName);
};
#endif