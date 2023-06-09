struct Point {
    Point (double x, double y) : m_x(x), m_y(y) {}
    Point(double x) : Point(x,x) {}
    ~Point(){
    }

    auto operator<=>(const Point& right) const = default;
    
    double m_x{};
    double m_y{};
};