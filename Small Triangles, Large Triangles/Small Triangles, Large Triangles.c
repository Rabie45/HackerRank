
void sort_by_area(triangle* tr, int n) {
    float  p;
    int *s=malloc(n*sizeof(int));
    for (int i=0; i<n; i++) {
    p=(tr[i].a+tr[i].b+tr[i].c)/2.0;
    int val = p * (p - tr[i].a) * (p-tr[i].b) * (p-tr[i].c);
    s[i]=val;
    }
    for (int i=0; i<n; i++) {
       for (int j=0; j<n-i-1; j++) {
         
        if(s[j]> s[j+1]){
            //swap
            int temp= s[j];
            s[j]=s[j+1];
            s[j+1]=temp;
            temp=tr[j].a;
            tr[j].a=tr[j+1].a;
            tr[j+1].a =temp;
            temp=tr[j].b;
            tr[j].b=tr[j+1].b;
            tr[j+1].b =temp;
            temp=tr[j].c;
            tr[j].c=tr[j+1].c;
            tr[j+1].c =temp;
        }
       }
    }
    
	/**
	* Sort an array a of the length n
	*/
}

