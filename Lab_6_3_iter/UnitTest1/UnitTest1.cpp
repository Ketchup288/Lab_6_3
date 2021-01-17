#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6_3_iter/Lab_6_3_iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int const h = 10;
			int b[h] = { 1, 50, 25, 12, 34, 61, 96, 22, 52, 25 };
			int x = Sum(b, h);
			Assert::AreEqual(112, x);

			int r = SSum(b, h);
			Assert::AreEqual(112, r);


		}
	};
}
