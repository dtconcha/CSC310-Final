#include "binaryFile.h"

        //Public

Employee::Employee(int ID, int department, string name)
{
    this->_ID = ID;
    this->_Department = department;
    this->_Name = name;
}

Employee::~Employee()
{
}

Employee::Employee()
{
}

void Employee::Update(int ID, int department, string name)
{
    _Update(ID, department, name);
}

void Employee::Sort(int ID, int department){

    _Sort(ID, department);
}

void Employee::Search(int ID, int department, string name){

    _Search(ID, department, name);
}


        //Private

void Employee::_Update(int ID, int department, string name)
{
    this->_ID = ID;
    this->_Department = department;
    this->_Name = name;
}

void Employee::_Sort(int ID, int department){

    binaryFile inputFile;
    int temp;

    for(int i = 0; i <= inputFile.ReadData.length; i++){

        if(department + 1 > department){
            temp = department;
            department = department + 1;
            department + 1 = temp;
        }

    }


    if(department > 0){

    }

}

void Employee::_Search(int ID, int department, string name){

}


