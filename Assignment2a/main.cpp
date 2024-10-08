/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment2a
*/

#include <fstream>
#include <filesystem>

int main()
{
	unsigned f_size = std::filesystem::file_size("sample");
	char* arr = new char[f_size];
	std::ifstream infile;
	infile.open("sample", std::ios::binary | std::ios::in);

    /*reading file*/
    std::string line;
    std::getline(infile, line);
    int size = line.length();
    for (int i = 0; i < size; i++)
    {
        arr[i] = line[i];
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
