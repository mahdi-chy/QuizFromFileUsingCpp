#include"iostream"
#include"fstream"
#include"string"

using namespace std;
int main(int argc, char *argv[])
{
		fstream mFile;
		mFile.open("test.txt",ios::in);
		string line;
		int qno;
		getline(mFile,line);
		qno=stoi(line);
		
		while(getline(mFile,line)){
			cout<<line<<endl;
		}
		mFile.close();
}
