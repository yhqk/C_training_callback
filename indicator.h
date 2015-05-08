/* Callback function exercises */

typedef int (*alarm)(int type);  /* define prototype for callback function */

int (*p[3])(int type);   /* array to store function pointer */

void registerAlarm(alarm a);  /* function register the callback functions */

int hitAlarm(); /* make alarm */
