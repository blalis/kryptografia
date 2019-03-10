#include <iostream>

int main()
{
  //std::string tekst="transpozycja jest po prostu zajebista";
  std::string tekst="transpozycjaa\0";
  int trans=4;
  int len=tekst.length();
  int wys,counter;
  if(len/trans%trans==0)
    wys=len/trans;
  else
    wys=len/trans+1;
  char tab[wys][trans];
  int row=0,col=0;
  std::cout<<"Tekst: "<<tekst<<std::endl;
  for(int i=0;i<len;i++)
  {
      tab[row][col]=tekst[i];
      col++;
      if(col==trans)
      {
        col=0;
        row++;
      }
  }
  tab[wys-1][row+1]='s';
  counter=0;
  for(int i=0;i<wys;i++)
  {
    for(int j=0;j<trans;j++)
    {
      if(counter<len)
        std::cout<<tab[i][j]<<" ";
        counter++;
    }
    std::cout<<std::endl;
  }
  return 0;
  std::cout<<"Szyfr: ";
  counter=0;
  for(int i=wys-1;i>=1-trans;i--)
  {
    int count=0;
    if(i>=0)
      std::cout<<tab[i][count];
    for(int j=i+1;j<wys;j++)
    {
        count++;
        if(count<trans && j>=0 && counter<len)
        {
          std::cout<<tab[j][count];
          counter++;
        }
        if(count==trans)
          break;
    }
  }
  std::cout<<std::endl;
}
