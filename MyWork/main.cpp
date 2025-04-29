#include "Engine.h"

int main()
{
	// 언리얼 엔진의 설계본
	// UEgine.class, 언리얼 엔진 프로그램 그 자체 (Singleton Class)
	// 멤버 변수 (프로퍼티)
	// World와 InputDevice, private UEgine* Instance;
	// 멤버 함수 (메서드)
	// Initialize(), Run(), Terminate(), public static UEgine* GetInstance();
	GEngine->Initialize();
	
	GEngine->Run();

	// UWorld.class
	// 멤버 변수 (프로퍼티)
	// Actors
	// 멤버 함수 (메서드)
	// Input(), Tick(), Render(), void Load(const string fileName);

	// Input.class
	// 멤버 변수 (프로퍼티)
	// Key;
	// 멤버 함수 (매서드)
	// Tick()

	// Actor.class
	// 멤버 필드
	// Location(X, Y), Shape (== Texture), 
	// 멤버 함수 (매서드)
	// virtaul void Tick(); void AddActorWorldOffset(FVector2D Location)

	return 0;
}