#include "Engine.h"

int main()
{
	// �𸮾� ������ ���躻
	// UEgine.class, �𸮾� ���� ���α׷� �� ��ü (Singleton Class)
	// ��� ���� (������Ƽ)
	// World�� InputDevice, private UEgine* Instance;
	// ��� �Լ� (�޼���)
	// Initialize(), Run(), Terminate(), public static UEgine* GetInstance();
	GEngine->Initialize();
	
	GEngine->Run();

	// UWorld.class
	// ��� ���� (������Ƽ)
	// Actors
	// ��� �Լ� (�޼���)
	// Input(), Tick(), Render(), void Load(const string fileName);

	// Input.class
	// ��� ���� (������Ƽ)
	// Key;
	// ��� �Լ� (�ż���)
	// Tick()

	// Actor.class
	// ��� �ʵ�
	// Location(X, Y), Shape (== Texture), 
	// ��� �Լ� (�ż���)
	// virtaul void Tick(); void AddActorWorldOffset(FVector2D Location)

	return 0;
}