#ifndef vector2D_hpp_
#define vector2D_hpp
/*
* Class biểu diễn vector với 2 trục x, y.
* Dùng để biểu diễn các đại lượng có 2 chiều: size, point, ...
* Tempalte parameter T là 1 loại tọa độ. Hô trợ các phép toán số học (+, -, /, *), comparison (==, !=), vd int hoặc float
*/
template<typename T>
class Vector2D {
public:
	Vector2D(); //Default contructor
	Vector2D(T X, T Y); //Thay tọa độ cụ thể
	template<typename U>
	explicit Vector2D(const Vector2D<U>& vector); //Chuyển từ kiểu từ vector2D<int> sang vector2D<float>
	T x;
	T y;
};

template<typename T>
Vector2D<T> operator-(const Vector2D<T>& right); //chuyển ngược vector
template<typename T>
Vector2D<T> operator*(const Vector2D<T>& left, T right)

#endif