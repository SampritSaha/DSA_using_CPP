// for loop

#include <iostream>
using namespace std;
/* 
int main() 
{
  int n;
  cout<<"Enter:";
  cin>>n;

  for(int i=0; i<n ; i++)
    {
      cout<<i+1<<endl;
    }
}*/


/*
int main() 
{
  int n;
  cout<<"Enter:";
  cin>>n;
  int i=0;
  for(;;)
    {
      if( i<n )
      {
        cout<<i+1<<endl;
      }
      else
      {
        break;
      }
      i++;
    }
}*/


/*
int main() 
{
  int n;
  cout<<"Enter:";
  cin>>n;
  int i=0;
  for(;;)
    {
      if( i<n )
      {
        cout<<i+1<<endl;
      }
      else
      {
        break;
      }
      i++;
    }
}*/


//LEET CODE
/*
int main()
{
  int n;
  cout<<"Enter n:";
  cin>>n;

  int p=1;
  int s=0;
  while(n !=0)
    {
      int d;
      d=n%10;
      p = p*d;
      s = s+d;

      n=n/10;
    }
  int ans=p-s;
  cout<<p<<" - " <<s<<" = "<<ans<<endl ;
  return 0;
}*/