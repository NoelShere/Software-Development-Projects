#pragma once
//Noel Shere
//id129844171
//this workshop is my own work 
#include<iostream>
namespace sict {

	template<typename L, typename V>
	class LVPair {

		L type_label;

		V type_value;

	public:
		LVPair() // constructor
		{
			type_label = nullptr;
			type_value = 0;
		}

		LVPair(const L& label, const V& value)
		{
			type_label = label; // string

			type_value = value;  // int value 
		}

		virtual void display(std::ostream& os) const
		{
			os << type_label << " : " << type_value;
			os << "\n"; // new line
		}

		const L& getLabel() const { return type_label; }

	};

	template<typename L, typename V>
	std::ostream& operator<<(std::ostream& os, const sict::LVPair<L, V>& p) // non friend helper function calls the display function
	{
		p.display(os);

		return os;
	}

	template<typename L, typename V >

	class SummableLVPair : public LVPair<L,V>
	{
		V Value;
		size_t width;


		SummableLVPair() {} // default
		
		SummableLVPair(const L& label, const V& v) : LVPair<L, V>(label, v)
		{
									
			if (width < label.size())
			{
				int excess;
				excess = label.size() - width;
				width = width + excess;
			}
					
		}

		const V& getInitialValue()
		{
			return Value;
		}

		V sum(const L& label, const V& sum) const
		{

			if (type_label == label)
			{
				return type_value + sum;
			}

		}

		void display(std::ostream& os)const
		{

			os << td::setw(minWidth);

			os << type_label << " " << type_value;
		}

		
		template<>
		std::string SummableLVPair<std::string, std::string>::sum(const std::string& label, const std::string& value) const
		{
			return (value + " " + LVPair<std::string, std::string>::getValue());
		}



	};






}