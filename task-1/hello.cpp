/* Sergey Cherepanov st129987@student.spbu.ru
  task-1 project
*/

#include <iostream>
#include <string>
/* Это очень непрактичная функция, она не будет нужна почти никому. Лучше иметь функцию,
 * которая будет печатать hello + аргумент этой функции и использовать ее */
void Hello()
{
	std::cout << "Hello, World!" << std::endl;
	std::string s;
	while (true)
	{
		getline(std::cin, s);
		/* endl не просто выводит символ новой строки, а делает еще и дополнительные
     		* операции, что тоже может замедлить программу. Поэтому тут лучше использовать
     		* '\n' */
		std::cout << "Hello, " << s << "!" << std::endl; 
	}
}
