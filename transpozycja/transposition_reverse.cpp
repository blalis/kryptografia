#include <iostream>
#define words 30
void funkcja()
{
}
int main()
{
  std::string tab[words];
  std::cout<<"Podaj tekst. Max "<<words<<" wyrazow"<<std::endl;
  int count=0,row,column;
  int trans=-1,testcin,rowmod,col;
  for(int i=0;i<words;i++)
  {
    std::cin>>tab[i];
    count++;
    if(getchar()==10 || count==words)
      break;
  }
  std::cout<<"Teraz podaj co ile liter ma byc stosowany algorytm"<<std::endl;
  for(;;)
  {
    std::cin>>trans;
    if(trans>=0 && trans <=500)
      break;
    else
        std::cout<<"Zla wartosc"<<std::endl;
  }
  int counter=0,szyfr=0;
  std::cout<<"SZYFR:"<<std::endl;
  for(int i=0;i<count;i++)
  {
    if(i<count-1)
      tab[i].append(" ");
    for(int j=0;j<tab[i].length();j++)
    {
      szyfr++;
    }
    std::cout<<tab[i];
  }
  std::cout<<std::endl;
  std::cout<<"ODSZYFROWANIE: "<<std::endl;
  rowmod=szyfr%trans;
  if(rowmod==0)
    col=szyfr/trans;
  else
    col=szyfr/trans+1;
  //std::cout<<"Liter: "<<szyfr<<" kolumn: "<<col<<" modulo: "<<rowmod;
  char tab2[col][trans];
  row=0;
  column=0;
  for(int k=0;k<count;k++)
  {
    for(int j=0;j<tab[k].length();j++)
    {
      //std::cout<<tab[k][j]<<"  "<<row<<","<<column<<std::endl;
      tab2[row][column]=tab[k][j];
      row++;
      if(column<rowmod || rowmod==0)
      {
        if(row==col)
        {
          row=0;
          column++;
        }
      }
      else
      {
        if(row==col-1)
        {
          row=0;
          column++;
        }
      }
    }
  }


  for(int i=0;i<col;i++)
  {
    for(int j=0;j<trans;j++)
    {
      if(counter<szyfr)
        std::cout<<tab2[i][j];
      counter++;
    }
  }

/* tablica
  for(int i=0;i<col;i++)
  {
    for(int j=0;j<trans;j++)
    {
      std::cout<<tab2[i][j];
    }
    std::cout<<std::endl;
  }
*/
  std::cout<<std::endl;
}
