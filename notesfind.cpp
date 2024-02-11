#include<iostream>
using namespace std;
int main()
{
    int n10,n50,n100,n500;
     n10=n50=n100=n500=0;
    int p;
    cout<<"ENter your total amount : ";
    cin>>p;
    switch(p>=500)
    {
        case 1:
          n500 = p/500;
          p-=n500*500;
           cout<< "500 : "<<n500<<endl;
          break;

    }
     switch(p>=100)
    {
        case 1:
          n100 = p/100;
          p-=n100*100;
          cout<< "100 : "<<n100<<endl;
          break;

    }
     switch(p>=50)
    {
        case 1:
          n50 = p/50;
          p-=n50*50;
          cout<< "50 : "<<n50<<endl;
          break;

    }
     switch(p>=10)
    {
        case 1:
          n10 = p/10;
          p-=n10*10;
          cout<< "10 : "<<n10<<endl;
          break;

    }
}
