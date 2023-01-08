int marks_summation(int* marks, int number_of_students, char gender){
   int resb=0,resg=0;
    for (int i=0; i<number_of_students; i++) {
    if (i%2==0) {
        resb+=marks[i];}
    else if (i%2==1) {
        resg+=marks[i];}
    }
    
    if (gender == 'b')
    return resb;
    else if (gender == 'g')
    return resg;
    else {
    return 0;
    }
}

