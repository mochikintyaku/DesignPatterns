#include "Comparable.hpp"

class Point : public Comparable<Point> {
public:
	Point(int x_val, int y_val) : x(x_val), y(y_val) {}
	bool equalsImpl(const Point& other) const {
		return x == other.x && y == other.y;
	}
	bool lessThanImpl(const Point& other) const {
		return (x < other.x) || (x == other.x && y < other.y);
	}
private:
	int x, y;
};