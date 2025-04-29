#pragma once
#include "FVector2D.h"

class AActor
{
public:
	AActor();
	virtual ~AActor();
	void AddActorWorldOffset(FVector2D Location);

protected:
	FVector2D Location;

};

