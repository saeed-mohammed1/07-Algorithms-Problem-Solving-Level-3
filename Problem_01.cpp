/*
  =============================================================================
  Problem Statement:
  Problem #1 (Level 3): 3x3 Random Matrix

  Write a C++ program that:
  - Fills a 3x3 two-dimensional array (matrix) with random numbers between
    1 and 100.
  - Prints the matrix neatly formatted using `setw(3)` from `<iomanip>`.
  =============================================================================
*/
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;

const short MatMax = 3;

int RandomNumber(int From, int To)
{
	int Num = rand() % (To - From + 1) + From;
	return Num;
}

void FullMatrix(int Mat[MatMax][MatMax], short Rows, short Cols)
{
	for (int i = 0; i < Rows;i++)
	{
		for (int j = 0; j < Cols;j++)
		{
			Mat[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int Mat[MatMax][MatMax], short Rows, short Cols)
{
	for (int i = 0; i < Rows;i++)
	{
		for (int j = 0; j < Cols;j++)
		{
			cout<< setw(3)<< Mat[i][j]<<"\t";
		}
		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int Mat[MatMax][MatMax];
	FullMatrix(Mat,3,3);
	cout << "Random Matrix 3*3 : \n";
	PrintMatrix(Mat,3,3);
	system("pause>0");
}

	
