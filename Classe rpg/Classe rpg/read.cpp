#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int read()
{
    
        std::ifstream Handle("test.txt");
        if (Handle.is_open()) {
            int I = 1;
            while (!Handle.eof()) {
                std::string CurrLine;
                std::getline(Handle, CurrLine);
                std::cout << I << ":" << CurrLine << std::endl;
                I++;
            }
            Handle.close();
        }
        return 0
}