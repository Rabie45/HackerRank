int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

     if(n==1){
              printf("one\n");
          }
          else if (n==2) {
          printf("two\n");
          }
           else if (n==3) {
          printf("three\n");
          }
           else if (n==4) {
          printf("four\n");
          }
           else if (n==5) {
          printf("five\n");
          }
           else if (n==6) {
          printf("six\n");
          }
           else if (n==7) {
          printf("seven\n");
          }
           else if (n==8) {
          printf("eight\n");
          }
           else if (n==9) {
          printf("nine\n");
          }
          else{
             
              printf("Greater than 9\n");
              

      }

    return 0;
}