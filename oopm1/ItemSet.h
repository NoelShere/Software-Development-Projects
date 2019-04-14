#ifndef ITEMSET_H
#define ITEMSET_H
// Student: Noel Shere
// id:129844171
// This is my own work
#include <string>
#include <iostream>
#include <iomanip>
#include "Utilities.h"
using namespace std;

namespace sict {

	class ItemSet
	{
		
		string ItemName; 

		string Desc;

		int ItemSerialNum;

		int Quantity;

	 	public:

		ItemSet();	

		ItemSet(std::string& record);

		const std::string& getName() const;

		const unsigned int getSerialNumber() const;

		const unsigned int getQuantity() const;
	
		ItemSet& operator--();

		void display(std::ostream& os, bool full) const;
	};


}
#endif