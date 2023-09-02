#include"iostream"
#include"fstream"
#include<string>
#include<vector>
using namespace std;
struct qz
{
	string q;
	string o1;
	string o2;
	string o3;
	int a=0;
};

int storeQuiz() {
	return 0;
}

int main(int argc, char* argv[]){
	int input = 0, rAns = 0, wAns = 0;
	fstream mFile;//creats a mFile variable to access "test.txt" file
	mFile.open("test.txt", ios::in);
	string line;
	int qno;
	getline(mFile, line);//gets the first line from "test.txt file"
	qno = stoi(line);//converts the first line of "test.txt" file to int and stores in qno variable
     
      //qz quiz[qno];this is what i want to use.
	qz quiz[100];//making quiz variable of qz structure that I made above
//also, I coudn't find a way to declare the quiz structure array so it's gonna be pre-declared for the time being untill I get more knowledge about this
	
	for (int i = 0; i < qno; i++){
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

	for (int i = 0; i < qno; i++){
		cout << quiz[i].q << endl;
		cout << quiz[i].o1 << endl;
		cout << quiz[i].o2 << endl;
		cout << quiz[i].o3 << endl;

		cout << "Type one of these(1,2,3): ";
		cin >> input;
		switch (quiz[i].a){
		case 1:
			if(quiz[i].a == input){
				cout << "Correct!" << endl;
				rAns++;
			}else{
				cout << "Wrong Answer!" << endl;
				wAns++;
			}
			break;
		case 2:
			if (quiz[i].a == input){
				cout << "Correct!" << endl;
				rAns++;
			}else{
				cout << "Wrong Answer!" << endl;
				wAns++;
			}

			break;
		case 3:
			if (quiz[i].a == input){
				cout << "Correct!" << endl;
				rAns++;
			}else{
				cout << "Wrong Answer!" << endl;
				wAns++;
			}
			break;
		default:
			cout << "Wrong Answer!" << endl;
			wAns++;
			break;
		}

		cout << endl;
	}

	mFile.close();
	cout << "Your Scoreboard:\nRight Ans:" << rAns << "  Wrong Ans:" << wAns << endl;
}
