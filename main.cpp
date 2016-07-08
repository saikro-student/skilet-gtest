#include <iostream>
#include <string>
#include <gtest\gtest.h>
#include <gmock\gmock.h>

#include "ProgramInfo.h"

TEST(InfoTest1, ProgramVersion)
{

	ASSERT_TRUE(ProgramInfo::Instance()->getVersion() == "0.0.1" );
}


int main( int argc, char* argv[] )
{

	::testing::InitGoogleTest(&argc, argv);
	::testing::InitGoogleMock(&argc, argv);
	RUN_ALL_TESTS();


	system("PAUSE");
    return 0;
}