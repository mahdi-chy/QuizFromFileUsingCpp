#include"iostream"
#include"fstream"
#include"string"
using namespace std;
struct qz{
	string q;
	string o1;
	string o2;
	string o3;
	int a;
	};


int main(int argc, char *argv[])
{
		int input=0;
		fstream mFile;
		mFile.open("test.txt",ios::in);
		string line;
		int qno;
		getline(mFile,line);
		qno=stoi(line);
		
		qz quiz[qno];
	//this here is a bit of a problem for now, since arrays only takes const value
		
		
		for(int i=0;i<qno;i++){
				getline(mFile,quiz[i].q);
				getline(mFile,quiz[i].o1);
				getline(mFile,quiz[i].o2);
				getline(mFile,quiz[i].o3);
				getline(mFile,line);
				quiz[i].a=stoi(line);
		}
		for (int i=0;i<qno;i++){
			cout<<quiz[i].q<<endl;
			cout<<quiz[i].o1<<endl;
			cout<<quiz[i].o2<<endl;
			cout<<quiz[i].o3<<endl;
			
			cout<<"Type one of these(1,2,3): ";
			cin>>input;
			switch (quiz[i].a){
				case 1:
					if(quiz[i].a==input){
						cout<<"Correct!"<<endl;
						}else{cout<<"Wrong Answer!"<<endl;}
						break;
				case 2:
					if(quiz[i].a==input){
						cout<<"Correct!"<<endl;
						}else{cout<<"Wrong Answer!"<<endl;}
						break;
				case 3:
					if(quiz[i].a==input){
						cout<<"Correct!"<<endl;
						}else{cout<<"Wrong Answer!"<<endl;}
						break;
				default:
					cout<<"Wrong Answer!"<<endl;
					break;
		}
		cout<<endl;
						}
		mFile.close();
}
