#include <iostream>
#include <stdio.h>
#define tab_size 20
int main()
{
  std::string chartab="abcdefghijklmnopqrstuvwxyz";
  std::string tab[tab_size];
  int chartablen=chartab.length();
  char kodchar;
  int chartest;
  int count=0;
  //transp POWINNO być mniejsze niz ilsoc liter w alfabecie i minimum 1
  // Szyfr cezara 3
  int transp;
  std::cout<<"Podaj przeskok (liczbę liter,klasycznie były 3)"<<std::endl;
  std::cin>>transp;
  if(transp<0 || transp>chartablen)
  {
    transp=3;
    std::cout<<"Błędna wartość, wybrano wartosć domyślną!"<<std::endl;
  }
  std::cout<<"Przeskok: "<<transp<<std::endl;
  for(int i=0;i<chartablen;i++)
  {
    std::cout<<chartab[i];
  }
  std::cout<<std::endl;
  for(int i=0;i<chartablen;i++)
  {
    if(i>=chartablen-transp)
      chartest=i-chartablen+transp;
    else
      chartest=i+transp;
    std::cout<<chartab[chartest];
  }
  printf("\n");
}
