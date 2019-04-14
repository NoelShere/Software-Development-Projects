//Noel Shere id:129844171
//This is my own work

#include "Timekeeper.h"
namespace sict {

	
	Timekeeper::Timekeeper()
	{
		 currentRecords = 0;
		 startTime = std::chrono::steady_clock::now();
		 endTime = std::chrono::steady_clock::now();
		
	}
	

	void Timekeeper::start()
	{
		startTime = std::chrono::steady_clock::now();
	}


	void Timekeeper:: stop()
	{
		endTime = std::chrono::steady_clock::now();
	}

	
	void Timekeeper::recordEvent(string str)
	{
		
		record[currentRecords].duration_time = (endTime - startTime);
		
		record[currentRecords].m_message = str;
	
		currentRecords++;
	}

	void Timekeeper::report(std::ostream &os)
	{
			

		os << "\nExecution Times:";

		unsigned int dDurationp[10];
		for (int i = 0; i < 7; i++)
		{
			dDurationp[i] = (record[i].duration_time).count();

			os << "\n" << record[i].m_message  << " " << dDurationp[i] << " "<< record[i].units;
		}
		cout << std::endl;
		
	}

	

}