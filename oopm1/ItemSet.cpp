#include <iostream>
#include "ItemSet.h"
// Student: Noel Shere
// id:129844171
// This is my own work
namespace sict
{
	
	ItemSet::ItemSet()
	{
		ItemName = "";
		Desc = "";
		ItemSerialNum = 0;
		Quantity = 0;
	}

	
	ItemSet::ItemSet(std::string& record)
	{

		Utilities UtilityObject; 		


		size_t field = 0;
		
		
		size_t numTemp;
		size_t numTemp2;
		size_t numTemp3;

		//stoi converts string into interger value 

		ItemName = UtilityObject.extractToken(record, field);  // Insert's Item name
		
		numTemp = record.find(UtilityObject.getDelimiter());
		
		string T1 = record.substr(numTemp + 1, record.length()); 
		
		ItemSerialNum = std::stoi(UtilityObject.extractToken(T1, field)); // Insert's SerialNum

		numTemp2 = T1.find(UtilityObject.getDelimiter());

		string T2 = T1.substr(numTemp2 + 1, T1.length());

		Quantity = std::stoi(UtilityObject.extractToken(T2, field)); // Insert's Quantity

		numTemp3 = record.rfind(UtilityObject.getDelimiter());

		Desc = record.substr(numTemp3 + 1, record.length()); // Insert's description			
			
		
	}

	ItemSet& ItemSet::operator--()
	{
		ItemSerialNum++;

		Quantity--;

		return *this;
	}

	const std::string& ItemSet::getName() const
	{
		return ItemName;
	}

	
	const unsigned int ItemSet::getSerialNumber() const
	{
		return ItemSerialNum;
	}

	
	const unsigned int ItemSet::getQuantity() const
	{
		return Quantity;
	}
		
	void ItemSet::display(std::ostream& os, bool full) const
	{
		Utilities obj; // to get field width


		if (full == true)
		{
			os << left 
				<< setw(obj.getFieldWidth()) 
				<< ItemName << " ["  
				<< ItemSerialNum << "] " << "Quantity " << setw(2) 
				<< Quantity << "  Description" << ": " 
				<< Desc << endl;
		}
		else
		{
			os << left
				<< setw(obj.getFieldWidth())
				<< ItemName << " ["
				<< ItemSerialNum << "] "
				<< endl;
		
		}
		
	}
					
			
}