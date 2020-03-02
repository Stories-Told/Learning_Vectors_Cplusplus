#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// Different ways to declare vectors
	vector <int> testScores{10, 5, 6, 3, 8}; // Storing different values in the vector
	vector <double> hi_temps(360, 80.1); // Creates 360 values of 80.0

	// Accessing different values in vectors
	cout << "Accessing different values in vectors" << endl;
	cout << "testScores[2]: " << testScores[2] << endl;
	cout << "hi_temps[100]: " << hi_temps[100] << endl;
	cout << "testScores.at(2): " << testScores.at(2) << endl; // Uses the .at() function to grab number in vector location
	cout << "hi_temp.at(5): " << hi_temps.at(5) << endl; // Uses the .at() function to grab number in vector location

	cout << endl;
	cout << "Using for loop to interiate through vector using .at()" << endl;

	// For loop to iteriate through vector using .at()
	for (int i = 0; i < 5; i++)
	{
		cout << "For loop iteration, hi_temps.at(i): " << hi_temps.at(i) << endl;
	}

	cout << endl;
	cout << "Assigning values to vector locations testScores.at(2) = 7" << endl;

	// Assigning values to the vector locations
	testScores.at(2) = 7;
	cout << ".at(2): " << testScores.at(2) << endl;

	cout << endl;
	cout << "Adding values to the end of a empty vector using .push_back()" << endl;

	// Adding values to the end of a empty vector, dynamically allocating space in the vector
	vector <double> test_pushback;
	for (int i = 0; i < 5; i++)
	{
		test_pushback.push_back(i);
		cout << "Vector .push_back():  " << test_pushback.at(i) << endl;
	}

	cout << endl;
	cout << "Using .size() to show the size of a vector" << endl;

	// Using .size() to show the size of a vector
	cout << "testScores.size(): " << testScores.size() << endl;
	cout << "hi_temps.size(): " << hi_temps.size() << endl;

	cout << endl;
	cout << "Using cin for user input into vector, cin >> testScores.at()" << endl;

	// Using cin for user input into vector, demostrating .at() & .push_back()
	cout << "Enter number to enter into testScores[2]: ";
	cin >> testScores.at(2);
	cout << "testScores.at(2) now = " << testScores.at(2) << endl;
	// Demo for user input using .push_back()
	int numberAdded;
	cout << "Enter number for push_back(): ";
	cin >> numberAdded;
	testScores.push_back(numberAdded);
	int lastNumber = testScores.size();
	cout << "Last number is: " << testScores.at(lastNumber - 1) << endl;

	cout << endl;
	cout << "Declaring a 2d vector" << endl;

	// Example of declaring a 2d vector and storing numbers in a 2d vector with a for loop iterater
	vector <vector<int>> rows;
	for (int i = 0; i < 5; i++)
	{
		vector<int> columns;
		for (int j = 0; j < 10; j++)
		{
			columns.push_back(j); // push back all the number
		}
		rows.push_back(columns); // push back all the numbers that were just iterated through for that row and iterate to the next row
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << rows[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	cout << "-----VIDEO CHALLENGE----" << endl;

	//------------------------------------------------------------------------\\
	// Video Challenge
	vector <int> vector1;
	vector <int> vector2;

	cout << "Vector1 Numbers: " << endl;
	vector1.push_back(10);
	vector1.push_back(20);
	cout << vector1.at(0) << " " << vector1.at(1) << endl;
	cout << "Size of vector1: " << vector1.size() << "\n\n";

	cout << "Vector2 Numbers: " << endl;
	vector2.push_back(100);
	vector2.push_back(200);
	cout << vector2.at(0) << " " << vector2.at(1) << endl;
	cout << "Size of vector2: " << vector2.size() << "\n\n";

	vector<vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << "2d vectors Numbers: " << endl;
	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << endl;
	cout << vector_2d.at(1).at(1) << "\n\n";

	vector1.at(0) = 1000;

	cout << "2d vectors Numbers updated: " << endl;
	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << endl;
	cout << vector_2d.at(1).at(1) << "\n\n";

	cout << "Vector1 Numbers Updated: " << endl;
	cout << vector1.at(0) << " " << vector1.at(1) << endl;

	//------------------------------------------------------------------------\\


	return 0;
}