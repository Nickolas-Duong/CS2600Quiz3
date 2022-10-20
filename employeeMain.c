//search for specific employee by name or number
// two functions - by name and by number -> effectively the same though
//search table - SearchEmplyeeTable() - do either through table

//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 

 

//gcc employeeMain.c employeeTable.c employeeTwo.c 

 

#include <string.h> 

#include <stdlib.h> 

#include "employee.h" 

int main(void){ 

    //defined in employeeSearchOne.c 

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 

    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 

    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind); 

    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind); 

    //defined in employeeTable.c 
    //extern -> definied in different file

    extern Employee EmployeeTable[];     

    extern const int EmployeeTableEntries;      

 

    PtrToEmployee matchPtr;  //Declaration 

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 

    //Example not found 

    if (matchPtr != NULL) 

        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee ID is NOT found in the record\n"); 

    
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1001); 

    //Example found 

    if (matchPtr != NULL) 

        printf("Employee ID 1001 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee ID is NOT found in the record\n"); 

 
    //Example found 

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 

    if (matchPtr != NULL) 

        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee Tony Bobcat is NOT found in the record\n"); 


    //Name not found
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Wildcat"); 

    if (matchPtr != NULL) 

        printf("Employee Tony Wildcat is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee Tony Wildcat is NOT found in the record\n"); 
 
    //Example found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 7.80); 

    if (matchPtr != NULL) 

        printf("Employee with salary of 7.80 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee with salary of 7.80 is NOT found in the record\n"); 
    
    //example not found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.10); 

    if (matchPtr != NULL) 

        printf("Employee with salary of 8.10 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee with salary of 8.10 is NOT found in the record\n"); 

    //Example Found
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "714-555-2749"); 

    if (matchPtr != NULL) 

        printf("Employee with phone number 714-555-2749 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee with phone number 714-555-2749 is NOT found in the record\n"); 

    //Example not found
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "714-555-2750"); 

    if (matchPtr != NULL) 

        printf("Employee with phone number 714-555-2750 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee with phone number 714-555-2750 is NOT found in the record\n"); 
        
    return EXIT_SUCCESS; 

} 