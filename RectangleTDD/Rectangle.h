#pragma once 
class Rectangle
{
	int x, y, width, height;
public:
	Rectangle(int x, int y, int width, int height) :
		x(x), y(y), width(width), height(height) {}

	static bool areColliding(Rectangle r1, Rectangle r2) {
		if (r1.y + r1.height < r2.y)
			return false;
		if ((r1.x + r1.width) > r2.x)
			return true;
		return false;
	}
};


