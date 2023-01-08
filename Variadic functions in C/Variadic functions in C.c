
int  sum (int count,...) {
    int sum = 0;
    va_list p;
    va_start(p,count);
    for(int i=0; i<count; i++) {
        sum += va_arg(p,int);
    }
    va_end(p);
    return sum;
}

int min(int count,...) {
int minVal=MAX_ELEMENT,val;
va_list ptr;
va_start(ptr, count);
for(int i=0;i<count;i++){
   val=va_arg(ptr,int);
   if(val<minVal)
   minVal=val;
}
return minVal;
}

int max(int count,...) {
    int maxVal=MIN_ELEMENT;
va_list ptr;
va_start(ptr, count);
for(int i=0;i<count;i++){
    int val=va_arg(ptr,int);
    if(val>maxVal)
   maxVal=val;
}
return maxVal;
}

