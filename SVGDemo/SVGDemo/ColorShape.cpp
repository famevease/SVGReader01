#include "stdafx.h"
#include "ColorShape.h"
#include <algorithm>
using namespace std;

const ColorShape ColorShape::Black(0, 0, 0);
const ColorShape ColorShape::White(255, 255, 255);
const ColorShape ColorShape::Red(255, 0, 0);
const ColorShape ColorShape::Green(0, 255, 0);
const ColorShape ColorShape::Blue(0, 0, 255);
const ColorShape ColorShape::Yellow(255, 255, 0);
const ColorShape ColorShape::Magenta(255, 0, 255);
const ColorShape ColorShape::Cyan(0, 255, 255);
const ColorShape ColorShape::Transparent(0, 0, 0, 0);

ColorShape::ColorShape() : r(0), g(0), b(0), a(255) {}

ColorShape::ColorShape(int red, int green, int blue, int alpha) : r(red), g(green), b(blue), a(alpha) {
	r = clamp(r, 0, 255);
	g = clamp(g, 0, 255);
	b = clamp(b, 0, 255);
	a = clamp(a, 0, 255);
}

ColorShape::ColorShape(int color): 
	r(static_cast<int>((color & 0xff000000) >> 24)),
	g(static_cast<int>((color & 0x00ff0000) >> 16)),
	b((color & 0x0000ff00) >> 8),
	a((color & 0x000000ff) >> 0) {}

ostream& operator<<(ostream& os, const ColorShape& color) {
	os << "Color(" << color.r << ", " << color.g << ", " << color.b << ", " << color.a << ")";
	return os;
}



