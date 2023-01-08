#include <math.h>
void update(int *a,int *b) {
    int c=*a;
    *a=*a+*b;
    *b=abs(c-*b);   
}
