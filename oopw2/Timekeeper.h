#pragma once
//Noel Shere id:129844171
//This is my own work

#include <iostream>
#include <chrono>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;
namespace sict {


	class Timekeeper
	{
		
	public:

		int currentRecords;
		std::chrono::steady_clock::time_point startTime;  
		std::chrono::steady_clock::time_point endTime;
	 struct {
		
		 char const *units = "seconds";
		 string m_message;
		  std::chrono::steady_clock::duration duration_time;
	 }record[10];
		Timekeeper();
		void start(); //a modifier that starts the stopwatch for an event
		void stop(); //a modifier that stops the stopwatch for an event
		void recordEvent( string str);
		void report(std::ostream &os);

	private:

	};
}
