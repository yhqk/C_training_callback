/* function pointer exercises */
#include "indicator.h"

void registerAlarm(alarm a){
    static int index = 0; 
    p[index] = a; 
    index++;
}

int hitAlarm(){
    int i = 0;
    for(; i<3; i++){
	/* go through the array and call those callback functions */
	p[i](i);
    }
}
