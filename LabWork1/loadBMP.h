#ifndef LOADBMP_h
#define LOADBMP_h

#include "bmp.h"
#include <iostream>
#include <fstream>

bool loadBMP(const std::string& filename, std::vector<uint8_t>& imageData, int& width, int& height);

#endif
