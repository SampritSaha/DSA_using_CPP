#include <iostream>
using namespace std;
 
/*
int main() 
{
  int n;
  cin>>n;

  int i=0;
  while(i<n)
    {
      int j=0;
      while(j<n)
        {
          cout<<n-j<<" ";
          j= j+1;
        }
      cout<<endl;
      i=i+1;
    }
}*/

/*
int main() 
{
  int n;
  int count=1;
  cin>>n;

  int i=0;
  while(i<n)
    {
      int j=0;

      while(j<n)
        {
          cout<<count<<" ";
          j= j+1;
          count=count+1;
        }
      cout<<endl;
      i=i+1;
    }
}*/

/*
int main() 
{
  int n;
  cin>>n;

  int i=0;
  while(i<n)
    {
      int j=0;
      while(j<=i)
        {
          cout<<"*"<<" ";
          j= j+1;
        }
      cout<<endl;
      i=i+1;
    }
}*/


/*
int main() 
{
  int n;
  cin>>n;

  int i=1;
  while(i<=n)
    {
      int j=1;
      while(j<=i)
        {
          cout<<i<<" ";
          j= j+1;
        }
      cout<<endl;
      i=i+1;
    }
}*/


/*
int main() 
{
  int n;
  cin>>n;

  int i=1;
  while(i<=n)
    {
      int j=0;
      while(j<i)
        {
          int count=i;
          cout<<count+j<<" ";
          j= j+1;
        }
      cout<<endl;
      i=i+1;
    }
}*/


/*
int main() 
{
  int n;
  cout<<"Enter a number:";
  cin>>n;

  int i=0;
  while(i<n)
    {
      int j=0;
      while(j<=i)
        {
          char c = 'A';
          char ch = c + i;
          cout<<ch<<" ";
          j= j+1;
        }
      cout<<endl;
      i=i+1;
    }
}*/


/*
int main() 
{
  int count=0;
  int n;
  cout<<"Enter a number:";
  cin>>n;

  int i=0;
  while(i<n)
    {
      int j=0;
      while(j<=i)
        {
          char c = 'A';
          char ch = c + count;
          cout<<ch<<" ";
          j= j+1;
          count= count+1;
        }
      cout<<endl;
      i=i+1;
    }
}*/


/*
int main() 
{
  int n;
  cout<<"Enter a number:";
  cin>>n;

  int i=0;
  while(i<n)
    {
      int j=0;
      while(j<=i)
        {
          char c = 'A';
          char ch = c + i;
          cout<<ch<<" ";
          j= j+1;
        }
      cout<<endl;
      i=i+1;
    }
}*/


/*
int main() 
{
  int n;
  cout<<"Enter a number:";
  cin>>n;

  int row=0;
  while(row<n)
    {
      int space=n-row-1;
      while(space)
        {
          cout<<" ";
          space = space-1;
        }
      int col=0;
      while(col<=row)
        {
          cout<<"*";
          col = col+1;
        }
      cout<<endl;
      row+=1;
    }
}*/


/*
int main() 
{
  int n;
  cout<<"Enter a number:";
  cin>>n;
  
  int i=0;
  while(i < n)
    {
      int j=0;
      while(j<i)
        {
          cout<<" ";
          j=j+1;
        }
      int k=n-i;
      while(k<n)
        {
          cout<<"*";
          k=k+1;
        }
      cout<<endl;
      i=i+1;
    }
  return 0;
}*/ //re check


/*
int main() 
{
  int n;
  cout<<"Enter a number:";
  cin>>n;

  int row=0;
  while(row<n)
    {
      int space=n-row-1;
      while(space)
        {
          cout<<" ";
          space = space-1;
        }
      int col=1;
      while(col<=row+1)
        {
          cout<<col;
          col = col+1;
        }
      int i=row-1;
      while(i)
        {
          cout<<i;
          i=i-1;
        }
      cout<<endl;
      row= row + 1;
    }
}*/ //recheck

