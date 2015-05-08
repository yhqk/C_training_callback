/* Callback function exercises */

typedef int (*alarm)(int type);  /* define prototype for callback function */

#if 0
int (*p[3])(int type);   /* array to store function pointer */
#endif

alarm p[3];

void registerAlarm(alarm a);  /* function register the callback functions */

int hitAlarm(); /* make alarm */
