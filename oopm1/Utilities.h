#ifndef UTILITIES_H
#define UTILITIES_H
// Student: Noel Shere
// id:129844171
// This is my own work
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
namespace sict {

	class Utilities
	{
		static size_t fieldWidth;

		 static char dilimenter; // | char charater	 


	public:				
		
		const std::string extractToken(const std::string& str, size_t& next_pos);

		const char getDelimiter() const;

		size_t getFieldWidth() const;

		static void setDelimiter(const char d);

		void setFieldWidth(size_t);

	};
}
#endif