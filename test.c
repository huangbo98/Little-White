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
			int num = 10; //算式数量
			int imax = 10;  //最大数
			int nums = 5;  //因子个数
			int symbo = 2;  //用户输入的运算符
			int kuohao = 1; //是否有括号
			int xiaoshu = 1;  //是否有小数
			int shuchu = 2;//输出形式
			char fuhao[4] = { '+','-','*','/' }; //运算符

		};
		TEST_METHOD(TestMethod2)
		{
			int num = 10; //算式数量
			int imax = 10;  //最大数
			int nums = 5;  //因子个数
			int symbo = 2;  //用户输入的运算符
			int kuohao = 1; //是否有括号
			int xiaoshu = 1;  //是否有小数
			int shuchu = 2;//输出形式
			char fuhao[4] = { '+','-','*','/' }; //运算符

		}
	};
}
