#include<iostream>
using namespace std;

void p1(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<"*"<<" ";
    }
  cout<<endl;
  }
}

void p2(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
}

void p3(int n)
{
  for(int i=1;i<=n;i++){
  for(int j=1;j<=i;j++)
  {
    cout<<j<<" ";
  }
  cout<<endl;
}
}

void p4(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<j<<" ";
    }
    cout<<endl;
  }
}

void p5(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<i<<" ";
    }
    cout<<endl;
  }
}

void p6(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=n;j>i;j--)
    {
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
}

void p7(int n)
{
  for(int i=n;i>=1;i--)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<j<<" ";
    }
    cout<<endl;
  }
}

void p8(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<" ";
    }
      for(int k=1;k<=i;k++)
      {
        cout<<"* ";
      }
      cout<<endl;
  }
}

void p9(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=n;j>i;j--)
    {
      cout<<" ";
    }
    for(int k=1;k<=2*i-1;k++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
}

void p10(int n)
{
  int z=2*n-1;
  for(int i=n;i>0;i--)
  {
    for(int j=n-1;j>=i;j--)
    {
      cout<<" ";
    }
    for(int k=1;k<=z;k++)
    {
      cout<<"*";
    }
    z-=2;
    cout<<endl;
  }
}

void p11(int n)
{
  int space=n-1;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<space;j++)
    cout<<" ";
    for(int j=0;j<=i;j++)
    cout<<"* ";
	cout<<endl;
	space--;
  }
  
  space=0;
  
  for(int i=n;i>0;i--)
  {
    for(int j=0;j<space;j++)
    cout<<" ";
    for(int j=0;j<i;j++)
    cout<<"* ";
    cout<<endl;
    space++;
  }
}
    
void p12(int n)
{
  int space=n-1;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<space;j++)
    cout<<" ";
    for(int j=0;j<=i;j++)
    cout<<"*";
	cout<<endl;
	space--;
  }
  
  space=0;
  
  for(int i=n;i>0;i--)
  {
    for(int j=0;j<space;j++)
    cout<<" ";
    for(int j=0;j<i;j++)
    cout<<"*";
    cout<<endl;
    space++;
  }
}


/*Pending
void p13(int n)
{
  int space=n-1;
  for(int i=0;i<n;i++)
  {
    for(int j=n-1;j>space;j--)
    cout<<" ";
    for(int j=n-1;j>i;j--)
    cout<<"*";
	cout<<endl;
	space++;
  }
  
  space=0;
  
  for(int i=0;i<n;i++)
  {
    for(int j=n-1;j>space;j--)
    cout<<" ";
    for(int j=n-1;j>i;j--)
    cout<<"*";
    cout<<endl;
    space--;
  }
}
*/


void p14(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=i;j>=1;j--)
    {
      cout<<j%2 <<" ";
    }
    cout<<endl;
  }
}

void p15(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<((char)(i+64))<<" ";
    }
    cout<<endl;
  }
}

void p16(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<((char)(j+64));
    }
    cout<<endl; 
  }
}

void p17(int n)
{
  for(int i=n;i>0;i--)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<((char)(j+64));
    }
    cout<<endl;
  }
}

void p18(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<((char)(j+64));
    }
    cout<<endl;
  }
}

void p19(int n)
{
  int num=1;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<num<<" ";
    num++;
    }
    cout<<endl;
  }
}

void p20(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      if(i==1 || i==n)
      {
        cout<<"*";
      }
      else if(j==1 || j==n)
      {
        cout<<"*";
      }
      else
      {
        cout<<" ";
      }
    }
    cout<<endl;
  }
}


void p21(int n)
{
  char ch='A';
  for(int i=1;i<=n;i++)
  {
    for(int j=n-1;j>=i;j--)
      cout<<" ";
    for(int k=1;k<=i;k++)
      cout<<ch++;
      ch--;
    for(int l=1;l<i;l++)
      cout<<--ch;
    cout<<endl;
    ch='A';
  }
}

void p22(int n)
{
  for(int i=n;i>=1;i--)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<((char)(j+64));
    }
    cout<<endl;
  }
}

int main()
{
  p22(5); 
}
