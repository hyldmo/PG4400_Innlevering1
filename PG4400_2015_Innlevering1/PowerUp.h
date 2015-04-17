#ifndef POWERUP_H
#define POWERUP_H

#include "GameObject.h"

class PowerUp : public GameObject
{
public:
	PowerUp();
	virtual ~PowerUp() = 0;
	virtual void Update(const double& dt);

	enum type { Buff, Shrink, Slow };
protected:
	const float fallSpeed = 1;
	float duration;


};

#endif