//Brandon Dickey 
//CIS 1202 NR1
//May 2, 2021

#include<iostream>

using namespace std;

template <typename M>

M half(T val) {

	M res;

	res = val / 2;

	if (*typeid(val).name() == 'i') {
		if (res * 2 != val)

		{
			res++;
		}
	}
	return res;
}

int main() {

	int a = 10;

	float b = 2.36f;

	double c = 5.468416;
}