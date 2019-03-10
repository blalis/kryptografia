#include <iostream>

int main()
{
  std::string tekst="transpozycja jest po prostu fajna";
  int trans=3;
  std::cout<<"Tekst: "<<tekst<<std::endl;
  std::cout<<"Szyfr: ";
  for(int i=0;i<trans;i++)
  {
    for(int j=0;j<tekst.length();j++)
    {
      if(j%trans==i)
      {
        std::cout<<tekst[j];
      }
    }
  }
  std::cout<<std::endl;
}
