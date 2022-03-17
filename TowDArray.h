#pragma once
#include<iostream>
using namespace std;
class TowDArray
{
	int **arr;
	int row;
	int col;
public:
	TowDArray();
	~TowDArray();
	void addData();
	void display();
	void setdata(int r, int c, int num);
	int getdata(int r, int c);
	TowDArray operator+(const TowDArray obj);
	TowDArray operator-(const TowDArray obj);
	TowDArray operator=(const TowDArray obj);
	TowDArray operator*(const TowDArray obj);
	TowDArray operator+(int a);


};

