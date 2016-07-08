#pragma once

#include <map>
#include <string>

class ProgramInfo
{

public:


	static ProgramInfo* Instance()
	{
		if (inst == 0)
		{
			inst = new ProgramInfo();
			return inst;
		}
		return inst;
	}

	std::string getVersion() { return ProgramVersion; }

private:
	ProgramInfo();
 	~ProgramInfo();
	static ProgramInfo* inst;

	std::string ProgramVersion = "0.0.1";

};

