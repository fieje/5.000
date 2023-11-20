#include "pch.h"
#include "CppUnitTest.h"
#include "../5.00/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int expected = 7;
			int actual = sum(3, 4);

			Assert::AreEqual(expected, actual);
		}
	};
}
