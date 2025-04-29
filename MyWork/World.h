#include <vector>
#include <string>

#pragma once

class AActor;
class UWorld
{
public:
	UWorld();
	~UWorld();
	void Initialize();

	void Load(const std::string fileName);
	std::vector<AActor*> GetAllActors();

protected:
	std::vector<AActor*> Actors;
};

