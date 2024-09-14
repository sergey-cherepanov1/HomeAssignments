/* Sergey Cherepanov st129987@student.spbu.ru
  task-1 project
*/

#include <iostream>
#include <string>

void Hello()
{
	std::cout << "Hello, World!" << std::endl;
	std::string s;
	while (true)
	{
		getline(std::cin, s);
		std::cout << "Hello, " << s << "!" << std::endl; 
	}
}
