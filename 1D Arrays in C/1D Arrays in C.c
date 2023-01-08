int main() {
int size;
int sum=0;
scanf("%d",&size);
int x[size];
for(int i=0;i<size;i++){
    scanf("%d\t ",&x[i]);
    sum += x[i];
}
printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}