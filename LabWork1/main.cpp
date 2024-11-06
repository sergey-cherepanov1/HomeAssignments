#include "loadBMP.h"

int main()
{
    std::string filename1 = "sample1.bmp";
    std::vector<uint8_t> buffer;
    int width, height;
    if (loadBMP(filename1, buffer, width, height))
    {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    std::string filename2 = "sample2.bmp";
    
    if (loadBMP(filename2, buffer, width, height))
    {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    std::string filename3 = "sample3.bmp";
    
    if (loadBMP(filename3, buffer, width, height))
    {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    
}
