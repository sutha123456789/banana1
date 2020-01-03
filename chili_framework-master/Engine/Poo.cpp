#include"Poo.h"
#include"Graphics.h"
void Poo::Update()
{
	x += vx;
	y += vy;

	const int right = x + width;
	if (x < 0)
	{
		x = 0;
		vx = -vx;
	}
	else if (right >= Graphics::ScreenWidth)
	{
		x = (Graphics::ScreenWidth - 1) - width;
	}


	const int bottom = y + heigth;
	if (y < 0)
	{
		y = 0;
		vy = -vy;
	}
	else if (bottom >= Graphics::ScreenHeight)
	{
		y = (Graphics::ScreenHeight - 1) - heigth;
	}
}

void Poo::ProcessConsumption(int dudex, int dudey, int dudewidth, int dudeheight)
{
	const int duderight = dudex + dudewidth;
	const int dudebottom = dudey + dudeheight;
	const int pooright = x + width;
	const int poobottom = y + heigth;

	if (duderight >= x &&
		dudex <= pooright &&
		dudebottom >= y &&
		dudey <= poobottom)
	{
		isEaten = true;
	}
}
