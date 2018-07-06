#include<bits/stdc++.h>
using namespace std;
double Divfunc(int a,int b)
{
   if(b==0)
    throw "b can't be zero";
   else
   return a/b;
}
int main()
{
   int a,b;
   double c;
  cin>>a>>b;
   try{
        c= Divfunc(a,b);
        cout<<c<<endl;
     }
   catch(const char* error){
    cerr<<error<<endl;
    }
  return 0;
}
