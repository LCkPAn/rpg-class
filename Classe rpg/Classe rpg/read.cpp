#include "read.h"

void read::readFile()
{
    std::ifstream Handle("test.txt");
    if (Handle.is_open()) {
        while (!Handle.eof()) {
            std::string CurrLine;
            std::getline(Handle, CurrLine);
            std::cout << CurrLine << std::endl;
        }
        Handle.close();
        std::cout << "oui";
    }
}
