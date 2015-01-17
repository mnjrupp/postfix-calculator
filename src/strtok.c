#include "llist.h"

int main(int argc,char *argv[])
 {
  
  char *pch;
  int i = 1,j;
  
  //printf("Splitting argv into tokens:\n");
   stackinit();

   for(;i<argc;i++)
   {
   
      pch = strtok(argv[i]," ");
     //printf("parsing: %s\n",argv[i]);
     while(pch != NULL)
     {
      for(j=0;j<strlen(pch);j++){
       if(pch[j]>='0' && pch[j]<='9')
        {printf("%c",(char)pch[j]);}
       if(pch[j]==' ')
        {
          printf("|");
        }
        if(pch[j]=='+' || pch[j] == '-' || pch[j] == '*'
           || pch[j]=='/' || pch[j]=='^' )
         {
           printf(" ");
           push((int) pch[j]);
         }
        if(pch[j]==')') printf(" %c",(char) pop());
        }
      pch = strtok(NULL," ");
      //printf("next token: %s\n",pch);
     }
     
    }
     while(!stackempty())
       {printf(" %c ",(char) pop());}
        return 0;
}
