/* Sergey Cherepanov st129987@student.spbu.ru
   Assignment2a
*/

#include <fstream>
#include <filesystem>

int main()
{
	std::uintmax_t size = std::filesystem::file_size("sample.bin") / 4;
	int* arr = new int[size];
	std::ifstream infile;
	infile.open("sample.bin", std::ios::binary | std::ios::in);
	infile.read((char *)arr, size * sizeof(int));
	infile.close();

	for (int i = 0; i < size / 2; i++)
        {
                 std::swap(arr[i], arr[size - (i + 1)]);
        }

	std::ofstream outfile;
	outfile.open("output.bin", std::ios::binary | std::ios::out);
	outfile.write((char *)arr, size * sizeof(int));
	outfile.close();
	delete[] arr;
}
