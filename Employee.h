#include <stdio.h> 

#include <stddef.h> 

//size = all variables are largest size of variable
//depends on processor
//x86 = 4 bytes
//x64 = 8 bytes

typedef struct { 

    long number; 

    char *name; 

    char *phone; 

    double salary; 

} Employee, *PtrToEmployee; //identifies a pointer -> Ptr

typedef const Employee *PtrToConstEmployee; 