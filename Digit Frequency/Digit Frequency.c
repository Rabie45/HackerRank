#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    int arr[9]={0};
    scanf("%s",&s);
    for (int i=0; i<10; i++){
        int count=0;
        for (int j=0; j<strlen(s); j++) {
        if (s[j]-'0'==i) {
       count++;
        }
        }
        arr[i]=count;
    }
      for (int i=0; i<10; i++) {
    printf("%d ",arr[i]);
    }
    return 0;
}
