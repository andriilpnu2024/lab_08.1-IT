#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-8.1 IT/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str1[10] = {"ABSOLUTEL"};
			char str[7] = {"BANANA"};
			int c = Count(str, str1);
			Assert::AreEqual(c, 2);

		}
	};
}
