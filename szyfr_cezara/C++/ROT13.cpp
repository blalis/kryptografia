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
  int choice;
  //transp POWINNO być mniejsze niz ilsoc liter w alfabecie i minimum 1
  // Szyfr cezara 3
  int transp=13;
  std::cout<<"Jezeli chesz zaszyfrowac wcisnij 1, jezeli chcesz odszyfrowac podaj 2"<<std::endl;
  std::cout<<"Jezeli chesz wyjsc wcisnij 0"<<std::endl;
  while(choice!=1 && choice!=2)
  {
    std::cin>>choice;
    if(choice!=1 && choice !=2 && choice !=0)
      std::cout<<"Podales niepoprawna wartosc. Jezeli chcesz wyjsc wcisnij 0"<<std::endl;
    if(choice==0)
     return 0;
  }
  std::cout<<std::endl<<"Teraz podaj tekst"<<std::endl;
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
          if(choice==1)
          {
            if(j>=chartablen-transp)
            {
              kodchar=chartab[j-chartablen+transp];
            }
            else
              kodchar=chartab[j+transp];
          }
          else
          {
            if(j<transp)
            {
              kodchar=chartab[chartablen+j-transp];
            }
            else
              kodchar=chartab[j-transp];
          }
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
