#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;

   getline(cin, userInput);

  if (userInput.find("darn") != std::string::npos){
     cout << "Censored" << endl;
     }
   else {
      cout << userInput << endl;
      }


   return 0;
}
