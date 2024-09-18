/* Sergey Cherepanov st129987@student.spbu.ru
   task-1 project
*/

#include <iostream>
#include <string>
#include "hello.h"

int main(int arc, char *argv[])
{
	std::cout << "Hello, World!\n";
	std::string s;
	while (true)
	{
		getline(std::cin, s);
		Hello(s);
	}
	return 0;
}
