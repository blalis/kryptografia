#include <stdio.h>
char letters[]="abcdefghijklmnopqrstuvwxyz";
int inc=3;
int lenlet=sizeof(letters)/sizeof(letters[0])-1;
int convert_letter(int num);
int main()
{
  char alphabet[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o',
  'p','q','r','s','t','u','v','w','x','y','z'};
  int i,l,numer;
  int test=0;
  char tekst[]="to jest waga z yyy";
  int tekstlen=sizeof(tekst)/sizeof(tekst[0])-1;
  printf("%s\n",tekst);
  for(i=0;i<tekstlen;i++)
  {
    for(l=0;l<lenlet;l++)
    {
      if(tekst[i]==letters[l])
      {
        numer=l;
        test=0;
        break;
      }
      else
        test=1;
    }
    if(test==0)
      convert_letter(numer);
    else
    {
      printf(" ");
      test=0;
    }
  }
  printf("\n");
}
int convert_letter(int num)
{
  if(num+inc>lenlet-1)
  {
    num=num-lenlet+inc;
  }
  else
    num=num+3;
  printf("%c",letters[num]);
}
