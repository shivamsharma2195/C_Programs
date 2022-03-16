// write a c program which produces its own source code as its output

#include<stdio.h>

int main(){
    FILE *fp;
    char c;

    fp = fopen(__FILE__,"r");
 
    do{
         c= getc(fp);
         putchar(c);
    }
    while(c!=EOF);

    fclose(fp);
   
    return 0;
}

/**Output:
#include<stdio.h>

int main(){
    FILE *fp;
    char c;

    fp = fopen(__FILE__,"r");
 do{
         c= getc(fp);
         putchar(c);
    }
    while(c!=EOF);

    fclose(fp);
   
    return 0;
}**/
