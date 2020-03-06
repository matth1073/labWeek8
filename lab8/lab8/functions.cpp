#include"functions.h"

void getInput(ifstream& fin, vector<double>& DVD, vector<double>& TV, vector<double>& MUSIC)
{
	string type;
	double amount; 

	if (fin.fail()) {
		cout << "Error opening file" << endl; 
	}

	while (!fin.eof()) {
		fin >> type >> amount; 
		if (type == "DVD") {
			DVD.push_back(amount); 
		}
		else if (type == "TV") {
			TV.push_back(amount);
		}
		else if (type == "MUSIC") {
			MUSIC.push_back(amount); 
		}
		else {
			cin.clear();
		}
	}
	return; 
}

void printVectors(vector<double> DVD, vector<double> TV, vector<double> MUSIC)
{
	vector<int> test; 
	cout << "DVD:" << endl; 
	for (auto i: DVD) {
		cout << i << " ";
	}
	cout << endl; 

	cout << "TV:" << endl;
	for (auto i : TV) {
		cout << i << " ";
	}
	cout << endl;

	cout << "MUSIC:" << endl;
	for (auto i : MUSIC) {
		cout << i << " ";
	}

	cout << endl;
}

void sortVectors(vector<double>& media)
{
	for (int i = 0; i < media.size(); ++i) {
		for (int j = 0; j < media.size(); ++j) {
			if (media[j] > media[i]){
				swap(media[j], media[i]); 
			}
		}
	}
}

double total(vector<double> media) {
	double totalAmount = 0; 
	for (auto i : media) {
		totalAmount += i; 
	}
	return totalAmount; 
}

double mean(vector<double> media) {
	double average = 0; 
	double totalAmount = total(media); 
	if (media.size() == 0) {
		throw runtime_error("nan"); 
	}
	return average = totalAmount / media.size(); 
}

double median(vector<double> media) {
	double mean = 0; 
	int n = media.size(); 
	int i =  
	if (n == 0) {
		throw runtime_error("nan");
	}
	if (n % 2 == 0) {
		i = n % 2; 
	}

	else {
		i = n % 2;
		return median[i];
	}
}
	
