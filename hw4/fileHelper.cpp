#include "fileHelper.h"

string FileHelper::readFileToString(string fileName)
{
    std::ifstream readFile(fileName);
    string line = "", text = "";
    while (std::getline(readFile, line))
    {
        text += line + "\n";
    }
    text.pop_back(); // the auto test is complaining on the last \n so i did 1 pop back
    readFile.close();
    return text;
}
void FileHelper::writeWordsToFile(string inputFileName, string outputFileName)
{
    string content = readFileToString(inputFileName);
    std::ofstream outputFile(outputFileName);
    outputFile << content;
    outputFile.close();
}


void FileHelper::saveTextInFile(string text, string outputFileName)
{
    std::ofstream outputFile(outputFileName);
    outputFile << text;
    outputFile.close();
}
