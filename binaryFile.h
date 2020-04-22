#ifndef __BINARY_FILE__H__
#define __BINARY_FILE__H__

#include "customErrorClass.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class binaryFile
{
private:
    bool _ReadData(int size);
public:
    binaryFile(/* args */);
    ~binaryFile();
    bool ReadData(int size);
};




#endif