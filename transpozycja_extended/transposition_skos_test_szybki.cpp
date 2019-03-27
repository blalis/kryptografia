#include <iostream>

int main()
{
  std::string tekst="transpozycja jest niesamowita";
  //std::string tekst="transpozycja";
  int trans=4;
  int len=tekst.length();
  int wys,count;
  if(len%trans==0)
    wys=len/trans;
  else
    wys=len/trans+1;
  char tab[wys][trans];
  int row=0,col=0;
  std::cout<<"Tekst: "<<tekst<<std::endl<<std::endl;
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
  std::cout<<"Tablica:"<<std::endl;
  count=0;
  for(int i=0;i<wys;i++)
  {
    for(int j=0;j<trans;j++)
    {
      if(count<len)
        std::cout<<tab[i][j]<<" ";
      count++;
    }
    std::cout<<std::endl;
  }
  std::cout<<std::endl;

  std::cout<<"Przestawienie:"<<std::endl;
  for(int i=wys-1;i>=1-trans;i--)
  {
    int count=0;
    if(i>=0)
      std::cout<<tab[i][count];
    for(int j=i+1;j<wys;j++)
    {
      count++;
      /*
      if(i==wys-2 && count==len%trans)
        break;
        */
      if(!(i==wys-2 && count==len%trans) && (count<trans && j>=0))
      //if(count<trans && j>=0)
        std::cout<<tab[j][count];
    }
    std::cout<<std::endl;
  }
  std::cout<<std::endl;

  std::cout<<"Szyfr: ";
  for(int i=wys-1;i>=1-trans;i--)
  {
    int count=0;
    if(i>=0)
      std::cout<<tab[i][count];
    for(int j=i+1;j<wys;j++)
    {
      count++;
      /*
      if(i==wys-2 && count==len%trans)
        break;
        */
      if(!(i==wys-2 && count==len%trans) && (count<trans && j>=0))
      //if(count<trans && j>=0)
        std::cout<<tab[j][count];
    }
  }
  std::cout<<std::endl;
}
