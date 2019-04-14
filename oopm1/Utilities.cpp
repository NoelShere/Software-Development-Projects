#include <iostream>
#include "Utilities.h"
// Student: Noel Shere
// id:129844171
// This is my own work
namespace sict
{
	char Utilities::dilimenter = '\0';

	size_t Utilities::fieldWidth = 0;

	
	const std::string Utilities::extractToken(const std::string& str, size_t& next_pos)
	{

		string RecordPoint;		

		RecordPoint = str.substr(next_pos, str.find(getDelimiter())); // extracts token using the given string

		setFieldWidth(RecordPoint.length()); // count's the character length
		
		return RecordPoint; 		
	}

	
	const char Utilities::getDelimiter() const
	{
		return dilimenter;
	}

	
	size_t Utilities::getFieldWidth() const
	{
		return fieldWidth;
	}

	
	void Utilities::setDelimiter(const char d)
	{
		dilimenter = d;
	}
		
	void Utilities::setFieldWidth(size_t t)
	{
		
		if (t > fieldWidth)
		{
			fieldWidth = t;
		}

	}
}
