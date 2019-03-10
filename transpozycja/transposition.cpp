#include <iostream>
#define words 30
int main()
{
  std::string tab[words];
  std::cout<<"Podaj tekst. Max "<<words<<" wyrazow"<<std::endl;
  int count=0;
  for(int i=0;i<words;i++)
  {
    std::cin>>tab[i];
    count++;
    if(getchar()==10 || count==words)
      break;
  }
  int trans=3;
  int counter;
  std::cout<<"TEKST:"<<std::endl;
  for(int i=0;i<count;i++)
  {
    if(i<count-1)
      tab[i].append(" ");
    std::cout<<tab[i];
  }
  std::cout<<std::endl;
  std::cout<<"SZYFR: "<<std::endl;
  for(int i=0;i<trans;i++)
  {
    counter=0;
    for(int k=0;k<count;k++)
    {
      for(int j=0;j<tab[k].length();j++)
      {
        if( counter % trans==i)
        {
          std::cout<<tab[k][j];
        }
        counter++;
      }
    }
  }
  std::cout<<std::endl;
}
