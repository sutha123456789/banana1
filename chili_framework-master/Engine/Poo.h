#pragma once

class Poo
{
public :
	void Update();
	void ProcessConsumption(int dudex, int dudey, int dudewidth, int dudeheight);
	int x;
	int y;
	int vx ;
	int vy ;
	static constexpr int width = 24;
	static constexpr int heigth = 24;
	bool isEaten = false;
};
