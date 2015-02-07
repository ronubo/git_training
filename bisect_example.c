#include <stdio.h>
double pi() {
return 3.1415;
}

const char *f() {
return "This is right. World peace accomplished. The programmer is the one true master of c.";
}

int main() { 
printf("hello world\n"); 
printf("Pi is %f\n", pi() );

printf ("Let's check the final result after fixing f: %s \n", f() );

return 0;
}
