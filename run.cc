#include "read_file.h"
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  read_file rf;
  some_data dat;

  char fileName[MAXLINE];
  std::cout << "Please enter an input file: " << std::endl;
  std::cin >> fileName;
  rf.readInputFile(fileName, dat);

  std::cout << "data written: " << std::endl;
  std::cout << " someChar     : " << dat.someChar << std::endl; 
  std::cout << " someSize1    : " << dat.someSize1 << std::endl; 
  std::cout << " someSize2    : " << dat.someSize2 << std::endl;
  std::cout << std::setprecision(16) << " someVal1     : " << dat.someVal1 << std::endl; 
  std::cout << std::setprecision(16) << " someVal2     : " << dat.someVal2 << std::endl;  

  return 0;
}