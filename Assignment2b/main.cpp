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
        double *end = start;
		for (int i = 0; i < str.length(); i++)
		{
		        switch (str[i])
		        {
		                case '+':
		                        *(end - 2) = *(end - 2) + *(end - 1);
		                        end--;
		                        i++;
		                        break;
				case '-':
		                        *(end - 2) = *(end - 2) - *(end - 1);
		                        end--;
		                        i++;
		                        break;
				case '*':
		                        *(end - 2) = *(end - 2) * *(end - 1);
		                        end--;
		                        i++;
		                        break;
				case '/':
		                        *(end - 2) = *(end - 2) / *(end - 1);
		                        end--;
		                        i++;
		                        break;
		                default:
		                        std::string temp;
		                        while (str[i] != ' ')
		                        {
		                                temp += str[i];
		                                i++;
		                        }
		                        *end = stod(temp);
		                        end++;
		        }
		}
		end--;
		std::cout << "Answer: " << *end << std::endl;
	    delete[] start;
    }
}
