#include <stdio.h>
#define tab_size 50
#define word_size 30
int main()
{
  char tekst[tab_size][word_size];
  int countc[tab_size];
  int i,j;
  int count=0;
  int test=1;
  printf("Wpisz tekst:\n");
  for(i=0;i<tab_size;i++)
  {
    countc[i]=0;
    for(j=0;j<word_size;j++)
    {
      scanf("%c",&tekst[i][j]);
      if(tekst[i][j]==' ')
        break;
      if(tekst[i][j]=='\n')
      {
        test=0;
        break;
      }
      countc[i]++;
    }
    if(test==0)
      break;
    count++;
  }
  //printf("Tekst: %s\n",tekst);
  printf("Tekst: ");
  for(i=count;i>=0;i--)
  {
    for(j=countc[i];j>=0;j--)
    {
      if(tekst[i][j]!='\n')
          printf("%c",tekst[i][j]);
    }
  }
  printf("\n");
}
