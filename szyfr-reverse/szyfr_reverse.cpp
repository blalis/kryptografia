#include <iostream>
#define tab_size 50
#define word_size 30
using namespace std;
int main()
{
  string tekst[word_size];
  int count=0;
  int test=1;
  cout<<"Wpisz tekst:"<<endl;
  for(int i=0;i<tab_size;i++)
  {
    cin>>tekst[i];
    count++;
    if(getchar()==10)
      break;
  }
  //printf("Tekst: %s\n",tekst);
  cout<<"Tekst: ";
  for(int i=count;i>=0;i--)
  {
    for(int j=tekst[i].length()-1;j>=0;j--)
    {
          cout<<tekst[i][j];
    }
    cout<<" ";
  }
  cout<<endl;
}
