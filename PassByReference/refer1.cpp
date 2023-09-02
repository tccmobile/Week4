#include <iostream>
using namespace std;

void incrementCount(int& count)//& to pass by reference
{
  count=count+1;//increments the value of count
}
int main()
{
  int count=0;//initialize the variable count
  int result=0;// initialize the variable result
  incrementCount(count);//increment value of count
  cout<<"Pass by Reference\n";
  cout<<"Count:";
  cout<<count;//prints count after the function call
  return 0;
}