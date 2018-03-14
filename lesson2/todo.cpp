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
  //WriteFile(todoFile, "[x] Complete lesson 1");

}

/* Function Declarations */
void ReadFile(string fileName)
{
  // Open the file.
  fileReader.open(fileName);

  // Output each line to the console.
  string line;
  while (getline(fileReader, line))
  {
    // Declare some variables to hold our strings.
    string done;
    string desc;

    // TODO: Get the done status from the line.
    done = line;


    // TODO: Output depending on the done status.
    if (done[0] == '1') {
      done.replace(0,3,"[x]");
    }
    else {
      done.replace(0,3,"[ ]");
    }
    // TODO: Get and output the description from the line.
    

    // TODO: Replace the '|' symbol to '@'.
    done.replace(done.find("|"),1,"@");

    /* TODO CHALLENGE:
       Get the date from the description
       and output on a new line.
    */
    desc = done.substr(done.find("@")+1);
    done = done.substr(0,done.find("@")-1);
    cout << done << endl;
    cout << "   " << desc << endl;
  }

  // Close the file (don't forget to do this!).
  fileReader.close();
}

void WriteFile(string fileName, string text)
{
  // Open the file.
  fileWriter.open(fileName, ios::app);

  // Write to the file.
  fileWriter << text << endl;

  // Close the file (don't forget to do this!).
  fileWriter.close();
}
