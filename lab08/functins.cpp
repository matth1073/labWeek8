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

void printVectors(vector<double> media)
{
	for (auto i : media) {
		cout << i << " ";
	}
	cout << endl;
}

void sortVectors(vector<double>& media)
{
	for (int i = 0; i < media.size(); ++i) {
		for (int j = 0; j < media.size(); ++j) {
			if (media[j] > media[i]) {
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
	int n = media.size();
	int i = n / 2;
	if (n == 0) {
		throw runtime_error("nan");
		}
	if (n % 2 == 0) {
		return (media[i] + media.at(i - 1)) / 2.0;
	}
	else {
		return media[i];
	}
}

