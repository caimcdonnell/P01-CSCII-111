#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string CheckColor(int red, int green, int blue);
bool CheckWhite();
bool CheckBlack();
int ClampInt(int base, int min, int max);

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
	cin >>  clr.RED >> clr.GREEN >> clr.BLUE; 
	clr.RED = ClampInt(clr.RED, 0, 255);
	clr.GREEN = ClampInt(clr.GREEN, 0, 255);
	clr.BLUE = ClampInt(clr.BLUE, 0, 255);
	cout << "RED: " << clr.RED << " GREEN: " << clr.GREEN << " BLUE: " << clr.BLUE << endl;
	cout << "Your Color is " << CheckColor(clr.RED, clr.GREEN, clr.BLUE) << "!\n";
	return 0;
}

string CheckColor(int red, int green, int blue)
{
	if ((red - green) > 50 && (red - blue) > 50 && !CheckBlack() && !CheckWhite())
	{
		return "Red";
	}
	else if ((green - red) > 50 && (green - blue) > 50 && !CheckBlack() && !CheckWhite())
	{
		return "Green";
	}
	else if ((blue - red) > 50 && (blue - green) > 50 && !CheckBlack() && !CheckWhite())
	{
		return "Blue";
	}
	else if ((red - green) < 50 && (red - blue) > 50 && !CheckBlack() && !CheckWhite())
	{
		return "Yellow";
	}
	else if ((green - red) > 50 && (green - blue) < 50 && !CheckBlack() && !CheckWhite())
	{
		return "Cyan";
	}
	else if ((blue - red) < 50 && (blue - green) > 50 && !CheckBlack() && !CheckWhite())
	{
		return "Pink";
	}
	else if (CheckBlack())
	{
		return "Black";
	}
	else if (CheckWhite())
	{
		return "White";
	}

}

bool CheckWhite()
{
	if (clr.RED >= 224 && clr.GREEN >= 224 && clr.BLUE >= 224)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool CheckBlack()
{
	if (clr.RED <= 32 && clr.GREEN <= 32 && clr.BLUE <= 32)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int ClampInt(int base, int min, int max)
{
	if (base > max)
	{
		return max;
	}
	else if (base < min)
	{
		return min;
	}
	else
	{
		return base;
	}
}
