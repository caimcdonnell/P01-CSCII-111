#include <iostream>
#include <string>
using namespace std;

string CheckColor();
bool CheckWhite();
bool CheckBlack();

struct RGB
{
	int RED;
	int GREEN;
	int BLUE;
};
RGB clr;

int main()
{
	cout << "Please input your color code in RGB!\n";
	cin >> clr.RED >> clr.GREEN >> clr.BLUE;
	cout << "RED: " << clr.RED << " GREEN: " << clr.GREEN << " BLUE: " << clr.BLUE;
	return 0;
}

string CheckColor(int red, int green, int blue)
{
	if ((red - green) > 50 && (red - green) > 50 && !CheckBlack() && !CheckWhite() )
	{
		return "shutup";
	}

}

bool CheckWhite()
{
	if (clr.RED >= 224 && clr.GREEN >= 224 && clr.BLUE >= 224)
	{
		return true
	}
	else
	{
		return false
	}
}

bool CheckBlack()
{
	if (clr.RED <= 32 && clr.GREEN <= 32 && clr.BLUE <= 32)
	{
		return true
	}
	else
	{
		return false
	}
}
