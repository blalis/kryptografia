#include <stdio.h>
int main()
{
  char tekst[50];
  printf("Wpisz tekst:\n");
  scanf("%s",tekst);
  //int tekst_len=sizeof(tekst)/sizeof(tekst[0]);
  int i;
  printf("Tekst: %s\n",tekst);
  printf("Tekst: ");
  for(i=sizeof(tekst)-1;i>=0;i--)
  {
    //if(tekst[i] == NULL)
      printf("%c",tekst[i]);
  }
  printf("\n");
}
