/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment2b
*/

#include <iostream>

int main()
{
	while (true)
	{
		std::string str;
		std::cout << "Enter the string in RPN format:" << std::endl;
		std::getline(std::cin, str);
		double *start = new double[str.length()];
		for (int i = 0; i < str.length(); i++)
		{
		        switch (str[i])
		        {
		                case '+':
		                        *(start - 2) = *(start - 2) + *(start - 1);
		                        start--;
		                        i++;
		                        break;
				case '-':
		                        *(start - 2) = *(start - 2) - *(start - 1);
		                        start--;
		                        i++;
		                        break;
				case '*':
		                        *(start - 2) = *(start - 2) * *(start - 1);
		                        start--;
		                        i++;
		                        break;
				case '/':
		                        *(start - 2) = *(start - 2) / *(start - 1);
		                        start--;
		                        i++;
		                        break;
		                default:
		                        std::string temp;
		                        while (str[i] != ' ')
		                        {
		                                temp += str[i];
		                                i++;
		                        }
		                        *start = stod(temp);
		                        start++;
		        }
		}
		start--;
		std::cout << "Answer: " << *start << std::endl;
		delete[] start;
	}
}
