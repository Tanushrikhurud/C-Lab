#include <iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
  string userIntput;
  
  cout<<"Enter some text:";
  getline(cin, userIntput);
 
  ofstream outFile("myfile.text");
 if (outFile.is_open ())
 {

outFile<< userIntput; 
outFile.close();

cout << "Data saved to file."<< endl;
}
else
{
  cout<<"Error opening file for writing."<<endl;
}
string filecontent; 
ifstream infile ("myfile.text");

if (infile.is_open())
{
getline (infile, filecontent); 
infile.close();

cout << "Data read from file:"<<filecontent<<endl;
}
else 
{
  cout<<"Error opening file for reading."<<endl;
}
return 0;
}
