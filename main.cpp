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
