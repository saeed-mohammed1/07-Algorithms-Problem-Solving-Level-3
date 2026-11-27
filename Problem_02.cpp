/*
  =============================================================================
  Problem Statement:
  Problem #2 (Level 3): Sum Each Row in a 3x3 Matrix

  Write a C++ program that:
  - Fills a 3x3 matrix with random numbers between 1 and 100.
  - Prints the 3x3 matrix neatly formatted using `setw(3)`.
  - Calculates and prints the sum of each row independently using a dedicated
    `SumRow` function.
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

int SumRow(int Mat[MatMax][MatMax], short RowNumber, short Cols)
{
	int Sum = 0;

		for (int j = 0; j < Cols;j++)
		{
			Sum +=  Mat[RowNumber][j];
		}
		return Sum;
}

void PrintEachRowSum(int Mat[MatMax][MatMax], short Rows, short Cols)
{
	cout << "---------\n\n";
	for (int i = 0; i < Rows;i++)
	{
		
		cout << "Row " << i + 1 << " Sum = " << SumRow(Mat,i, Cols) << endl;
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

	PrintEachRowSum(Mat, 3, 3);
	system("pause>0");
}

	
