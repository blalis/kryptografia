#include <iostream>
#define tab_size 50
int main()
{
  std::string tekst[tab_size];
  int trans;
  int wys,count,len;
  int row=0,col=0;
  std::cout<<"Podaj tekst do zaszyfrowania"<<std::endl;
  count=0;
  for(int i=0;i<tab_size;i++)
  {
    std::cin>>tekst[i];
    count++;
    if(getchar()==10)
      break;
  }
  len=0;
  for(int i=0;i<count;i++)
  {
    for(int j=0;j<tekst[i].length();j++)
    {
      len++;
    }
    if(i!=count-1)
    {
      len++;
    }
  }
  std::cout<<"Podaj przeskok: ";
  std::cin>>trans;
  if(len%trans==0)
    wys=len/trans;
  else
    wys=len/trans+1;
  char tab[wys][trans];
  for(int i=0;i<count;i++)
  {
    for(int j=0;j<tekst[i].length();j++)
    {
      tab[row][col]=tekst[i][j];
      col++;
      if(col==trans)
      {
        col=0;
        row++;
      }
    }
    if(i!=count-1)
    {
      tab[row][col]=' ';
      col++;
      if(col==trans)
      {
        col=0;
        row++;
      }
    }
  }
  std::cout<<std::endl;
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
    count=0;
    if(i>=0)
      std::cout<<tab[i][count];
    for(int j=i+1;j<wys;j++)
    {
      count++;
      /*
      if(i==wys-2 && count==len%trans)
        break;
        */
      if(!(j==wys-1 && count==len%trans) && (count<trans && j>=0))
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
      if(!(j==wys-1 && count==len%trans) && (count<trans && j>=0))
      //if(count<trans && j>=0)
        std::cout<<tab[j][count];
        /*
        if(count==trans)
          break;*/
    }
  }
  std::cout<<std::endl;
}
