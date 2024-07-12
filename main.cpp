#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string Lose[4] = { "HA, how does it feel losing", "I enjoy this 'winning' lifestyle", "It's a Robot, how can't you win", "I am just a 5cm chip and you have a developed brain for over 10 years" };
string Win[4] = { "I will make my return", "That's it! One more game", "You win, for now", "Just wait for my revenge" };

string CPUChoiceText;
int cpuChoice;
int humanChoice;
string humanChoiceText;

/*
1 = Rock
2 = Paper
3 = Scissors
*/

void Main() {
    system("cls");
    cout << "==========================\n";
    cout << "[R]ock [P]aper [S]cissors!\n";
    cout << "==========================\n";

    cin >> humanChoiceText;

    if (humanChoiceText == "R" || humanChoiceText == "r") {
        humanChoice = 1;
        humanChoiceText = "Rock";
    }
    else if (humanChoiceText == "P" || humanChoiceText == "p") {
        humanChoice = 2;
        humanChoiceText = "Paper";
    }
    else if (humanChoiceText == "S" || humanChoiceText == "s") {
        humanChoice = 3;
        humanChoiceText = "Scissors";
    }
    else {
        cout << "Not good ):" << endl;
        Main();
        return;
    }

    srand(time(NULL));
    cpuChoice = (rand() % 3) + 1;

    if (cpuChoice == 1) {
        CPUChoiceText = "Rock";
    }
    else if (cpuChoice == 2) {
        CPUChoiceText = "Paper";
    }
    else if (cpuChoice == 3) {
        CPUChoiceText = "Scissors";
    }

    cout << "You Choose: " << humanChoiceText << endl;
    cout << "CPU Choose: " << CPUChoiceText << endl;

    if (cpuChoice == humanChoice) {
        cout << "DRAW" << endl;
    }
    else if ((humanChoice == 1 && cpuChoice == 3) ||
        (humanChoice == 2 && cpuChoice == 1) ||
        (humanChoice == 3 && cpuChoice == 2)) {
        cout << "Human Won!" << endl;
        cout << Win[rand() % 4] << endl;
    }
    else {
        cout << "CPU Won!" << endl;
        cout << Lose[rand() % 4] << endl;
    }
}

int main() {
    Main();
}
