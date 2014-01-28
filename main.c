#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char kata[25], hasil[30];
  int panjang_kata;
  int i,j;
 
  
  
  printf("Input Kata : ");  
  gets(kata);
  printf("\n\n");
  
  panjang_kata=strlen(kata);  
  
  j=0;
  hasil='Polindrom';
  for (i=panjang_kata-1; i>=0; i--)
  {
     
        if(kata[i] != kata[j])    
        { 
                   hasil = "bukan Polindrom";    
        }                     
     
     j++;
  }
  
  
  printf("\n\n");
  printf("Output : %s",hasil);
  
  printf("\n\n");
  system("PAUSE");	
  return 0;
}
