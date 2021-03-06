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

// Class RawInput.RawInputSettings
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class URawInputSettings : public UDeveloperSettings
{
public:
	TArray<struct FRawInputDeviceConfiguration>        DeviceConfigurations;                                      // 0x0038(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                               bRegisterDefaultDevice;                                    // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KURW[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RawInput.RawInputSettings");
		return ptr;
	}


};

// Class RawInput.RawInputFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URawInputFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RawInput.RawInputFunctionLibrary");
		return ptr;
	}


	TArray<struct FRegisteredDeviceInfo> STATIC_GetRegisteredDevices();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
