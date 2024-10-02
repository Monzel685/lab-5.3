#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.3/lab5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest153
{
	TEST_CLASS(UnitTest153)
	{
	public:
		
1		TEST_METHOD(TestMethod1)
		{
		
			double result = f(2.0);
			double expected = (sin(2 * 2.0) + 1) / (sin(2.0) + pow(cos(2.0), 2));  
			Assert::AreEqual(expected, result, 0.001);  
		}
	};
}
