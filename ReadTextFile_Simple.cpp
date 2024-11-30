/* ReadTextFile_Simple.txt*/
#include <iostream>
#include <fstream>
#include <string>
#include <format> // C++ 20!
using namespace std;

int main() 
{ ifstream in("data.txt");
  if (!in.is_open()) 
  { cerr << "Error opening file!" << std::endl;
    return 1; 
  }
  double  height;
  string name;
  in >> name;   
  in >> height; 
  cout << format("Name: {}, height: {:.2f}",name,height);
  in.close();
  return 0;
}