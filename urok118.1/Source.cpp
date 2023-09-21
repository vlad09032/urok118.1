#include <string>
#include <iostream>

class Thing
{
private:
	std::string m_color = "blue";
	double m_radius = 20.0;

public:
	// ����������� �� ��������� ��� ����������
	Thing()
	{}

	// ����������� � ���������� color (��� radius ������������� �������� �� ���������)
	Thing(const std::string& color) : m_color (color)
	{}

	// ����������� � ���������� radius (��� color ������������� �������� �� ���������)
	Thing(double radius) :m_radius(radius)
	{}

	// ����������� � ����������� color � radius
	Thing(const std::string& color, double radius) : m_color(color), m_radius(radius)
	{}

	void print()
	{
		std::cout << "color: " << m_color << " and radius: " << m_radius << '\n';
	}
};

int main()
{
	Thing defl;
	defl.print();

	Thing red("red");
	red.print();

	Thing thirty(30.0);
	thirty.print();

	Thing redThirty("red", 30.0);
	redThirty.print();

	return 0;
}