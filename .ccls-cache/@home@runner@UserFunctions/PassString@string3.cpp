#include <iostream>
#include <string>
using namespace std;

void nameChange(const string& name){
// name = "Bob"; //results in syntax error
  cout<< "Inside func, name = "<<name<<endl;
}


int main(){
  string myName = "Carl";

  cout<<"Before func call, myName = "<<myName<<endl;
  nameChange(myName);
  cout<<"After func call myName = "<<myName<<endl;

  return 0;
}