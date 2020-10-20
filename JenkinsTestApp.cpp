// JenkinsTestApp.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include<string>
int main()
{
    std::cout << "Hello World!\n";
    std::string data;
    getline(std::cin, data);

    while (!data.compare("\n"))
    {
    }
    return 0;
}
