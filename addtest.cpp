#include "addtest.h"
#include "cppunit/TestAssert.h"

void AddTest::SetUp(){}

void AddTest::TearDown(){}

void AddTest::TestConstructor(){
	CPPUNIT_ASSERT(myaddtest->add(1,2)==3);
}
	
