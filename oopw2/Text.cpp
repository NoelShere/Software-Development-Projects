//Noel Shere id:129844171
//This is my own work

#include "Text.h"
#include <fstream>
namespace sict {


	Text::Text()
	{

		sizeCount = 0;
		STRING = nullptr;
		

	}
	void Text::Lines()
	{
		string line; // inputer
	
		int count = 1; 
		
		std::ifstream File(filename1);


		while (getline(File, line))	
		{
			++count;

		}
		sizeCount = count; // value given to sizeCount
	}

	

	Text::Text(const char *filename)
	{


		filename1 = "gutenberg_shakespeare.txt";
		
		Lines(); 
					
	}
	Text::Text(const Text& old_str)
	{
	
		sizeCount = old_str.sizeCount;

	}


	Text& Text::operator=(const Text& c)
	{
		STRING = c.STRING;

		sizeCount = c.sizeCount;
		
		return *this;
	}

	Text::~Text()
	{
		delete[] STRING;

		STRING = nullptr;
	}

	size_t Text::size() const
	{
		return sizeCount;

	}

	Text::Text(Text&& MOVE_other)
	{
		STRING = MOVE_other.STRING;
		sizeCount = MOVE_other.sizeCount;

	}

	Text& Text::operator=(Text&& MOVE_other)
	{
		
			

			STRING = MOVE_other.STRING;
			sizeCount = MOVE_other.sizeCount;
			return *this;
		
	}
	


}