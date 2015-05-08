#include <stdio.h>
#include <stdlib.h>
#include "indicator.h"

int *createArray(int size); 
int alarm1(int type); 
int alarm2(int type); 
int alarm3(int type); 

int alarm1(int type){
    printf("Meltdon of type %i\n", type);   
}

int alarm2(int type){
    printf("Meltdon of type %i\n", type);   
}

int alarm3(int type){
    printf("Meltdon of type %i\n", type);   
}

int main(){
    /* memory is defined during compiling, then loc.... */
    int values[10];   /* uninitialized value */
    int arvo = 30; 
    int *ptr = &arvo; 

    /* There might overwrite to another value, ??? */
    printf("==== pointer and pointer address exercise ==== \n");   
    printf("Address of value[10]: %x\n",(unsigned int)&values[10]);   
    printf("Address of arvo: %x\n",(unsigned int)&arvo);   
    values[11] = 2; 
    printf("Arvo %i\n",arvo);   
    printf("The address of arvo : %x\n", (unsigned int)ptr);
    printf("The address of ptr : %x\n", (unsigned int)&ptr);
    printf("The value of x : %i\n", *ptr);   
    
    int * myArray = createArray(10); 

    myArray[0]=99; 
    printf("%i\n",myArray[0]);
    free(myArray);   /* heap, fragmentation memory... stack */

    /*pointer */
    int koko = 0; 
    int * p = &koko; 
    int * p2 = NULL; /* pointer needs to be initialized */
    int i = 0; 
    int array[2] = {3,5}; 
    for( i = 0; i < 2; i++) {
         printf("Value is: %i\n", *array);
	 (*array)++;
    }

    printf("==== Callback function pointer exercise ==== \n");   
    registerAlarm(alarm1); 
    registerAlarm(alarm2); 
    registerAlarm(alarm3);
    hitAlarm();
    return 0; 
}

int *createArray(int size){
    /* pointer is always 4 bytes, int defines the data type of data 
     * stored in the array, so that compiler knows how to move the point,
     * malloc return as void pointer. 
     */
    int *array = (int*)malloc( sizeof(int) *size ); 
    return array; 
}

void allocated_space( char*c, int length){
    c = malloc(sizeof(char) * (length +1));
}
