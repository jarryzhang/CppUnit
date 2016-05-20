#include "add.h"
#include "addtest.h"
#include <stdio.h>
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"


int main(){
//	ADD addtest;
//	int res = addtest.add(1,2);
//	printf("%d\n",res);

	CppUnit::TextUi::TestRunner runner;
	CppUnit::TestSuite *suite = new CppUnit::TestSuite();

	suite->addTest(new CppUnit::TestCaller<AddTest> ("TestConstructor", &AddTest::TestConstructor));

	runner.addTest(suite);

	runner.run("", true);

	return 0;
}
