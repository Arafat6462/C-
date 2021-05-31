// Code to find all three angles
// of a triangle given coordinate
// of all three vertices
#include <iostream>
#include <utility> // for pair
#include <cmath> // for math functions
using namespace std;

#define PI 3.1415926535

// returns square of distance b/w two points
int lengthSquare(pair<int,int> X, pair<int,int> Y)
{
	int xDiff = X.first - Y.first;
	int yDiff = X.second - Y.second;
	return xDiff*xDiff + yDiff*yDiff;
}

void printAngle(pair<int,int> A, pair<int,int> B,
				pair<int,int> C)
{
	// Square of lengths be a2, b2, c2
	int a2 = lengthSquare(B,C);
	int b2 = lengthSquare(A,C);
	int c2 = lengthSquare(A,B);

	// length of sides be a, b, c
	float a = sqrt(a2);
	float b = sqrt(b2);
	float c = sqrt(c2);

	// From Cosine law
	float alpha = acos((b2 + c2 - a2)/(2*b*c));
	float betta = acos((a2 + c2 - b2)/(2*a*c));
	float gamma = acos((a2 + b2 - c2)/(2*a*b));


    cout << "alpha : " << alpha << endl;
	cout << "betta : " << betta << endl;
	cout << "gamma : " << gamma <<"\n\n"<< endl;


	// Converting to degree
	alpha = alpha * 180 / PI;
	betta = betta * 180 / PI;
	gamma = gamma * 180 / PI;

	// printing all the angles
	cout << "alpha : " << alpha << endl;
	cout << "betta : " << betta << endl;
	cout << "gamma : " << gamma << endl;
}

// Driver code
int main()
{
	pair<int,int> A = make_pair(4,-1);
	pair<int,int> B = make_pair(-4,2);
	pair<int,int> C = make_pair(2,2);

	printAngle(A,B,C);

	return 0;
}
