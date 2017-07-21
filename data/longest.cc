#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
  string line;
  vector<string> lines;
  int longest = 0;
  while (getline(cin, line)) {
    lines.push_back(line);
    if (line.length() > longest)
      longest = line.length();
  }

  for (unsigned int i = 0; i < lines.size(); ++i) {
    if (lines[i].length() == longest)
      cout << lines[i] << endl;
  }

  return 0;
}
