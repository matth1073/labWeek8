#include"functions.h"


int main() {
	ifstream fin("input1.txt");
	ofstream fout("output.txt"); 
	vector<double> DVD;
	vector<double> TV;
	vector<double> MUSIC;

	getInput(fin, DVD , TV, MUSIC);
	printVectors(DVD, TV, MUSIC); 
	sortVectors(DVD); 
	sortVectors(TV); 
	sortVectors(MUSIC); 
	printVectors(DVD, TV, MUSIC); 
	cout << total(DVD) << " " << total(TV) << " " << total(MUSIC) << endl; 
	try {
		cout << mean(DVD);
	}
	catch (runtime_error &excpt) {
		cout << excpt.what() << endl; 
	}
	try {
		cout << mean(TV);
	}
	catch (runtime_error &excpt) {
		cout << excpt.what() << endl;
	}
	try {
		cout << mean(MUSIC);
	}
	catch (runtime_error &excpt) {
		cout << excpt.what() << endl;
	}
	fin.close(); 
	fout.close(); 
	system("pause"); 
}