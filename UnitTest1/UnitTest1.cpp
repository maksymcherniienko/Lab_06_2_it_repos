#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_2_it/Lab_06_2it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
			int S = 0;

			int result = Find(a, n, 0, -1, -1);

			Assert::AreEqual(Find(a, n, 0, -1, -1), S, 1e-1);
		}
	};
}
