#pragma once
class TSolarSystem
{
public:
	TSolarSystem();
	~TSolarSystem();
	double	GetWeight();
	double GetSize();
	int GetColorCount();
	int* GetColor();
	void SetWeight(double _weight);
	void SetSize(double _size);
	void SetColorCount(int _colorCount);
	void SetColor(int color, int i);
	virtual void Print() = 0;
	void Motion();

protected:
	double size;
	double weight;
	int* color;
	int colorCount;
};
