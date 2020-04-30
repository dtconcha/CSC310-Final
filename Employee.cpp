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

e_NODE* Employee::getCurrent(){
    return this->current;
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
    e_NODE *node = new NODE;
    node->value = department;
    node->secondValue = ID;

    e_NODE *tmp = this->first;

    //int tmp;
    //node->value = node->current;

    for(int i = 0; i <= inputFile.ReadData.length; i++){

        if(node->value > node->next->value){
            tmp = node->current;
            node->current = node->next;
            node->next = tmp;
        }
    }


    while(department = 0){

        for(int i = 0; inputFile.ReadData.length; i++){

            if(node->secondValue > node->next->secondValue){
            tmp = node->current;
            node->current = node->next;
            node->next = tmp;
            }
        }

    }
    while(department = 1){

        for(int i = 0; inputFile.ReadData.length; i++){
            
            if(node->secondValue > node->next->secondValue){
            tmp = node->current;
            node->current = node->next;
            node->next = tmp;
            }
        }

    }
    while(department = 2){

        for(int i = 0; inputFile.ReadData.length; i++){
            
            if(node->secondValue > node->next->secondValue){
            tmp = node->current;
            node->current = node->next;
            node->next = tmp;
            }
        }

    }

    while(department = 3){

        for(int i = 0; inputFile.ReadData.length; i++){
            
            if(node->secondValue > node->next->secondValue){
            tmp = node->current;
            node->current = node->next;
            node->next = tmp;
            }
        }

    }

    while(department = 4){

        for(int i = 0; inputFile.ReadData.length; i++){
            
            if(node->secondValue > node->next->secondValue){
            tmp = node->current;
            node->current = node->next;
            node->next = tmp;
            }
        }

    }


}

void Employee::_Search(int ID, int department, string name){

}


