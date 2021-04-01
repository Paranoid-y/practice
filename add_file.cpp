#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE  *fp;

   fp = fopen ("file.txt", "a+");
   char str[] = "This is runoob.com";
   for (int i = 0; i < 10; i++)
   {
       
        fwrite(str, sizeof(str), 1, fp);
   }
   
   //fprintf(fp, "%s %s %s %d", "We", "are", "in", 2014);
   
   fclose(fp);
   
   return(0);
}