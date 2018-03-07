#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/* Prototypes */
void ReadFile(string fileName);
void WriteFile(string fileName, string text);

/* Global Variables */
ifstream fileReader;
ofstream fileWriter;

/* Start of Program */
int main()
{
  string todoFile = "todo.txt";
  ReadFile(todoFile);
  WriteFile(todoFile, "[x] Complete lesson 1");
}

/* Function Declarations */
void ReadFile(string fileName)
{
  string line;
  fileReader.open(fileName);
  while (getline(fileReader,line)) {
      cout << line << endl;
  }
  fileReader.close();
}

void WriteFile(string fileName, string text)
{
  
  fileWriter.open(fileName, ios::app);
  fileWriter << text << endl;
  fileWriter.close();
}
