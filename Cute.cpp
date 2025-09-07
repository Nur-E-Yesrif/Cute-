
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// Function for slow typing effect
void slowPrint(const string& text, int delay = 50) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
    cout << endl;
}

// Function to print a cute heart
void printHeart() {
    cout << R"(
      ***     ***
    *******  *******
   *******************
   *******************
   *******************
    *****************
     ***************
      *************
        *********
          *****
           ***
            *
    )" << endl;
}

int main() {
    system("color E"); // Light purple background (Windows only)

    slowPrint("🌸 Hey there, Beautiful! 🌸\n", 70);
    this_thread::sleep_for(chrono::milliseconds(500));

    slowPrint("Just a little reminder from your favorite C++ program...", 60);
    this_thread::sleep_for(chrono::milliseconds(1000));

    cout << endl;
    printHeart();
    this_thread::sleep_for(chrono::milliseconds(700));

    slowPrint("\nYou are smart, strong, and more capable than you know 💪✨", 60);
    slowPrint("Keep learning, keep shining, and never stop being YOU 💖", 60);

    cout << "\n\n~ With love, your code 💻💕" << endl;

    return 0;
}
