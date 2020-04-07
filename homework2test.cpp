#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 5;
			int a[5] = {1,-9,5,6,-3};
			int sum = 0,temp = 0;
			for (int i = 0; i < n; i++)
			{
				temp = 0;
				for (int j = i; j < n; j++)
				{
					temp += a[j];
					if (temp > sum)
						sum = temp;
				}
			}
			int real = 11;
			Assert::AreEqual(sum, real);
		}
		TEST_METHOD(TestMethod2)
		{
			int n = 5;
			int a[5] = { -1,-9,-5,-4,-7 };
			int sum = 0, temp = 0;
			for (int i = 0; i < n; i++)
			{
				temp = 0;
				for (int j = i; j < n; j++)
				{
					temp += a[j];
					if (temp > sum)
						sum = temp;
				}
			}
			int real = 0;
			Assert::AreEqual(sum, real);
		}
		TEST_METHOD(TestMethod3)
		{
			int n = 5;
			int a[5] = { 5,7,2,4,9 };
			int sum = 0, temp = 0;
			for (int i = 0; i < n; i++)
			{
				temp = 0;
				for (int j = i; j < n; j++)
				{
					temp += a[j];
					if (temp > sum)
						sum = temp;
				}
			}
			int real = 27;
			Assert::AreEqual(sum, real);
		}
	};
}
