//Noel Shere id:129844171
//This is my own work

#include <iostream>
#include <string>

using namespace std;

namespace sict {

	class Text
	{

	public:
		std::string * STRING;
		string filename1;
		int sizeCount = 0;
		Text();
		Text(const char *filename);
		Text(const Text& old_str);  
		Text& operator=(const Text&);  
		Text(Text&& other); 
		Text& operator=(Text&& other);
		~Text(); 
		void Lines();
		size_t size() const; 
	};



}