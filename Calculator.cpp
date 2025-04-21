#include <iostream>

using namespace std;

class ClsCalculator
{
private:

	int _Num = 0;
	char _OPType;
	int _AddNum;
	int _SubNum;
	int _DivNum;
	int _MultNum;

public:

	void PrintResult()
	{
		switch (_OPType)
		{

		case '+':
			cout << "Result After Adding " << _AddNum << " is : " << _Num << endl;
			break;

		case '-':
			cout << "Result After Subtracting " << _SubNum << " is : " << _Num << endl;
			break;

		case '*':
			cout << "Result After Multiplying " << _MultNum << " is : " << _Num << endl;
			break;


		case '/':
			cout << "Result After Dividing " << _DivNum << " is : " << _Num << endl;
			break;

		default:
			cout << "Result After Clear " << _Num << " is : " << _Num << endl;
			break;
		}
	}

	int Add(int AddNum)
	{
		_OPType = '+';
		_AddNum = AddNum;
		return _Num += AddNum;
	}

	int Subtract(int SubNum)
	{
		_OPType = '-';
		_SubNum = SubNum;
		return _Num -= SubNum;
	}

	int Divide(int DivNum)
	{
		_OPType = '/';
                _DivNum = (DivNum == 0) ? 1 : DivNum;
                return _Num /= _DivNum;

	}

	int Multiply(int MultNum)
	{
		_OPType = '*';
		_MultNum = MultNum;
		return _Num *= MultNum;
	}

	int Clear()
	{
		_OPType = ' ';
		return _Num = 0;
	}
};

int main()
{
	ClsCalculator Calculator1;

	Calculator1.Clear();

	Calculator1.Add(100);
	Calculator1.PrintResult();

	Calculator1.Subtract(20);
	Calculator1.PrintResult();

	Calculator1.Multiply(3);
	Calculator1.PrintResult();

	Calculator1.Divide(2);
	Calculator1.PrintResult();

	Calculator1.Divide(0);
	Calculator1.PrintResult();

	Calculator1.Clear();
	Calculator1.PrintResult();

	system("pause > 0");
}
