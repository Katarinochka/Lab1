#include "SolarSystem.h"
TSolarSystem::TSolarSystem()
{
    size = 0;
    weight = 0;
    colorCount = 5;
    color = new int[colorCount];
}

TSolarSystem::~TSolarSystem()
{
    size = 0;
    weight = 0;
    delete[] color;
}
double TSolarSystem::GetWeight()
{
    return weight;
}
double TSolarSystem::GetSize()
{
    return size;
}
int TSolarSystem::GetColorCount()
{
    return colorCount;
}
int* TSolarSystem::GetColor()
{
    return color;
}
void TSolarSystem::SetWeight(double _weight)
{
    if (_weight > 0)
        this->weight = _weight;

}
void TSolarSystem::SetSize(double _size)
{
    if (_size)
        size = _size;
}
void TSolarSystem::SetColorCount(int _colorCount)
{
    if (_colorCount > 0)
    {
        int* temp = new int[_colorCount];
        for (int i = 0; i < (colorCount > _colorCount ? _colorCount : colorCount); i++)
        {
            temp[i] = color[i];
        }
        delete[] color;
        color = temp;
        colorCount = _colorCount;
    }
}
void TSolarSystem::SetColor(int color, int i)
{

}

void TSolarSystem::Motion()
{
    weight += 7;
}
