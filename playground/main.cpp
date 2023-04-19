#include <iostream>
#include <fstream>
#include <string>



int main ()
{
    std::ifstream ifs("main.cpp");
    std::ofstream  of("myFile");
    std::string line;
    std::string st("tttttttt");
    while ( std::getline(ifs, line))
        std::cout << line<<std::endl;
    std::getline(ifs, line);
    std::cout<< st.find("t");
  return 0;
}