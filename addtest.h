#ifndef ADDTEST_H
#define ADDTEST_H

#include "add.h"
#include "cppunit/TestFixture.h"

class AddTest : public CppUnit::TestFixture{
protected:
	ADD *myaddtest;
public:
	void SetUp();
	void TearDown();
	void TestConstructor();

};

#endif
