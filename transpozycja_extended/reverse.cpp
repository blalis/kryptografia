#include <iostream>
using namespace std;
#define tab_size 500
int main()
{
  string tekst;
  int trans,mod;
  int wys,count,count2,count3,len;
  bool test=0;
  int row=0,col=0;
  std::cout<<"Podaj tekst do odszyfrowania"<<std::endl;
  getline(cin,tekst);
  len=tekst.length();
  std::cout<<"Podaj przeskok: ";
  std::cin>>trans;
  mod=len%trans;
  std::cout<<"length: "<<len<<"mod: "<<mod<<std::endl;
  if(mod==0)
    wys=len/trans;
  else
    wys=len/trans+1;
  char tab[wys][trans];
  //char przestaw[trans+wys-1][trans];
  count2=0;
  count3=0;
  for(int i=wys-1;i>=1-trans;i--)
  {
    count2=0;
    for(int j=i;j<wys;j++)
    {
      if((count2<trans) && !(j==wys-1 && mod>0 && count2>=mod) && (count3<len))
      //if((count2<trans))
      {
        if(j<0)
        {
          count2+=(-1*j);
          j=0;
        }
        //tab[j][count2]=tekst[0][count3];
        tab[j][count2]=tekst[count3];
        count2++;
        count3++;
      }
    }
  }
  count2=0;
  cout<<endl<<"Szyfr:"<<endl;
  for(int i=0;i<wys;i++)
  {
    for(int j=0;j<trans;j++)
    {
      if(count2==len)
        break;
      std::cout<<tab[i][j];
      count2++;
    }
  }
  cout<<endl<<endl;
}
