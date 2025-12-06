#include <iostream>
using namespace std;

int main () {
    int score;
    cout << "Enter student score (0 - 100): ";
    cin >> score;

    if (score >= 90 && score <= 100 ) {
        cout << "A" << endl;
    } 
    else if (score >= 80 && score <= 89) {
        cout << "B" << endl;
    } 
    else if (score >= 70 && score <= 79)  {
        cout << "C" << endl;
    } 
    else if (score >= 60 && score <= 69) {
        cout << "D" << endl;
    } 
    else if (score >= 50 && score <= 59) {
        cout << "E" << endl;
    } 
    else if (score < 49 && score >= 0) {
        cout << "F" << endl;
    } 
    else {
        cout << "Invalid score" << endl;
    };

    return 0;

}