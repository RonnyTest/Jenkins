// JenkinsTestApp.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include<string>
int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Input: ";
    std::string data;
    getline(std::cin, data);
    std::cout << "Output: " << data << "\n\n";

    return 0;
}
