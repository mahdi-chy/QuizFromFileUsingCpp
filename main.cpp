#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct qz {
    string q;
    string o1;
    string o2;
    string o3;
    int a = 0;
};

int main(int argc, char* argv[]) {
    int input = 0, rAns = 0, wAns = 0;
    fstream mFile;

    // Opening the input file and checking if it's opened successfully
    mFile.open("test.txt", ios::in);
    if (!mFile.is_open()) {
        cout << "Error opening the file." << endl;
        return 1;
    }

    string line;
    int quizNo;
    getline(mFile, line);
    quizNo = stoi(line);

    // we are using vector to store quiz questions
    vector<qz> quiz(quizNo);

    for (int i = 0; i < quizNo; i++) {
        getline(mFile, line);
        quiz[i].q = line;
        getline(mFile, line);
        quiz[i].o1 = line;
        getline(mFile, line);
        quiz[i].o2 = line;
        getline(mFile, line);
        quiz[i].o3 = line;
        getline(mFile, line);
        quiz[i].a = stoi(line);
    }

    //showing the quiz to user and taking answers while recording the scoreboard	
    for (int i = 0; i < quizNo; i++) {
        cout << quiz[i].q << endl;
        cout << quiz[i].o1 << endl;
        cout << quiz[i].o2 << endl;
        cout << quiz[i].o3 << endl;

        cout << "Type one of these (1, 2, 3): ";
        cin >> input;

        if (quiz[i].a == input) {
            cout << "Correct!" << endl;
            rAns++;
        } else {
            cout << "Wrong Answer!" << endl;
            wAns++;
        }

        cout << endl;
    }

    mFile.close();
    cout << "Your Scoreboard:\nRight Ans: " << rAns << "  Wrong Ans: " << wAns << endl;

    return 0;
}
