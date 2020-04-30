#ifndef __BINARY_FILE__H__
#define __BINARY_FILE__H__

#include "customErrorClass.h"
#include <iostream>
#include <typeinfo>
#include <fstream>
#include <sstream>

using namespace std;

typedef struct NODE{
    int value, secondValue;
    NODE *current;
    NODE *next;
    //NODE *previous;
}e_NODE;

class binaryFile
{
private:
    bool _ReadData(int size);
public:
    binaryFile();
    ~binaryFile();
    bool ReadData(int size);
};

class Employee
{
private:
    int _ID;
    int _Department;
    string _Name;
    e_NODE *_first;

    void _Update(int ID, int department, string name);
    int _Search(int ID, int department);
    void _Sort(int ID, int department);

public:
    Employee();
    Employee(int ID, int department, string name);
    ~Employee();

    e_NODE *getCurrent();
    void Update(int ID, int department, string name);
    bool Search(int ID, int department);
    void Sort(int ID, int department);
};

#endif