#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 2) {
    cout << "Expect exactly one arguement." << endl;
    return -1;
  }

  fstream fs(argv[1]);
  string line;

  while(getline(fs, line)) {
    cout << line << endl;
  }

  return 0;
}
