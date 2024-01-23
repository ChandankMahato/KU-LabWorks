#pragma once

class point
{
    private:
        double x;
        double y;
    public:
        void setCoordinates(double x, double y);
        double distanceFrom(const point &anotherpoint);
};