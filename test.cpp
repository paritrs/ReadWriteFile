#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
  string text;
  ifstream infile("test.txt");
  ofstream outfile("output.txt");
  if(infile.is_open() && outfile.is_open())
  {
    while(getline(infile, text))
    {
      outfile << text <<endl;
      cout<< text;
    }
    infile.close();
    outfile.close();
  }
  return 0;
} 

