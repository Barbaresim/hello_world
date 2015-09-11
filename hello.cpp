#include <iostream>
using namespace std;

int main () {
  string username;
  string myname;

  myname = "Matt";
  
  cout << "Enter first name: ";
  cin >> username;

  cout << "\n\nHello " << username << ", my name is " << myname << endl;

  return 0;
}

