#pragma once

// Name: AimGods, Version: Beta 2


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GA_BladeStorm.GA_BladeStorm_C
// 0x0008 (FullSize[0x04B8] - InheritedSize[0x04B0])
class UGA_BladeStorm_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_BladeStorm.GA_BladeStorm_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_BladeStorm(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
