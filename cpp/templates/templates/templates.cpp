// templates.cpp : Defines the entry point for the console application.
//
// Tutorial Topics:
// Function Template
// Class Template
// Parameters/Default Parameters
// Overloading
// Friend Functions
// Constraints
// Namespace
// Specialization
// Partial Specialization
// Member Templates
//

#include <iostream>
#include <string>
using namespace std;

#include "Array.h"

//using nstd::Array;

//explicit template instantiation
// Cfront option to disable implicit template instantiation
//
// g++
// -fno-implicit-templates
//
// MS compiler does not support. Did not find any concrete method to do it.
template class nstd::Array < int >;

int main(int argc, char* argv[])
{
	cout << "Template Program" << endl;

	nstd::Array<int> a;
	std::cout << a << std::endl;

	nstd::Array<double> dArray;
	std::cout << dArray<<std::endl;

	// String will require special handling
	// Specialization is the way to go
	//Array<std::string> strArray;
	//std::cout << strArray << std::endl;

	return 0;
}
