#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream myStream;
  myStream.open("NONEXISTENT.txt", ios::in);
  cout << errno << endl;
  setlocale(LC_ALL, "en_US.UTF-8");
  cout << errno << endl;
}
