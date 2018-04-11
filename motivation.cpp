#include <iostream>
using std::cout;
using std::cin;
#include <fstream>
using std::ifstream;
#include <string>
using std::string;
#include <vector>
using std::vector;

#include <bits/stdc++.h>
using std::rand;

int main() {
  string line;
  vector<string> quotes;

  ifstream quotes_file("quotes.txt");

  while (std::getline(quotes_file, line)){
    quotes.push_back(line);
  }

  srand(static_cast<unsigned int>(time(0)));
  int randomindex = rand() % quotes.size();
  cout << "\033[1;31m" << quotes[randomindex] << "\033[0m" << "\n";
}
