#include"functions.h"


int main() {
	ifstream fin("input1.txt");
	ofstream fout("output.txt");
	vector<vector<double>> format; 
	vector<double> DVD;
	vector<double> TV;
	vector<double> MUSIC;
	vector<string> type = { "DVD", "TV", "MUSIC" }; 

	getInput(fin, DVD, TV, MUSIC);
	format.push_back(DVD); format.push_back(TV); format.push_back(MUSIC); 
	for (int i = 0; i < format.size(); ++i) {
		vector<double> vec = format.at(i); 
		fout << type.at(i) << "\t"; 
		sortVectors(vec);
		fout << total(vec) << "\t";
		try {
			fout << median(vec) << "\t";
		}
		catch (runtime_error &excpt) {
			fout << excpt.what() << "\t";
		}
		try {
			fout << mean(vec) << endl;
		}
		catch (runtime_error &excpt) {
			fout << excpt.what() << endl;
		}

	}
	fin.close();
	fout.close();
}