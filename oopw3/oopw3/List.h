#pragma once
//Noel Shere
//id129844171
//this workshop is my own work 
//https://scs.senecac.on.ca/~oop345/pages/content/seque.html
#include <vector>
using namespace std;
namespace sict {


	template<typename T, int N >

	class List
	{
		std::vector<T> type;


		size_t num_of_elements = 0;

	public:
		List()
		{

			num_of_elements = 6; // number of elements 
		}

		size_t size() const {


			return num_of_elements;

		}

		const T& operator[] (size_t i) const
		{

			auto &x = type[i]; // a reference due to vectors take in addresses 

			return x;

		}

		void operator+=(const T& t)
		{

			type.push_back(t); // pushes the vector from the back and inserts new value

		}

	};

	template<typename T, typename L, typename V, int N>
	class LVList : public List<T, N> 
	{
		

	public:
		V accumulate(const L& label) const
		{
			SummableLVPair<L, V> NewValue;

			V SumOFElementsinLVList = NewValue.getInitialValue();


			for (size_t i = 0; i < ((List<T, N>&)*this).size(); ++i)
			{
				if (label == ((List<T, N>&)*this)[i].getLabel())
					SumOFElementsinLVList = ((List<T, N>&)*this)[i].sum(label, SumOFElementsinLVList);
			}

			return SumOFElementsinLVList;


		}
	


	};
		




}