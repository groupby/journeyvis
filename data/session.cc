#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 2) {
    cout << "Expect 2 arguments" << endl;
    return -1;
  }

  fstream fs(argv[1]);
  string line;
  string prevId = "";

  while(getline(fs, line)) {
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
        cout << s << ' ';
      }
      ++counter;
    }
  }

  cout << endl;
}
