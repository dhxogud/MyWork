#pragma once
class UEngine
{
private:
	static UEngine* Instance;
	UEngine();

public:
	~UEngine();
	void Initialize();
	void Run();
	void Terminate();
	static UEngine* GetInstance();

private:
	// InputDevice;
	// World;
};

#define GEngine		UEngine::GetInstance()