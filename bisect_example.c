#include <stdio.h>
double pi() {
return 3.1415;
}

double f() {
return 0.0; // "WORKAROUND" //"This is just wrong";
}

int main() { 
printf("hello world\n"); 
printf("Pi is %f\n", pi() );

printf ("Let's check the workaround %f ", f() );

return 0;
}
