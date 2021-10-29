#include "pch.h" 
#include "../RectangleTDD/Rectangle.h"

//TEST(TestCaseName, TestName) {
//  EXPECT_EQ(1, 1);
//  EXPECT_TRUE(true);
//}

TEST(Rectangle, DifferentRectsDontIntersect) {
	//Arrange
	Rectangle a(0, 0, 1, 1);
	Rectangle b(1, 1, 1, 1);

	// Act
	bool collision = Rectangle::areColliding(a, b);

	// Assert
	EXPECT_FALSE(collision);
}


TEST(Rectangle, SameRectangleIntersects) {
	//Arrange
	Rectangle a(0, 0, 1, 1);
	Rectangle b(0, 0, 1, 1);

	// Act

	bool collision = Rectangle::areColliding(a, b);

	// Assert
	EXPECT_TRUE(collision);
}

TEST(Rectangle, YSeperatedNotIntersect) {
	//Arrange
	Rectangle a(0, 0, 1, 1);
	Rectangle b(0, 2, 1, 1);

	// Act

	bool collision = Rectangle::areColliding(a, b);

	// Assert
	EXPECT_FALSE(collision);
}
