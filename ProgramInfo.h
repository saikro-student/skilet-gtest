#pragma once

#include <map>
#include <string>

class ProgramInfo
{

public:


	static ProgramInfo* Instance()
	{
		// (alex.t): Why is inst copared with 0?
		// Is it good to compare a pointer with 0?
		if (inst == 0)
		{
			// (alex.t): Why is () used here?
			inst = new ProgramInfo();
			return inst;
		}
		return inst;
	}

	// (alex.t): How to return "0.0.1" in a more effective way?
	std::string getVersion() { return ProgramVersion; }

private:
	ProgramInfo();
 	~ProgramInfo();
	static ProgramInfo* inst;

	// (alex.t): Why have you decided to use
	// std::string to store "0.0.1"?
	std::string ProgramVersion = "0.0.1";

};

