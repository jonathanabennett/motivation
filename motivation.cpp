#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<string> quotes;
  quotes.push_back("Discipline Is Freedom!");
  quotes.push_back("Your life is a movie, it starts now. What would the hero do? Go do that!");
  quotes.push_back("Discipline is just choosing between what you want NOW and what you want MOST!");
  quotes.push_back("Motivation will die... Let discipline take it's place.");
  quotes.push_back("Without hard work and discipline, it is difficult to be a top professional.");
  quotes.push_back("Once the work is done, no one can take it from you. GET UP AND OWN IT!");
  quotes.push_back("You want to improve your mental toughness? Try this: BE TOUGHER!");
  quotes.push_back("I know that somewhere out there, there is another man also preparing. That man "
      "is the enemy.");
  quotes.push_back("There's nothing worse than being at the end of a SEAL platoon and it's just "
      "BOOTS BOOTS BOOTS. Make sure all your men know what the mission is and how you're progressing");
  quotes.push_back("Take care of your top people. Work with the ones at the bottom, but don't "
      "focus on them.");
  quotes.push_back("Once a man condones remisses, his own belief in discipline begins to wither. "
      "The officer who tolerates slackness in his men will soon neglect his own appearance.");
  quotes.push_back("It's not what you preach, it's what you tolerate.");
  quotes.push_back("Morale and discipline are two sides of the same coin.");

  srand(static_cast<unsigned int>(time(0)));
  int randomindex = rand() % quotes.size();
  cout << "\033[1;31m" << quotes[randomindex] << "\033[0m" << endl;
}
