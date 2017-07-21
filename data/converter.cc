#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Event {
public:
  char type;
  Event* search;
  Event* view;
  Event* order;
  int number;
  Event(char type): type(type), number(1), search(nullptr), view(nullptr), order(nullptr) {}
  ~Event() {}

  void increase() {
    number++;
  }

  void print() {
    cout << type << ": "<< number << endl;
    if (search)
      search->print();
    if (view)
      view->print();
    if (order)
      order->print();
  }
};

class Wrapper {
private:
  Event* head;
  Event* cursor;
public:
  Wrapper():head(nullptr), cursor(nullptr) {}

  void setCursor() {
    cursor = head;
  }

  void setCursor(char type) {
    if (cursor == nullptr)
      return;

    switch(type) {
      case 's': cursor = cursor->search; break;
      case 'v': cursor = cursor->view; break;
      case 'o': cursor = cursor->order; break;
      default: break;
    }
  }

  void insert(char type) {
    if (head == nullptr) {
      head = new Event(type);
      cursor = head;
    } else {
      // TODO
    }
  }

  void print() {
    head->print();
  }
};

Wrapper wrapper;

int main() {
  string line;

  while(getline(cin, line)) {
    stringstream ss;
    ss << line;
    string event;
    while (ss >> event) {
      wrapper.insert(event[0]);
    }
    wrapper.setCursor();
  }

  wrapper.print();

  return 0;
}
