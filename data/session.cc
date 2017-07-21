#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  string line;
  string prevId = "";

  while(getline(cin, line)) {
    stringstream ss;
    string s;
    string id;
    ss << line;
    int counter = 0;
    while(ss >> s) {
      if (counter == 0) {
        if (prevId != "" && prevId != s) {
          cout << endl;
        }
        prevId = s;
      } else if(counter == 3) {
        cout << s[0] << ' ';
      }
      ++counter;
    }
  }

  cout << endl;
}
