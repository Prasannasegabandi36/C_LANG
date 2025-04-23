#include <iostream>
using namespace std;
int main()
{
   char ch;
   cout<<"Enter a character:";
   cin>>ch;
   if(ch>='a' && ch<='z')
      cout<<"yes its a lower case";
   else
      cout<<"no it is not a lower case";
   return 0;
}
