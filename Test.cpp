#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  if (argc != 2) {
    cerr << "Error: Expected \"Testcpp <argument0>\"\n";
    exit(1);
  }
  int term = std::stoi(argv[1]);
  cout << "Hello Hell!\n";
  int full = term*2 - 1;
  for (int i = 1; i < term; ++i) {
    int space = full - i*2 + 1;
    for (int j = 0; j < space/2; ++j) cout << " ";
    for (int j = 0; j < i*2 - 1; ++j) cout << "*";
    for (int j = 0; j < space/2; ++j) cout << " ";
    cout << endl;
  }
  
  return 0;
}
