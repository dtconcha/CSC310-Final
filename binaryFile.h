#ifndef __BINARY_FILE__H__
#define __BINARY_FILE__H__

#include "customErrorClass.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

typedef struct NODE{
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

    void _Update(int ID, int department, string name);
    void _Search(int ID, int department, string name);
    void _Sort(int ID, int department);

public:
    Employee();
    Employee(int ID, int department, string name);
    ~Employee();
    void Update(int ID, int department, string name);
    void Search(int ID, int department, string name);
    void Sort(int ID, int department);
};

#endif