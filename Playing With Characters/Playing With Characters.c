int main() 
{
char sen[MAX_LEN],word[MAX_LEN],ch;


scanf("%c",&ch);
scanf("%s\n",&word);
scanf("%[^\n]%*c",&sen);
   
printf("%c\n",ch);
printf("%s\n",word);
printf("%s\n",sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}