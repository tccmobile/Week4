#include <iostream>
#include <string>
using namespace std;

void print(int i) {
cout << " Here is int " << i << endl;
}

void print(double f) {
cout << " Here is float " << f << endl;
}

void print(string c) {
cout << " Here is string " << c << endl;
}



string print(string c, string d){
  cout << " Here is string " << c << " & "<< d<< endl;
  return "Howdy";
}

int main() {
print(10);
print(10.10);
print("ten");
cout<<print("hello","world")<<endl;
return 0;
}

