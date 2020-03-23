
#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void getInput(ifstream& fin, vector<double>& DVD, vector<double>& TV, vector<double>& MUSIC);
void printVectors(vector<double> media);
void sortVectors(vector<double>& media);
double total(vector<double> media);
double mean(vector<double> media);
double median(vector<double> media);
