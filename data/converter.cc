#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  string line;

  cout << "source,target,value\n";

  while(getline(cin, line)) {
    stringstream ss;
    ss << line;
    string prevEvent = "";
    string event;
    int counter = 0;
    for (;ss >> event; prevEvent = event, ++counter) {
      if (prevEvent == "" || (prevEvent == "o" && event == "o")) {
        continue;
      }

      cout << prevEvent << counter << ',' << event << (1 + counter) << ",1\n";
    }
  }

  return 0;
}
