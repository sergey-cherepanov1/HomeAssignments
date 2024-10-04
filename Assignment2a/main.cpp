/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment2a
*/

#include <iostream>
#include <fstream>
#include <filesystem>

int main()
{
	unsigned f_size = std::filesystem::file_size("sample");
	char* arr = new char[f_size];
	std::ifstream infile;
	infile.open("sample", std::ios::binary | std::ios::in);

    /*reading file*/
    int size = 0;
    while (infile >> arr[size])
    {
        size++;
    }
    infile.close();

    /*reverse*/
    for (int i = 0; i < size / 2; i++)
    {
        std::swap(arr[i], arr[size - (i + 1)]);
    }

    /*writing file*/
	std::ofstream outfile;
	outfile.open("output", std::ios::binary | std::ios::out);
	outfile.write((char *)arr, size * sizeof(arr[0]));
	outfile.close();

	delete[] arr;
}
