#include <iostream>
#include <string>
#include <limits>
using namespace std;


int main() {
  int choice = 0;
  string temp;
  
  cout << "Hello User Defined Functions World!\n";
  
  do {
    system("clear");
    cout << "\n\nWhich example program do wish to run?"<<endl;
    cout<<"\n1. Unit Tests\n";
    cout<< "2. Pass by Value #1\n";
    cout<<"3. Pass by Value #2\n";
    cout<<"4. Pass by Reference #1\n";
    cout<<"5. Pass by Reference #2\n";
    cout<<"6. String passing #1\n";
    cout<<"7. String passing #2\n";
    cout<<"8. String passing #3\n";
    cout<<"9. Function Overloading #1\n";
    cout<<"10. Function Overloading #2\n";
    cout<<"11. Default Parameter Values\n";
    cout<<"99. Quit\n\n";
    cout<<"Choice? ";
    getline(cin,temp);
    choice = stoi(temp);
    
    switch(choice){
      case(1):
        cout<<"\nUnit Tests\n\n";
        system("cd UnitTest && make -s unit && ./unit && cd ~");
        break;
      case(2):
        cout<<"\nPass by Value #1\n\n";
        system("cd PassByValue && make -s value1 && ./value1 && cd ~");
        break;
      case(3):
        cout<<"\nPass by Value #2\n\n";
        system("cd PassByValue && make -s value2 && ./value2 && cd ~");
        break;
      case(4):
        cout<<"\nPass By Reference #1\n\n";
        system("cd PassByReference && make -s refer1 && ./refer1 && cd ~");
        break;
      case(5):
        cout<<"\nPass by Reference #2\n\n";
        system("cd PassByReference && make -s refer2 && ./refer2 && cd ~");
        break;
      case(6):
        cout<<"\nString Passing #1\n\n";
        system("cd PassString && make -s string1 && ./string1 && cd ~");
        break;
      case(7):
        cout<<"\nString Passing #2\n\n";
        system("cd PassString && make -s string2 && ./string2 && cd ~");
        break;
      case(8):
        cout<<"\nString Passing #3\n\n";
        system("cd PassString && make -s string3 && ./string3 && cd ~");
        break;
      case(9):
        cout<<"\nFunction Overloading #1\n\n";
        system("cd Overloading && make -s over1 && ./over1 && cd ~");
        break;
      case(10):
        cout<<"\nFunction Overloading #2\n\n";
        system("cd Overloading && make -s over2 && ./over2 && cd ~");
        break;
      case(11):
        cout<<"\nDefault Parameter Values\n\n";
        system("cd DefaultParams && make -s defaults && ./defaults && cd ~");
        break;
      case(99):
        exit(0);
    }

      cout<<"\n\nHit enter to continue\n";
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    
      
  } while (true);
  

  return 0;
}