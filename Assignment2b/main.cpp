/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment2b
*/

#include <iostream>

int main()
{
	std::string str;
	std::getline(std::cin, str);
	int *start = new int[str.length()];
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
                                *start = stoi(temp);
                                start++;
                }
        }
	std::cout << *(start - 1) << std::endl;
}
