#include <iostream>
#include "customErrorClass.h"
#include "binaryFile.h"

/////////////////////////////////////////////////////////////////////

    //read - ale 
    //sort - drew
    //search - drew
    //retreive from binary file - garrett
    //update - garrett
    //impliment exception handling - ale 

/////////////////////////////////////////////////////////////////////

int main()
{

    binaryFile inputFile;
    Employee sort;
    int ID, department;

    // inputFile.ReadData(0);
    inputFile.ReadData(1);
    // inputFile.ReadData(2);
    // inputFile.ReadData(3);
<<<<<<< Updated upstream
=======
    cout<<"starting sort"<<endl;
    //sort.RetrieveEmployee(20,4);

    sort.Sort(ID, department);

>>>>>>> Stashed changes



    return 0;
}