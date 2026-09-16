

#include <iostream>
using namespace std;
#include <iomanip>


int findMax(int a, int b) {
	return (a > b) ? a : b;
}

float findMax(float a, float b) {
	return (a > b) ? a : b;
}

double findMax(double a, double b) {
	return (a > b) ? a : b;
}



int findMax(int a, int b, int c) {
	if (a > b and a > c)
	{
		return a;
	}
	else if (b > a and b > c)
	{
		return b;
	}
	else
	{
		return c;
	}
}

float findMax(float a, float b, float c) {
	if (a > b and a > c)
	{
		return a;
	}
	else if (b > a and b > c)
	{
		return b;
	}
	else
	{
		return c;
	}
}

double findMax(double a, double b, double c) {
	if (a > b and a > c)
	{
		return a;
	}
	else if (b > a and b > c)
	{
		return b;
	}
	else
	{
		return c;
	}
}








int findMin1(int a, int b) {
	return (a < b) ? a : b;
}

float findMin1(float a, float b) {
	return (a < b) ? a : b;
}

double findMin1(double a, double b) {
	return (a < b) ? a : b;
}



int findMin1(int a, int b, int c) {
	if (a < b and a < c)
	{
		return a;
	}
	else if (b < a and b < c)
	{
		return b;
	}
	else
	{
		return c;
	}
}

float findMin1(float a, float b, float c) {
	if (a < b and a < c)
	{
		return a;
	}
	else if (b < a and b < c)
	{
		return b;
	}
	else
	{
		return c;
	}
}

double findMin1(double a, double b, double c) {
	if (a < b and a < c)
	{
		return a;
	}
	else if (b < a and b < c)
	{
		return b;
	}
	else
	{
		return c;
	}
}





//2
void fillArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
}
void showArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template <typename T_arr>
double findArif(T_arr arr[], int size) {
	T_arr suma = 0;
	for (int i = 0; i < size; i++)
	{
		suma += arr[i];
	}
	return (double)suma / size;
}




template <typename T_arr1>
T_arr1 maxArr(T_arr1 arr[], int size) {
	T_arr1 max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}




void fillMatrix(int arr[][10], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 50;
		}
	}
}
void showMatrix(int arr[][10], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout <<setw(2)<< arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

template <typename T_arr2>
T_arr2 maxMat(T_arr2 arr[][5], int rows, int cols) {
	T_arr2 max = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}




//4




void fillMatrix1(int arr[][10], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 50;
		}
	}
}

void fillMatrix1(double arr[][10], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 50;
		}
	}
}

void fillMatrix1(char arr[][10],int rows,int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] ='A'+ rand() % 26;
		}
	}
}


void showMatrix1(int arr[][10], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j)
			{
				cout << "[" << setw(2) << arr[i][j] << "] ";
			}
			else
			{
				cout << " " << setw(2) << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
}

void showMatrix1(double arr[][10], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i==j)
			{
				cout <<"["<< setw(2) << arr[i][j] << "] ";
			}
			else
			{
				cout << " " << setw(2) << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
}

void showMatrix1(char arr[][10],int rows,int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j)
			{
				cout << "[" << setw(2) << arr[i][j] << "] ";
			}
			else
			{
				cout << " " << setw(2) << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
}


int diagonalMax(int arr[][10], int size) {
	int max = arr[0][0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i][i] > max)
		{
			max = arr[i][i];
		}
	}
	return max;
}

double diagonalMax(double arr[][10], int size) {
	double max = arr[0][0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i][i] > max)
		{
			max = arr[i][i];
		}
	}
	return max;
}
char diagonalMax(char arr[][10], int size) {
	char max = arr[0][0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i][i] > max)
		{
			max = arr[i][i];
		}
	}
	return max;
}

int diagonalMin(int arr[][10], int size) {
	int min = arr[0][0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i][i] < min)
		{
			min = arr[i][i];
		}
	}
	return min;
}
double diagonalMin(double arr[][10], int size) {
	double min = arr[0][0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i][i] < min)
		{
			min = arr[i][i];
		}
	}
	return min;
}
char diagonalMin(char arr[][10], int size) {
	char min = arr[0][0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i][i] < min)
		{
			min = arr[i][i];
		}
	}
	return min;
}



int main()
{
	srand(time(0));
	//1
	  //cout<<findMax(1, 2)<<endl;
	  //cout << findMax(1.1, 2.3) << endl;
	  //cout << findMax(1.11, 2.32) << endl;

	  //cout<<findMax(1, 2,3)<<endl;
	  //cout << findMax(1.1, 2.3,3.4) << endl;
	  //cout << findMax(1.11, 2.32,4.555) << endl;

	  //cout << endl;

	  //cout<<findMin1(1, 2)<<endl;
	  //cout << findMin1(1.1, 2.3) << endl;
	  //cout << findMin1(1.11, 2.32) << endl;

	  //cout<<findMin1(1, 2,3)<<endl;
	  //cout << findMin1(1.1, 2.3,3.4) << endl;
	  //cout << findMin1(1.11, 2.32,0.555) << endl;


	  //2
	  //const int size = 5;
	  //int arr[size] = {};

	  //fillArray(arr, size);
	  //showArray(arr, size);

	  //cout<<findArif(arr, size)<<endl;



	  //3.1

	  //const int size = 10;
	  //int arr[size] = {};

	  //fillArray(arr, size);
	  //showArray(arr, size);

	  //cout<<"max el="<<maxArr(arr, size) << endl;

	  //3.2
	//const int rows = 5;
	//const int cols = 5;

	//int arr[rows][cols] = {};

	//fillMatrix(arr, rows, cols);
	//showMatrix(arr, rows, cols);

	//cout << maxMat(arr, rows, cols) << endl;



	//4

	const int rows = 10;
	const int cols = 10;

	int arr[rows][cols] = {};

	fillMatrix1(arr, rows, cols);
	showMatrix1(arr, rows, cols);

	cout << "max on diagonal=" << diagonalMax(arr,rows) << endl;
	cout << "min on diagonal=" << diagonalMin(arr,rows) << endl;

}

