#pragma once
#include <iostream>
namespace nstd{
	//export does not working after C++11 
	template <typename type, int size = 10>
	class Array
	{
		int array_size = size;
		type array_container[size];
	public:
		Array(){
			std::cout << "Array's constructor called!"  << endl;
			memset(array_container, 0, sizeof(type) * size );
		}
		~Array(){
		}

		unsigned int Size();

		// Bound Friend Function 1:1 Mapping
		friend ostream& operator<< <type>(ostream&, const Array<type>&);
		// Unbound Friend Function 1:n Mapping
		//template <typename t>
		//friend ostream& operator<< /*no <type> here*/(ostream&, const Array<t>&);
	};

	template <typename type, int size>
	inline unsigned int Array<type,size>::Size(){
		return array_size;
	}

	template <typename t>
	ostream& operator<<(ostream& o, const Array<t>& output){
		o << "[";
		for (int i = 0; i < output.array_size; ++i){
			o << output.array_container[i] << " ";
		}
		o << "]" << std::endl;
		return o;
	}

}