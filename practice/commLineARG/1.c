#include <stdio.h>

void main(int argc,char*argv[]) 
{  
  int i;

   printf("Program name is: %s\n",argv[0]);  
   
   if(argc < 2)
   {  
      printf("No argument passed through command line\n");  
   }  
   else
   {
	 for(i=0;i<argc;i++)
	 {	 
      printf("%d argument is: %s\n",i, argv[i]);
	 }
   }
  
}
      
