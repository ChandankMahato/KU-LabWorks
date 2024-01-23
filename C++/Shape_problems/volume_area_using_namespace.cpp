#include <iostream>
#include <cmath>

namespace ns1
{
    double volume(double l)
    {
        return l * l * l;
    }
    double volume(double r, double h)
    {
        return 3.14 * r * r * h;
    }
    double volume(double l, double w, double h)
    {
        return (l * w * h)/3;
    }

}

namespace ns2
{
    double area(double l)
    {
        return (6 * l * l);
    }

    double area(double r, double h)
    {
        return (2 * 3.14 * r * h + 2 * 3.14 * r * r);
    }

    double area(double l, double w, double h)
    {
        return (l * w + l * sqrt(((w/2) * (w/2)) + h * h) + w * sqrt(((l/2) * (l/2)) + h * h));
    }
}

int main()
{
    int choice;
    std::cout<<"Press 1 for cube\nPress 2 for Cylinder\nPress 3 for Pyramid\n";
    std::cin >> choice;
    switch (choice)
    {
        case 1:
        {
            int length;
            printf("Enter length of Cube\n");
            std::cin >> length;
            double cube_vol = ns1::volume(length);
            std::cout << "Volume of Cube = " << cube_vol << std::endl;
            double cube_area = ns2::area(length);
            std::cout << "Area of Cube = " << cube_area << std::endl;
            break;
        }
        case 2:
        {
            int radius, height;
            printf("Enter radius and height of Cylinder\n");
            std::cin >> radius >> height;
            double cylinder_vol = ns1::volume(radius, height);
            std::cout << "Volume of Cylinder = " << cylinder_vol << std::endl;
            double cylinder_area = ns2::area(radius, height);
            std::cout << "Area of Cylinder = " << cylinder_area << std::endl;
            break;
        }
        case 3:
        {
            int length, width, height;
            printf("Enter length, width and height of Pyramid\n");
            std::cin >> length >> width >> height;
            double pyramid_vol = ns1::volume(length, width, height);
            std::cout << "Volume of Pyramid = " << pyramid_vol << std::endl;
            double pyramid_area = ns2::area(length, width, height);
            std::cout << "Area of Pyramid = " << pyramid_area << std::endl;
            break;
        }
        default:
            printf("Error\n");
            break;
    }
    return 0;
}
