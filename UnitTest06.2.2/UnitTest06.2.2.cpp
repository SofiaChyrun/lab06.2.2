#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofialab6.2.2/ChyrunSofialab6.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0622
{
	TEST_CLASS(UnitTest0622)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 6;
			int a[n] = { 1,2,3,4,5,6 };
			t = Max(a, n, 1, a[0], 0);
			Assert::AreEqual(t, 6);
		}
	};
}
