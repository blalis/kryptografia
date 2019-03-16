#include <iostream>
#include <stdio.h>
#define tab_size 50
int main()
{
  std::string chartab="abcdefghijklmnopqrstuvwxyz";
  std::string tab[tab_size];
  int chartablen=chartab.length();
  char kodchar;
  bool casetest;
  int chartest;
  int count=0;
  for(int i=0;i<tab_size;i++)
  {
    std::cin>>tab[i];
    count++;
    if(getchar()==10)
      break;
  }
  for(int i=0;i<count;i++)
  {
    for(int k=0;k<tab[i].length();k++)
    {
      chartest=1;
      casetest=0;
      if(isupper(tab[i][k]))
      {
        casetest=1;
      }
      kodchar=tolower(tab[i][k]);
      for(int j=0;j<chartab.length();j++)
      {
        if(kodchar==chartab[j])
        {
          chartest=0;
          if(j>=chartablen-3)
          {
            kodchar=chartab[j-chartablen+3];
          }
          else
            kodchar=chartab[j+3];
          if(casetest==1)
          {
            kodchar=toupper(kodchar);
          }
          std::cout<<kodchar;
          break;
        }
      }
      if(chartest==1)
        std::cout<<tab[i][k];
    }
    std::cout<<" ";
  }
  printf("\n");
}
