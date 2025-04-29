#include "Engine.h"

UEngine* UEngine::Instance;

UEngine::UEngine()
{

}

UEngine::~UEngine()
{
	Terminate();
}

UEngine* UEngine::GetInstance()
{
	if (!Instance)
	{
		Instance = new UEngine();
	}
	return Instance;
}

void UEngine::Initialize()
{

}

void UEngine::Run()
{

}

void UEngine::Terminate()
{

}