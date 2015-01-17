#include "llist.h"
#include <ctype.h>
#include <math.h>
int main(int argc,char *argv[])
 {
  char *pch;
  int i=1,x,x2;
  
  stackinit();
  
  for(;i<argc;i++)
  {
   pch = strtok(argv[i]," ");
   printf("first token %s\n",pch);
   while(pch != NULL)
   {  
    x=0;x2=0;
    if(pch[0]=='*') x=pop()*pop();
    if(pch[0]=='+') x=pop()+pop();
    if(pch[0]=='-') x=pop()-pop();
    if(pch[0]=='/'){
       x=pop();x2=pop();
       x=x2/x;
     }
     if(pch[0]=='^'){
      //exponential
      x=(int)pow((double)pop(),(double)pop()); 
    } 
   // printf("x = %d\n",x);
    if(isdigit(pch[0]))
     { x=atoi(pch);}
    // printf(" push %d onto the stack\n",x);
     push(x);
     
     pch = strtok(NULL," ");
    // printf("next token %s\n",pch);
    }
   }
    printf("%d\n",x);
    return 0;
 }
