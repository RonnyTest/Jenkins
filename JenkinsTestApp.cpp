// JenkinsTestApp.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include<string>
int main()
{
   unsigned int uiCount = 0;
   char cStr;

   std::cout << "Hello World!\n";
   std::string data;

   do
   {
     cStr = getchar();
   } while (cStr != '\n');
   
   return 0;
}
