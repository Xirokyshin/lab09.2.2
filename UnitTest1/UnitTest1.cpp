#include "pch.h"
#include "CppUnitTest.h"
#include "../PR9.1.cpp"
#include "../dod.cpp"
#include "../sum.cpp"
#include "../var.cpp"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestSum)
		{
			// ����������� ������� �������
			x_p = 1.0;
			x_k = 2.0;
			dx = 0.1;
			e = 0.0001;

			
			x = 2;  
			sum();    // ������ ������� sum()

			double expectedValue = log(2);

			Assert::AreEqual(expectedValue, s, 0.0001);
			Assert::IsTrue(n > 0);
		}
	};
};