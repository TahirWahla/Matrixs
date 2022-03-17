#include "TowDArray.h"


TowDArray::TowDArray()
{
	cout << "Enter number of rows : ";
	cin >> row;
	cout << "ENter number of coloums : ";
	cin >> col;
	arr = new int*[row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[col];
	}
}


TowDArray::~TowDArray()
{

	delete[] arr;

}

void TowDArray::addData()
{

	if (row>0 && col>0)
	{
		cout << "Enter data " << endl;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cin >> arr[i][j];
			}
		}
	}
	else
	{
		cout << "Array is not created " << endl;
	}
}

void TowDArray::display()
{
	if (row >0 && col> 0)
	{
		cout << "Display" << endl;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout<< arr[i][j]<<" ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Array is not created " << endl;
	}
}

void TowDArray::setdata(int r, int c, int num)
{
	if (r>0 && c>0)
	{
		arr[r][c] = num;
	}
	else
	{
		cout << "Enter valid number " << endl;
	}
}
int TowDArray::getdata(int r, int c)
{
	if (r<0 && r<row && c>0&& c <col)
	{
		return arr[r][c];
	}
	else
	{
		return 0;
	}


}
TowDArray TowDArray::operator=(const TowDArray obj)
{
	row = obj.row;
	col = obj.col;
	if (row >0 && col >0)
	{
		arr = new int *[row];
		for (int i = 0; i < row; i++)
		{
			arr[i] = new int[col];
		}

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; i++)
			{
				arr[i][j] = obj.arr[i][j];
			}
		}
	}

	return *this;
}
TowDArray TowDArray::operator+(const TowDArray obj)
{
	TowDArray temp = obj;
	if (row == obj.row && col == obj.col)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				temp.arr[i][j] = arr[i][j] + obj.arr[i][j];
			}
		}
	}




	return temp;
}

TowDArray TowDArray::operator-(const TowDArray obj)
{
	TowDArray temp = obj;
	if (row == obj.row && col == obj.col)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				temp.arr[i][j] = arr[i][j] - obj.arr[i][j];
			}
		}
	}




	return temp;
}

TowDArray TowDArray::operator*(const TowDArray obj)
{
	TowDArray temp = obj;
	if (col == obj.row)
	{
		for (int i = 0; i < row; ++i)
		{

			for (int j = 0; j < obj.col; ++j)
			{
				temp.arr[i][j] = 0;
				for (int k = 0; k < obj.row; ++k)
				{
					temp.arr[i][j] += (arr[i][k] * obj.arr[k][j]);
				}

			}
		}
	}

	return temp;
}
TowDArray TowDArray::operator + (int a)
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] += a;
		}
	}

	return
	*this;
}
