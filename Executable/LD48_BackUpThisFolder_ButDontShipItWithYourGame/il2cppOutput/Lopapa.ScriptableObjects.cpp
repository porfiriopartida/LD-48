#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// LopapaGames.Common.Core.IUnityService
struct IUnityService_tF1E20F5DBD4FDE2CAC09F9B94647DDCF49A56AD8;
// LopapaGames.Common.Core.Singleton`1<LopapaGames.ScriptableObjects.CooldownManager>
struct Singleton_1_tB8BF5B7D45E08450AFA198F4E863377A9F21E820;
// LopapaGames.Common.Core.Singleton`1<System.Object>
struct Singleton_1_t4E0F1FD5054DA9D20D1453CA5CDA585D1F324166;
// LopapaGames.Common.Core.UnityService
struct UnityService_t70F9308563795A71413244683338C22480922B0E;
// LopapaGames.Common.ObjectChance
struct ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703;
// LopapaGames.Common.ObjectChance[]
struct ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A;
// LopapaGames.Common.Primitives.ResourceType
struct ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87;
// LopapaGames.ScriptableObjects.CooldownManager
struct CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C;
// LopapaGames.ScriptableObjects.DropTable
struct DropTable_t015F74B8DD2E2545EA89F4D8AE7FAC81F1D5731D;
// LopapaGames.ScriptableObjects.MinMaxValues
struct MinMaxValues_t8B6272A6D82D7358320D25E82A5F807C8C3F9A65;
// LopapaGames.ScriptableObjects.PathController
struct PathController_tE9A5E01CBD54543770455549C11260D30B06912E;
// LopapaGames.ScriptableObjects.ResourceFloat
struct ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F;
// LopapaGames.ScriptableObjects.ResourceFloat[]
struct ResourceFloatU5BU5D_t5A81BBD5800FED747554F93DDE8BEBC9DF633DCB;
// LopapaGames.ScriptableObjects.SOEconomyManager
struct SOEconomyManager_tC91CA8617FA8F7FAB2B8A55F1DEB3CFD98559221;
// LopapaGames.ScriptableObjects.Spawner
struct Spawner_t0892435E0F6539E08C72391A879086340B2106CB;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Single>[]
struct EntryU5BU5D_tE7BBAD2EA77B06506F5FA410620297571630DA45;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>
struct KeyCollection_t26F141C421F97F5DBA54EE5BE06F57B5F11108F9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_t23F4EAE5F6012F2DDE69636037C71781C48B2097;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_tC07F9EC1B6CC9BDB462EE745AF7A7CD1B9F14517;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<LopapaGames.ScriptableObjects.ResourceFloat>
struct List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityService_tF1E20F5DBD4FDE2CAC09F9B94647DDCF49A56AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m4366962DD780D9C08601C7806EDF4642E0C70B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mF409E840690B371FDD865C261E2424B5CD89EBA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m50AC4B87C02C072C5CE7C1AC6D1C61A75B1197DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m03005970B000C64632240D621F245725CAE8858A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m2F298782C2BC0CB0E7369F0D520E10635C5801CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m41540BB66C96E09B1524BF940A10FCDBE3FC81FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m03597CFB8AC184BCB69BC1A32956AEF301BB3A6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5F73376203D8D702CFE6046B70E8134B1225FB5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m58D7C85FC3459259B4B9B182A98C838005A62F3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7042E43C05118EB8A312C09B5496B6DA2070B00A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m276B29D17EAC8E5F6C5D472E49FB27028EE37C33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m328186F8A9B1D4EA6E6A69ACF3FC02DF4BAB4333_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m12ABE366DAE5DA1A167EE7F75868147D825B232F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB76F999957F7E5B37ACD96828DE2ED4FA1F90706_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m43BECD7D15946CC17D53060751A868C0FF1C9267_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CooldownManager_AddTimer_m183D92D65CA1F0901B3F3B7A1C2939863A50D247_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CooldownManager_Awake_m043E0CB3FBB9E5BFFDEB237D7A00B1E5F91343D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CooldownManager_GetTimer_mBB5D1BC32EB5391B905D398CB820299D49C07D27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CooldownManager_Remove_m70EE89171BBD38768F62DDA974FE6C0D3F14703E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CooldownManager_Update_m001B456559F40EFF2FF5F3174E679140BA33193B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CooldownManager__ctor_mEA365BE6EA27A8EB7E45FFB393F8D910B10A9FB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DropTable_DropMultiple_mD6B7A514ED03D7B0842934D420798D0EDDC90990_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DropTable_DropSingle_mF1660666D05806314A56CCB90E48B1A1C10938CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PathController_GetPath_m14F768B84E6C2F5E9E10F07B9267508ED5A80852_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SOEconomyManager_Awake_m12F99B2F987CC01E0C5470875287E0D9C4143E8A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SOEconomyManager_GetByKey_m8FE861BC2B224CB86695E58E6456E56AC3F2AFF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Spawner_Spawn_m31558F584512FFD6E9AD318FB555E8DCEF2051EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Spawner_Spawn_mD5D8B5DC63EB89E8441F7B405FBFC847F4597215_MetadataUsageId;

struct ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2B5C33043777379980E1008CD11511F8F5C6A2BF 
{
public:

public:
};


// System.Object


// LopapaGames.Common.Core.UnityService
struct UnityService_t70F9308563795A71413244683338C22480922B0E  : public RuntimeObject
{
public:

public:
};

struct UnityService_t70F9308563795A71413244683338C22480922B0E_StaticFields
{
public:
	// LopapaGames.Common.Core.UnityService LopapaGames.Common.Core.UnityService::_instance
	UnityService_t70F9308563795A71413244683338C22480922B0E * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(UnityService_t70F9308563795A71413244683338C22480922B0E_StaticFields, ____instance_0)); }
	inline UnityService_t70F9308563795A71413244683338C22480922B0E * get__instance_0() const { return ____instance_0; }
	inline UnityService_t70F9308563795A71413244683338C22480922B0E ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(UnityService_t70F9308563795A71413244683338C22480922B0E * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};


// LopapaGames.Common.ObjectChance
struct ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703  : public RuntimeObject
{
public:
	// UnityEngine.GameObject LopapaGames.Common.ObjectChance::gameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject_0;
	// System.Single LopapaGames.Common.ObjectChance::chance
	float ___chance_1;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703, ___gameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_chance_1() { return static_cast<int32_t>(offsetof(ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703, ___chance_1)); }
	inline float get_chance_1() const { return ___chance_1; }
	inline float* get_address_of_chance_1() { return &___chance_1; }
	inline void set_chance_1(float value)
	{
		___chance_1 = value;
	}
};


// LopapaGames.ScriptableObjects.ResourceFloat
struct ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F  : public RuntimeObject
{
public:
	// LopapaGames.Common.Primitives.ResourceType LopapaGames.ScriptableObjects.ResourceFloat::Key
	ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * ___Key_0;
	// System.Single LopapaGames.ScriptableObjects.ResourceFloat::Value
	float ___Value_1;

public:
	inline static int32_t get_offset_of_Key_0() { return static_cast<int32_t>(offsetof(ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F, ___Key_0)); }
	inline ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * get_Key_0() const { return ___Key_0; }
	inline ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 ** get_address_of_Key_0() { return &___Key_0; }
	inline void set_Key_0(ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * value)
	{
		___Key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Key_0), (void*)value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F, ___Value_1)); }
	inline float get_Value_1() const { return ___Value_1; }
	inline float* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(float value)
	{
		___Value_1 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE7BBAD2EA77B06506F5FA410620297571630DA45* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t26F141C421F97F5DBA54EE5BE06F57B5F11108F9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t23F4EAE5F6012F2DDE69636037C71781C48B2097 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397, ___entries_1)); }
	inline EntryU5BU5D_tE7BBAD2EA77B06506F5FA410620297571630DA45* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE7BBAD2EA77B06506F5FA410620297571630DA45** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE7BBAD2EA77B06506F5FA410620297571630DA45* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397, ___keys_7)); }
	inline KeyCollection_t26F141C421F97F5DBA54EE5BE06F57B5F11108F9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t26F141C421F97F5DBA54EE5BE06F57B5F11108F9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t26F141C421F97F5DBA54EE5BE06F57B5F11108F9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397, ___values_8)); }
	inline ValueCollection_t23F4EAE5F6012F2DDE69636037C71781C48B2097 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t23F4EAE5F6012F2DDE69636037C71781C48B2097 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t23F4EAE5F6012F2DDE69636037C71781C48B2097 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<LopapaGames.ScriptableObjects.ResourceFloat>
struct List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ResourceFloatU5BU5D_t5A81BBD5800FED747554F93DDE8BEBC9DF633DCB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20, ____items_1)); }
	inline ResourceFloatU5BU5D_t5A81BBD5800FED747554F93DDE8BEBC9DF633DCB* get__items_1() const { return ____items_1; }
	inline ResourceFloatU5BU5D_t5A81BBD5800FED747554F93DDE8BEBC9DF633DCB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ResourceFloatU5BU5D_t5A81BBD5800FED747554F93DDE8BEBC9DF633DCB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ResourceFloatU5BU5D_t5A81BBD5800FED747554F93DDE8BEBC9DF633DCB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20_StaticFields, ____emptyArray_5)); }
	inline ResourceFloatU5BU5D_t5A81BBD5800FED747554F93DDE8BEBC9DF633DCB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ResourceFloatU5BU5D_t5A81BBD5800FED747554F93DDE8BEBC9DF633DCB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ResourceFloatU5BU5D_t5A81BBD5800FED747554F93DDE8BEBC9DF633DCB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____items_1)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<LopapaGames.ScriptableObjects.ResourceFloat>
struct Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E, ___list_0)); }
	inline List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 * get_list_0() const { return ___list_0; }
	inline List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E, ___current_3)); }
	inline ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * get_current_3() const { return ___current_3; }
	inline ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// LopapaGames.Common.Primitives.ResourceType
struct ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// LopapaGames.ScriptableObjects.DropTable
struct DropTable_t015F74B8DD2E2545EA89F4D8AE7FAC81F1D5731D  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// LopapaGames.Common.ObjectChance[] LopapaGames.ScriptableObjects.DropTable::Table
	ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A* ___Table_4;
	// System.Boolean LopapaGames.ScriptableObjects.DropTable::IsSingleDrop
	bool ___IsSingleDrop_5;
	// System.Single LopapaGames.ScriptableObjects.DropTable::SingleDropChance
	float ___SingleDropChance_6;
	// LopapaGames.Common.Core.IUnityService LopapaGames.ScriptableObjects.DropTable::MyUnityService
	RuntimeObject* ___MyUnityService_7;

public:
	inline static int32_t get_offset_of_Table_4() { return static_cast<int32_t>(offsetof(DropTable_t015F74B8DD2E2545EA89F4D8AE7FAC81F1D5731D, ___Table_4)); }
	inline ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A* get_Table_4() const { return ___Table_4; }
	inline ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A** get_address_of_Table_4() { return &___Table_4; }
	inline void set_Table_4(ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A* value)
	{
		___Table_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Table_4), (void*)value);
	}

	inline static int32_t get_offset_of_IsSingleDrop_5() { return static_cast<int32_t>(offsetof(DropTable_t015F74B8DD2E2545EA89F4D8AE7FAC81F1D5731D, ___IsSingleDrop_5)); }
	inline bool get_IsSingleDrop_5() const { return ___IsSingleDrop_5; }
	inline bool* get_address_of_IsSingleDrop_5() { return &___IsSingleDrop_5; }
	inline void set_IsSingleDrop_5(bool value)
	{
		___IsSingleDrop_5 = value;
	}

	inline static int32_t get_offset_of_SingleDropChance_6() { return static_cast<int32_t>(offsetof(DropTable_t015F74B8DD2E2545EA89F4D8AE7FAC81F1D5731D, ___SingleDropChance_6)); }
	inline float get_SingleDropChance_6() const { return ___SingleDropChance_6; }
	inline float* get_address_of_SingleDropChance_6() { return &___SingleDropChance_6; }
	inline void set_SingleDropChance_6(float value)
	{
		___SingleDropChance_6 = value;
	}

	inline static int32_t get_offset_of_MyUnityService_7() { return static_cast<int32_t>(offsetof(DropTable_t015F74B8DD2E2545EA89F4D8AE7FAC81F1D5731D, ___MyUnityService_7)); }
	inline RuntimeObject* get_MyUnityService_7() const { return ___MyUnityService_7; }
	inline RuntimeObject** get_address_of_MyUnityService_7() { return &___MyUnityService_7; }
	inline void set_MyUnityService_7(RuntimeObject* value)
	{
		___MyUnityService_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MyUnityService_7), (void*)value);
	}
};


// LopapaGames.ScriptableObjects.MinMaxValues
struct MinMaxValues_t8B6272A6D82D7358320D25E82A5F807C8C3F9A65  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Single LopapaGames.ScriptableObjects.MinMaxValues::minValue
	float ___minValue_4;
	// System.Single LopapaGames.ScriptableObjects.MinMaxValues::maxValue
	float ___maxValue_5;
	// System.Single LopapaGames.ScriptableObjects.MinMaxValues::Value
	float ___Value_6;

public:
	inline static int32_t get_offset_of_minValue_4() { return static_cast<int32_t>(offsetof(MinMaxValues_t8B6272A6D82D7358320D25E82A5F807C8C3F9A65, ___minValue_4)); }
	inline float get_minValue_4() const { return ___minValue_4; }
	inline float* get_address_of_minValue_4() { return &___minValue_4; }
	inline void set_minValue_4(float value)
	{
		___minValue_4 = value;
	}

	inline static int32_t get_offset_of_maxValue_5() { return static_cast<int32_t>(offsetof(MinMaxValues_t8B6272A6D82D7358320D25E82A5F807C8C3F9A65, ___maxValue_5)); }
	inline float get_maxValue_5() const { return ___maxValue_5; }
	inline float* get_address_of_maxValue_5() { return &___maxValue_5; }
	inline void set_maxValue_5(float value)
	{
		___maxValue_5 = value;
	}

	inline static int32_t get_offset_of_Value_6() { return static_cast<int32_t>(offsetof(MinMaxValues_t8B6272A6D82D7358320D25E82A5F807C8C3F9A65, ___Value_6)); }
	inline float get_Value_6() const { return ___Value_6; }
	inline float* get_address_of_Value_6() { return &___Value_6; }
	inline void set_Value_6(float value)
	{
		___Value_6 = value;
	}
};


// LopapaGames.ScriptableObjects.PathController
struct PathController_tE9A5E01CBD54543770455549C11260D30B06912E  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// UnityEngine.GameObject LopapaGames.ScriptableObjects.PathController::_pathPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ____pathPrefab_4;

public:
	inline static int32_t get_offset_of__pathPrefab_4() { return static_cast<int32_t>(offsetof(PathController_tE9A5E01CBD54543770455549C11260D30B06912E, ____pathPrefab_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get__pathPrefab_4() const { return ____pathPrefab_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of__pathPrefab_4() { return &____pathPrefab_4; }
	inline void set__pathPrefab_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		____pathPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pathPrefab_4), (void*)value);
	}
};


// LopapaGames.ScriptableObjects.SOEconomyManager
struct SOEconomyManager_tC91CA8617FA8F7FAB2B8A55F1DEB3CFD98559221  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Collections.Generic.List`1<LopapaGames.ScriptableObjects.ResourceFloat> LopapaGames.ScriptableObjects.SOEconomyManager::_list
	List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 * ____list_4;

public:
	inline static int32_t get_offset_of__list_4() { return static_cast<int32_t>(offsetof(SOEconomyManager_tC91CA8617FA8F7FAB2B8A55F1DEB3CFD98559221, ____list_4)); }
	inline List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 * get__list_4() const { return ____list_4; }
	inline List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 ** get_address_of__list_4() { return &____list_4; }
	inline void set__list_4(List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 * value)
	{
		____list_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_4), (void*)value);
	}
};


// LopapaGames.ScriptableObjects.Spawner
struct Spawner_t0892435E0F6539E08C72391A879086340B2106CB  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// LopapaGames.Common.Core.IUnityService LopapaGames.ScriptableObjects.Spawner::MyUnityService
	RuntimeObject* ___MyUnityService_4;
	// UnityEngine.GameObject LopapaGames.ScriptableObjects.Spawner::prefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___prefab_5;

public:
	inline static int32_t get_offset_of_MyUnityService_4() { return static_cast<int32_t>(offsetof(Spawner_t0892435E0F6539E08C72391A879086340B2106CB, ___MyUnityService_4)); }
	inline RuntimeObject* get_MyUnityService_4() const { return ___MyUnityService_4; }
	inline RuntimeObject** get_address_of_MyUnityService_4() { return &___MyUnityService_4; }
	inline void set_MyUnityService_4(RuntimeObject* value)
	{
		___MyUnityService_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MyUnityService_4), (void*)value);
	}

	inline static int32_t get_offset_of_prefab_5() { return static_cast<int32_t>(offsetof(Spawner_t0892435E0F6539E08C72391A879086340B2106CB, ___prefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_prefab_5() const { return ___prefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_prefab_5() { return &___prefab_5; }
	inline void set_prefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___prefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_5), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// LopapaGames.Common.Core.Singleton`1<LopapaGames.ScriptableObjects.CooldownManager>
struct Singleton_1_tB8BF5B7D45E08450AFA198F4E863377A9F21E820  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct Singleton_1_tB8BF5B7D45E08450AFA198F4E863377A9F21E820_StaticFields
{
public:
	// T LopapaGames.Common.Core.Singleton`1::instance
	CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(Singleton_1_tB8BF5B7D45E08450AFA198F4E863377A9F21E820_StaticFields, ___instance_4)); }
	inline CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * get_instance_4() const { return ___instance_4; }
	inline CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// LopapaGames.ScriptableObjects.CooldownManager
struct CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C  : public Singleton_1_tB8BF5B7D45E08450AFA198F4E863377A9F21E820
{
public:
	// LopapaGames.Common.Core.IUnityService LopapaGames.ScriptableObjects.CooldownManager::MyUnityService
	RuntimeObject* ___MyUnityService_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> LopapaGames.ScriptableObjects.CooldownManager::_cooldownValue
	Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 * ____cooldownValue_6;
	// System.Collections.Generic.List`1<System.String> LopapaGames.ScriptableObjects.CooldownManager::keys
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___keys_7;

public:
	inline static int32_t get_offset_of_MyUnityService_5() { return static_cast<int32_t>(offsetof(CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C, ___MyUnityService_5)); }
	inline RuntimeObject* get_MyUnityService_5() const { return ___MyUnityService_5; }
	inline RuntimeObject** get_address_of_MyUnityService_5() { return &___MyUnityService_5; }
	inline void set_MyUnityService_5(RuntimeObject* value)
	{
		___MyUnityService_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MyUnityService_5), (void*)value);
	}

	inline static int32_t get_offset_of__cooldownValue_6() { return static_cast<int32_t>(offsetof(CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C, ____cooldownValue_6)); }
	inline Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 * get__cooldownValue_6() const { return ____cooldownValue_6; }
	inline Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 ** get_address_of__cooldownValue_6() { return &____cooldownValue_6; }
	inline void set__cooldownValue_6(Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 * value)
	{
		____cooldownValue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cooldownValue_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C, ___keys_7)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_keys_7() const { return ___keys_7; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// LopapaGames.Common.ObjectChance[]
struct ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 * m_Items[1];

public:
	inline ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEB3F4CE718A56B61B1F1B27A0BCEDE5D8A19E9A1_gshared (Dictionary_2_tC07F9EC1B6CC9BDB462EE745AF7A7CD1B9F14517 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Dictionary_2_get_Item_m0E1065AF99696F302B6A5E563D88BF093F70CA31_gshared (Dictionary_2_tC07F9EC1B6CC9BDB462EE745AF7A7CD1B9F14517 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m8FD760BACB7C7B1124B89952D64FD1B35A0F9418_gshared (Dictionary_2_tC07F9EC1B6CC9BDB462EE745AF7A7CD1B9F14517 * __this, RuntimeObject * ___key0, float ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mFF735E080145DEE4A3957B2358563A803852F864_gshared (Dictionary_2_tC07F9EC1B6CC9BDB462EE745AF7A7CD1B9F14517 * __this, RuntimeObject * ___key0, float* ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mB9F68344E50F3F91E93A13949970A5D9F37E9F17_gshared (Dictionary_2_tC07F9EC1B6CC9BDB462EE745AF7A7CD1B9F14517 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void LopapaGames.Common.Core.Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_mE11340E6DB851349233A9CD204067FB980453799_gshared (Singleton_1_t4E0F1FD5054DA9D20D1453CA5CDA585D1F324166 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);

// LopapaGames.Common.Core.UnityService LopapaGames.Common.Core.UnityService::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityService_t70F9308563795A71413244683338C22480922B0E * UnityService_GetInstance_m8B3429C0A1E4D331DC2964389574700C762ED190 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor()
inline void Dictionary_2__ctor_m50AC4B87C02C072C5CE7C1AC6D1C61A75B1197DE (Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 *, const RuntimeMethod*))Dictionary_2__ctor_mEB3F4CE718A56B61B1F1B27A0BCEDE5D8A19E9A1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_inline (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Item(!0)
inline float Dictionary_2_get_Item_m03005970B000C64632240D621F245725CAE8858A (Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  float (*) (Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m0E1065AF99696F302B6A5E563D88BF093F70CA31_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m2F298782C2BC0CB0E7369F0D520E10635C5801CA (Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 * __this, String_t* ___key0, float ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 *, String_t*, float, const RuntimeMethod*))Dictionary_2_set_Item_m8FD760BACB7C7B1124B89952D64FD1B35A0F9418_gshared)(__this, ___key0, ___value1, method);
}
// System.Void LopapaGames.ScriptableObjects.CooldownManager::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CooldownManager_Remove_m70EE89171BBD38768F62DDA974FE6C0D3F14703E (CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * __this, String_t* ___cooldownKey0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mF409E840690B371FDD865C261E2424B5CD89EBA9 (Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 * __this, String_t* ___key0, float* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 *, String_t*, float*, const RuntimeMethod*))Dictionary_2_TryGetValue_mFF735E080145DEE4A3957B2358563A803852F864_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::Remove(!0)
inline bool Dictionary_2_Remove_m4366962DD780D9C08601C7806EDF4642E0C70B8B (Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_mB9F68344E50F3F91E93A13949970A5D9F37E9F17_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(!0)
inline bool List_1_Remove_m328186F8A9B1D4EA6E6A69ACF3FC02DF4BAB4333 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Void LopapaGames.Common.Core.Singleton`1<LopapaGames.ScriptableObjects.CooldownManager>::.ctor()
inline void Singleton_1__ctor_m43BECD7D15946CC17D53060751A868C0FF1C9267 (Singleton_1_tB8BF5B7D45E08450AFA198F4E863377A9F21E820 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tB8BF5B7D45E08450AFA198F4E863377A9F21E820 *, const RuntimeMethod*))Singleton_1__ctor_mE11340E6DB851349233A9CD204067FB980453799_gshared)(__this, method);
}
// System.Void LopapaGames.ScriptableObjects.DropTable::DropSingle(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropTable_DropSingle_mF1660666D05806314A56CCB90E48B1A1C10938CB (DropTable_t015F74B8DD2E2545EA89F4D8AE7FAC81F1D5731D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// System.Void LopapaGames.ScriptableObjects.DropTable::DropMultiple(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropTable_DropMultiple_mD6B7A514ED03D7B0842934D420798D0EDDC90990 (DropTable_t015F74B8DD2E2545EA89F4D8AE7FAC81F1D5731D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_m12ABE366DAE5DA1A167EE7F75868147D825B232F (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(!0)
inline void List_1_Add_m58D7C85FC3459259B4B9B182A98C838005A62F3C (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<LopapaGames.ScriptableObjects.ResourceFloat>::.ctor()
inline void List_1__ctor_mB76F999957F7E5B37ACD96828DE2ED4FA1F90706 (List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// LopapaGames.ScriptableObjects.ResourceFloat LopapaGames.ScriptableObjects.SOEconomyManager::GetByKey(LopapaGames.Common.Primitives.ResourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * SOEconomyManager_GetByKey_m8FE861BC2B224CB86695E58E6456E56AC3F2AFF4 (SOEconomyManager_tC91CA8617FA8F7FAB2B8A55F1DEB3CFD98559221 * __this, ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * ___resource0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<LopapaGames.ScriptableObjects.ResourceFloat>::GetEnumerator()
inline Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E  List_1_GetEnumerator_m276B29D17EAC8E5F6C5D472E49FB27028EE37C33 (List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E  (*) (List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<LopapaGames.ScriptableObjects.ResourceFloat>::get_Current()
inline ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * Enumerator_get_Current_m5F73376203D8D702CFE6046B70E8134B1225FB5D_inline (Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E * __this, const RuntimeMethod* method)
{
	return ((  ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * (*) (Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<LopapaGames.ScriptableObjects.ResourceFloat>::MoveNext()
inline bool Enumerator_MoveNext_m03597CFB8AC184BCB69BC1A32956AEF301BB3A6E (Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<LopapaGames.ScriptableObjects.ResourceFloat>::Dispose()
inline void Enumerator_Dispose_m41540BB66C96E09B1524BF940A10FCDBE3FC81FD (Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void LopapaGames.ScriptableObjects.ResourceFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceFloat__ctor_m6E179F796C102798072FB257FAED274D59CA765B (ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<LopapaGames.ScriptableObjects.ResourceFloat>::Add(!0)
inline void List_1_Add_m7042E43C05118EB8A312C09B5496B6DA2070B00A (List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 * __this, ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 *, ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Single LopapaGames.ScriptableObjects.SOEconomyManager::Get(LopapaGames.Common.Primitives.ResourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SOEconomyManager_Get_mFEA9EC26BB2A158618FBDB758B5BD4BB313E2C6F (SOEconomyManager_tC91CA8617FA8F7FAB2B8A55F1DEB3CFD98559221 * __this, ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * ___resource0, const RuntimeMethod* method);
// System.Void LopapaGames.ScriptableObjects.SOEconomyManager::Add(LopapaGames.Common.Primitives.ResourceType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SOEconomyManager_Add_m23A2FCED445C5B1F36EB058452BAC4332454313A (SOEconomyManager_tC91CA8617FA8F7FAB2B8A55F1DEB3CFD98559221 * __this, ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * ___resource0, float ___value1, const RuntimeMethod* method);
// LopapaGames.Common.Core.IUnityService LopapaGames.ScriptableObjects.Spawner::_getUnityService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Spawner__getUnityService_m4C8B409769A4981FD4E29D43E97F210629AE463C (Spawner_t0892435E0F6539E08C72391A879086340B2106CB * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LopapaGames.ScriptableObjects.CooldownManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CooldownManager_Awake_m043E0CB3FBB9E5BFFDEB237D7A00B1E5F91343D4 (CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CooldownManager_Awake_m043E0CB3FBB9E5BFFDEB237D7A00B1E5F91343D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MyUnityService = UnityService.GetInstance();
		UnityService_t70F9308563795A71413244683338C22480922B0E * L_0 = UnityService_GetInstance_m8B3429C0A1E4D331DC2964389574700C762ED190(/*hidden argument*/NULL);
		__this->set_MyUnityService_5(L_0);
		// _cooldownValue = new Dictionary<string, float>();
		Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 * L_1 = (Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 *)il2cpp_codegen_object_new(Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m50AC4B87C02C072C5CE7C1AC6D1C61A75B1197DE(L_1, /*hidden argument*/Dictionary_2__ctor_m50AC4B87C02C072C5CE7C1AC6D1C61A75B1197DE_RuntimeMethod_var);
		__this->set__cooldownValue_6(L_1);
		// keys = new List<string>();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_2 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_2, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		__this->set_keys_7(L_2);
		// }
		return;
	}
}
// System.Void LopapaGames.ScriptableObjects.CooldownManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CooldownManager_Update_m001B456559F40EFF2FF5F3174E679140BA33193B (CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CooldownManager_Update_m001B456559F40EFF2FF5F3174E679140BA33193B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// if (keys.Count == 0)
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_keys_7();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline(L_0, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// for (var i = keys.Count - 1; i >= 0; i--)
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_2 = __this->get_keys_7();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline(L_2, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		goto IL_0090;
	}

IL_001e:
	{
		// float oldVal = _cooldownValue[keys[i]];
		Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 * L_4 = __this->get__cooldownValue_6();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_5 = __this->get_keys_7();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7 = List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var);
		NullCheck(L_4);
		float L_8 = Dictionary_2_get_Item_m03005970B000C64632240D621F245725CAE8858A(L_4, L_7, /*hidden argument*/Dictionary_2_get_Item_m03005970B000C64632240D621F245725CAE8858A_RuntimeMethod_var);
		// if (oldVal > 0)
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_007a;
		}
	}
	{
		// float newVal = _cooldownValue[keys[i]] - MyUnityService.GetDeltaTime();
		Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 * L_9 = __this->get__cooldownValue_6();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_10 = __this->get_keys_7();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		String_t* L_12 = List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var);
		NullCheck(L_9);
		float L_13 = Dictionary_2_get_Item_m03005970B000C64632240D621F245725CAE8858A(L_9, L_12, /*hidden argument*/Dictionary_2_get_Item_m03005970B000C64632240D621F245725CAE8858A_RuntimeMethod_var);
		RuntimeObject* L_14 = __this->get_MyUnityService_5();
		NullCheck(L_14);
		float L_15 = InterfaceFuncInvoker0< float >::Invoke(45 /* System.Single LopapaGames.Common.Core.IUnityService::GetDeltaTime() */, IUnityService_tF1E20F5DBD4FDE2CAC09F9B94647DDCF49A56AD8_il2cpp_TypeInfo_var, L_14);
		V_1 = ((float)il2cpp_codegen_subtract((float)L_13, (float)L_15));
		// _cooldownValue[keys[i]] = newVal;
		Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 * L_16 = __this->get__cooldownValue_6();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_17 = __this->get_keys_7();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var);
		float L_20 = V_1;
		NullCheck(L_16);
		Dictionary_2_set_Item_m2F298782C2BC0CB0E7369F0D520E10635C5801CA(L_16, L_19, L_20, /*hidden argument*/Dictionary_2_set_Item_m2F298782C2BC0CB0E7369F0D520E10635C5801CA_RuntimeMethod_var);
		// }
		goto IL_008c;
	}

IL_007a:
	{
		// Remove(keys[i]);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_21 = __this->get_keys_7();
		int32_t L_22 = V_0;
		NullCheck(L_21);
		String_t* L_23 = List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_inline(L_21, L_22, /*hidden argument*/List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var);
		CooldownManager_Remove_m70EE89171BBD38768F62DDA974FE6C0D3F14703E(__this, L_23, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// for (var i = keys.Count - 1; i >= 0; i--)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
	}

IL_0090:
	{
		// for (var i = keys.Count - 1; i >= 0; i--)
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LopapaGames.ScriptableObjects.CooldownManager::AddTimer(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CooldownManager_AddTimer_m183D92D65CA1F0901B3F3B7A1C2939863A50D247 (CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * __this, String_t* ___cooldownKey0, float ___delay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CooldownManager_AddTimer_m183D92D65CA1F0901B3F3B7A1C2939863A50D247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _cooldownValue[cooldownKey] = delay;
		Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 * L_0 = __this->get__cooldownValue_6();
		String_t* L_1 = ___cooldownKey0;
		float L_2 = ___delay1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m2F298782C2BC0CB0E7369F0D520E10635C5801CA(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m2F298782C2BC0CB0E7369F0D520E10635C5801CA_RuntimeMethod_var);
		// if (!keys.Contains(cooldownKey))
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_3 = __this->get_keys_7();
		String_t* L_4 = ___cooldownKey0;
		NullCheck(L_3);
		bool L_5 = List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B(L_3, L_4, /*hidden argument*/List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		// keys.Add(cooldownKey);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_6 = __this->get_keys_7();
		String_t* L_7 = ___cooldownKey0;
		NullCheck(L_6);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_6, L_7, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Single LopapaGames.ScriptableObjects.CooldownManager::GetTimer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CooldownManager_GetTimer_mBB5D1BC32EB5391B905D398CB820299D49C07D27 (CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * __this, String_t* ___cooldownKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CooldownManager_GetTimer_mBB5D1BC32EB5391B905D398CB820299D49C07D27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// return _cooldownValue.TryGetValue(cooldownKey, out var val) ? val : 0f;
		Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 * L_0 = __this->get__cooldownValue_6();
		String_t* L_1 = ___cooldownKey0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_mF409E840690B371FDD865C261E2424B5CD89EBA9(L_0, L_1, (float*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mF409E840690B371FDD865C261E2424B5CD89EBA9_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		return (0.0f);
	}

IL_0016:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void LopapaGames.ScriptableObjects.CooldownManager::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CooldownManager_Remove_m70EE89171BBD38768F62DDA974FE6C0D3F14703E (CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * __this, String_t* ___cooldownKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CooldownManager_Remove_m70EE89171BBD38768F62DDA974FE6C0D3F14703E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _cooldownValue.Remove(cooldownKey);
		Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397 * L_0 = __this->get__cooldownValue_6();
		String_t* L_1 = ___cooldownKey0;
		NullCheck(L_0);
		Dictionary_2_Remove_m4366962DD780D9C08601C7806EDF4642E0C70B8B(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_m4366962DD780D9C08601C7806EDF4642E0C70B8B_RuntimeMethod_var);
		// keys.Remove(cooldownKey);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_2 = __this->get_keys_7();
		String_t* L_3 = ___cooldownKey0;
		NullCheck(L_2);
		List_1_Remove_m328186F8A9B1D4EA6E6A69ACF3FC02DF4BAB4333(L_2, L_3, /*hidden argument*/List_1_Remove_m328186F8A9B1D4EA6E6A69ACF3FC02DF4BAB4333_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void LopapaGames.ScriptableObjects.CooldownManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CooldownManager__ctor_mEA365BE6EA27A8EB7E45FFB393F8D910B10A9FB6 (CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CooldownManager__ctor_mEA365BE6EA27A8EB7E45FFB393F8D910B10A9FB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m43BECD7D15946CC17D53060751A868C0FF1C9267(__this, /*hidden argument*/Singleton_1__ctor_m43BECD7D15946CC17D53060751A868C0FF1C9267_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LopapaGames.ScriptableObjects.DropTable::Drop(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropTable_Drop_m2B5D143A1039DF25123BC5C1B5930B93C73A0457 (DropTable_t015F74B8DD2E2545EA89F4D8AE7FAC81F1D5731D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method)
{
	{
		// if (MyUnityService == null)
		RuntimeObject* L_0 = __this->get_MyUnityService_7();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// MyUnityService = UnityService.GetInstance();
		UnityService_t70F9308563795A71413244683338C22480922B0E * L_1 = UnityService_GetInstance_m8B3429C0A1E4D331DC2964389574700C762ED190(/*hidden argument*/NULL);
		__this->set_MyUnityService_7(L_1);
	}

IL_0013:
	{
		// if (IsSingleDrop)
		bool L_2 = __this->get_IsSingleDrop_5();
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// DropSingle(position);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___position0;
		DropTable_DropSingle_mF1660666D05806314A56CCB90E48B1A1C10938CB(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0023:
	{
		// DropMultiple(position);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___position0;
		DropTable_DropMultiple_mD6B7A514ED03D7B0842934D420798D0EDDC90990(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LopapaGames.ScriptableObjects.DropTable::DropSingle(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropTable_DropSingle_mF1660666D05806314A56CCB90E48B1A1C10938CB (DropTable_t015F74B8DD2E2545EA89F4D8AE7FAC81F1D5731D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropTable_DropSingle_mF1660666D05806314A56CCB90E48B1A1C10938CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A* V_1 = NULL;
	int32_t V_2 = 0;
	ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 * V_3 = NULL;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 * V_6 = NULL;
	{
		// float chanceSum = 0f;
		V_0 = (0.0f);
		// foreach (ObjectChance pair in Table)
		ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A* L_0 = __this->get_Table_4();
		V_1 = L_0;
		V_2 = 0;
		goto IL_0022;
	}

IL_0011:
	{
		// foreach (ObjectChance pair in Table)
		ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// chanceSum += pair.chance;
		float L_5 = V_0;
		ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 * L_6 = V_3;
		NullCheck(L_6);
		float L_7 = L_6->get_chance_1();
		V_0 = ((float)il2cpp_codegen_add((float)L_5, (float)L_7));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0022:
	{
		// foreach (ObjectChance pair in Table)
		int32_t L_9 = V_2;
		ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_0011;
		}
	}
	{
		// float rndDropped = MyUnityService.Range(0f, 1f);
		RuntimeObject* L_11 = __this->get_MyUnityService_7();
		NullCheck(L_11);
		float L_12 = InterfaceFuncInvoker2< float, float, float >::Invoke(44 /* System.Single LopapaGames.Common.Core.IUnityService::Range(System.Single,System.Single) */, IUnityService_tF1E20F5DBD4FDE2CAC09F9B94647DDCF49A56AD8_il2cpp_TypeInfo_var, L_11, (0.0f), (1.0f));
		// if (rndDropped <= SingleDropChance)
		float L_13 = __this->get_SingleDropChance_6();
		if ((!(((float)L_12) <= ((float)L_13))))
		{
			goto IL_00a5;
		}
	}
	{
		// float rndSelector = MyUnityService.Range(0f, chanceSum);
		RuntimeObject* L_14 = __this->get_MyUnityService_7();
		float L_15 = V_0;
		NullCheck(L_14);
		float L_16 = InterfaceFuncInvoker2< float, float, float >::Invoke(44 /* System.Single LopapaGames.Common.Core.IUnityService::Range(System.Single,System.Single) */, IUnityService_tF1E20F5DBD4FDE2CAC09F9B94647DDCF49A56AD8_il2cpp_TypeInfo_var, L_14, (0.0f), L_15);
		V_4 = L_16;
		// float currentSum = 0f;
		V_5 = (0.0f);
		// foreach (var pair in Table)
		ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A* L_17 = __this->get_Table_4();
		V_1 = L_17;
		V_2 = 0;
		goto IL_009f;
	}

IL_006a:
	{
		// foreach (var pair in Table)
		ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_6 = L_21;
		// currentSum += pair.chance;
		float L_22 = V_5;
		ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 * L_23 = V_6;
		NullCheck(L_23);
		float L_24 = L_23->get_chance_1();
		V_5 = ((float)il2cpp_codegen_add((float)L_22, (float)L_24));
		// if (rndSelector < currentSum) {
		float L_25 = V_4;
		float L_26 = V_5;
		if ((!(((float)L_25) < ((float)L_26))))
		{
			goto IL_009b;
		}
	}
	{
		// MyUnityService.Instantiate(pair.gameObject, position, Quaternion.identity);
		RuntimeObject* L_27 = __this->get_MyUnityService_7();
		ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 * L_28 = V_6;
		NullCheck(L_28);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = L_28->get_gameObject_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = ___position0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_31 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		NullCheck(L_27);
		InterfaceFuncInvoker3< Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(38 /* UnityEngine.Object LopapaGames.Common.Core.IUnityService::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion) */, IUnityService_tF1E20F5DBD4FDE2CAC09F9B94647DDCF49A56AD8_il2cpp_TypeInfo_var, L_27, L_29, L_30, L_31);
		// break;
		return;
	}

IL_009b:
	{
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_009f:
	{
		// foreach (var pair in Table)
		int32_t L_33 = V_2;
		ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A* L_34 = V_1;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))))
		{
			goto IL_006a;
		}
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void LopapaGames.ScriptableObjects.DropTable::DropMultiple(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropTable_DropMultiple_mD6B7A514ED03D7B0842934D420798D0EDDC90990 (DropTable_t015F74B8DD2E2545EA89F4D8AE7FAC81F1D5731D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropTable_DropMultiple_mD6B7A514ED03D7B0842934D420798D0EDDC90990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A* V_0 = NULL;
	int32_t V_1 = 0;
	ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 * V_2 = NULL;
	{
		// foreach (ObjectChance pair in Table)
		ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A* L_0 = __this->get_Table_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000b:
	{
		// foreach (ObjectChance pair in Table)
		ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// float rnd = MyUnityService.Range(0f, 1f);
		RuntimeObject* L_5 = __this->get_MyUnityService_7();
		NullCheck(L_5);
		float L_6 = InterfaceFuncInvoker2< float, float, float >::Invoke(44 /* System.Single LopapaGames.Common.Core.IUnityService::Range(System.Single,System.Single) */, IUnityService_tF1E20F5DBD4FDE2CAC09F9B94647DDCF49A56AD8_il2cpp_TypeInfo_var, L_5, (0.0f), (1.0f));
		// if (rnd <= pair.chance)
		ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 * L_7 = V_2;
		NullCheck(L_7);
		float L_8 = L_7->get_chance_1();
		if ((!(((float)L_6) <= ((float)L_8))))
		{
			goto IL_0044;
		}
	}
	{
		// MyUnityService.Instantiate(pair.gameObject, position, Quaternion.identity);
		RuntimeObject* L_9 = __this->get_MyUnityService_7();
		ObjectChance_t72F11C51DA2BD650FF42D335FD6ABBC5D413D703 * L_10 = V_2;
		NullCheck(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = L_10->get_gameObject_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = ___position0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceFuncInvoker3< Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(38 /* UnityEngine.Object LopapaGames.Common.Core.IUnityService::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion) */, IUnityService_tF1E20F5DBD4FDE2CAC09F9B94647DDCF49A56AD8_il2cpp_TypeInfo_var, L_9, L_11, L_12, L_13);
	}

IL_0044:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0048:
	{
		// foreach (ObjectChance pair in Table)
		int32_t L_15 = V_1;
		ObjectChanceU5BU5D_t5C75B186243C829135668A317DAD960E363DB87A* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LopapaGames.ScriptableObjects.DropTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropTable__ctor_m3FAD8A8319DA44B5328FFB1A4A64143007B6278B (DropTable_t015F74B8DD2E2545EA89F4D8AE7FAC81F1D5731D * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LopapaGames.ScriptableObjects.MinMaxValues::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxValues_SetValue_mDE2753C57C52784D281D5C4CB29AE769017FE2D0 (MinMaxValues_t8B6272A6D82D7358320D25E82A5F807C8C3F9A65 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// if (value > maxValue)
		float L_0 = ___value0;
		float L_1 = __this->get_maxValue_5();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0011;
		}
	}
	{
		// value = maxValue;
		float L_2 = __this->get_maxValue_5();
		___value0 = L_2;
	}

IL_0011:
	{
		// if (value < minValue)
		float L_3 = ___value0;
		float L_4 = __this->get_minValue_4();
		if ((!(((float)L_3) < ((float)L_4))))
		{
			goto IL_0022;
		}
	}
	{
		// value = minValue;
		float L_5 = __this->get_minValue_4();
		___value0 = L_5;
	}

IL_0022:
	{
		// Value = value;
		float L_6 = ___value0;
		__this->set_Value_6(L_6);
		// }
		return;
	}
}
// System.Single LopapaGames.ScriptableObjects.MinMaxValues::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxValues_GetValue_mA97DABF897DF4A75BC497EA1C840E27B29A08433 (MinMaxValues_t8B6272A6D82D7358320D25E82A5F807C8C3F9A65 * __this, const RuntimeMethod* method)
{
	{
		// return Value;
		float L_0 = __this->get_Value_6();
		return L_0;
	}
}
// System.Void LopapaGames.ScriptableObjects.MinMaxValues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxValues__ctor_m2E4D56451EEAE26F5E9F73AED908B22DC39DCEF4 (MinMaxValues_t8B6272A6D82D7358320D25E82A5F807C8C3F9A65 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<UnityEngine.Transform> LopapaGames.ScriptableObjects.PathController::GetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * PathController_GetPath_m14F768B84E6C2F5E9E10F07B9267508ED5A80852 (PathController_tE9A5E01CBD54543770455549C11260D30B06912E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PathController_GetPath_m14F768B84E6C2F5E9E10F07B9267508ED5A80852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// List<Transform> list = new List<Transform>();
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_0 = (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)il2cpp_codegen_object_new(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_il2cpp_TypeInfo_var);
		List_1__ctor_m12ABE366DAE5DA1A167EE7F75868147D825B232F(L_0, /*hidden argument*/List_1__ctor_m12ABE366DAE5DA1A167EE7F75868147D825B232F_RuntimeMethod_var);
		V_0 = L_0;
		// Transform parent = _pathPrefab.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get__pathPrefab_4();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		// foreach (Transform child in parent.transform) {
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_001e:
		{
			// foreach (Transform child in parent.transform) {
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject * L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
			V_2 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_6, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var));
			// list.Add(child);
			List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_7 = V_0;
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = V_2;
			NullCheck(L_7);
			List_1_Add_m58D7C85FC3459259B4B9B182A98C838005A62F3C(L_7, L_8, /*hidden argument*/List_1_Add_m58D7C85FC3459259B4B9B182A98C838005A62F3C_RuntimeMethod_var);
		}

IL_0031:
		{
			// foreach (Transform child in parent.transform) {
			RuntimeObject* L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_001e;
			}
		}

IL_0039:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_12 = V_3;
			if (!L_12)
			{
				goto IL_004b;
			}
		}

IL_0045:
		{
			RuntimeObject* L_13 = V_3;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_13);
		}

IL_004b:
		{
			IL2CPP_END_FINALLY(59)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// return list;
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_14 = V_0;
		return L_14;
	}
}
// System.Void LopapaGames.ScriptableObjects.PathController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathController__ctor_m36E9B12D29EB62115C68749889F457E4067E79E4 (PathController_tE9A5E01CBD54543770455549C11260D30B06912E * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LopapaGames.ScriptableObjects.ResourceFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceFloat__ctor_m6E179F796C102798072FB257FAED274D59CA765B (ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LopapaGames.ScriptableObjects.SOEconomyManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SOEconomyManager_Awake_m12F99B2F987CC01E0C5470875287E0D9C4143E8A (SOEconomyManager_tC91CA8617FA8F7FAB2B8A55F1DEB3CFD98559221 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SOEconomyManager_Awake_m12F99B2F987CC01E0C5470875287E0D9C4143E8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_list == null)
		List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 * L_0 = __this->get__list_4();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// _list = new List<ResourceFloat>();
		List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 * L_1 = (List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 *)il2cpp_codegen_object_new(List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20_il2cpp_TypeInfo_var);
		List_1__ctor_mB76F999957F7E5B37ACD96828DE2ED4FA1F90706(L_1, /*hidden argument*/List_1__ctor_mB76F999957F7E5B37ACD96828DE2ED4FA1F90706_RuntimeMethod_var);
		__this->set__list_4(L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void LopapaGames.ScriptableObjects.SOEconomyManager::Add(LopapaGames.Common.Primitives.ResourceType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SOEconomyManager_Add_m23A2FCED445C5B1F36EB058452BAC4332454313A (SOEconomyManager_tC91CA8617FA8F7FAB2B8A55F1DEB3CFD98559221 * __this, ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * ___resource0, float ___value1, const RuntimeMethod* method)
{
	{
		// var existing = GetByKey(resource);
		ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * L_0 = ___resource0;
		ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * L_1 = SOEconomyManager_GetByKey_m8FE861BC2B224CB86695E58E6456E56AC3F2AFF4(__this, L_0, /*hidden argument*/NULL);
		// existing.Value += value;
		ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * L_2 = L_1;
		NullCheck(L_2);
		float L_3 = L_2->get_Value_1();
		float L_4 = ___value1;
		NullCheck(L_2);
		L_2->set_Value_1(((float)il2cpp_codegen_add((float)L_3, (float)L_4)));
		// }
		return;
	}
}
// LopapaGames.ScriptableObjects.ResourceFloat LopapaGames.ScriptableObjects.SOEconomyManager::GetByKey(LopapaGames.Common.Primitives.ResourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * SOEconomyManager_GetByKey_m8FE861BC2B224CB86695E58E6456E56AC3F2AFF4 (SOEconomyManager_tC91CA8617FA8F7FAB2B8A55F1DEB3CFD98559221 * __this, ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * ___resource0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SOEconomyManager_GetByKey_m8FE861BC2B224CB86695E58E6456E56AC3F2AFF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * V_0 = NULL;
	Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * V_2 = NULL;
	ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var t in _list)
		List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 * L_0 = __this->get__list_4();
		NullCheck(L_0);
		Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E  L_1 = List_1_GetEnumerator_m276B29D17EAC8E5F6C5D472E49FB27028EE37C33(L_0, /*hidden argument*/List_1_GetEnumerator_m276B29D17EAC8E5F6C5D472E49FB27028EE37C33_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_000e:
		{
			// foreach (var t in _list)
			ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * L_2 = Enumerator_get_Current_m5F73376203D8D702CFE6046B70E8134B1225FB5D_inline((Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E *)(&V_1), /*hidden argument*/Enumerator_get_Current_m5F73376203D8D702CFE6046B70E8134B1225FB5D_RuntimeMethod_var);
			V_2 = L_2;
			// if (t.Key == resource)
			ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * L_3 = V_2;
			NullCheck(L_3);
			ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * L_4 = L_3->get_Key_0();
			ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * L_5 = ___resource0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0028;
			}
		}

IL_0024:
		{
			// return t;
			ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * L_7 = V_2;
			V_3 = L_7;
			IL2CPP_LEAVE(0x67, FINALLY_0033);
		}

IL_0028:
		{
			// foreach (var t in _list)
			bool L_8 = Enumerator_MoveNext_m03597CFB8AC184BCB69BC1A32956AEF301BB3A6E((Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m03597CFB8AC184BCB69BC1A32956AEF301BB3A6E_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_000e;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0033);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m41540BB66C96E09B1524BF940A10FCDBE3FC81FD((Enumerator_tE93C67932A683DA6F8DE808D20B2D6339223F31E *)(&V_1), /*hidden argument*/Enumerator_Dispose_m41540BB66C96E09B1524BF940A10FCDBE3FC81FD_RuntimeMethod_var);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x67, IL_0067)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0041:
	{
		// var existing = new ResourceFloat();
		ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * L_9 = (ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F *)il2cpp_codegen_object_new(ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F_il2cpp_TypeInfo_var);
		ResourceFloat__ctor_m6E179F796C102798072FB257FAED274D59CA765B(L_9, /*hidden argument*/NULL);
		V_0 = L_9;
		// existing.Key = resource;
		ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * L_10 = V_0;
		ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * L_11 = ___resource0;
		NullCheck(L_10);
		L_10->set_Key_0(L_11);
		// existing.Value = 0f;
		ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * L_12 = V_0;
		NullCheck(L_12);
		L_12->set_Value_1((0.0f));
		// _list.Add(existing);
		List_1_t8A735BACBC39DEBD73FFB7E6C719E0F3EA51FA20 * L_13 = __this->get__list_4();
		ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * L_14 = V_0;
		NullCheck(L_13);
		List_1_Add_m7042E43C05118EB8A312C09B5496B6DA2070B00A(L_13, L_14, /*hidden argument*/List_1_Add_m7042E43C05118EB8A312C09B5496B6DA2070B00A_RuntimeMethod_var);
		// return existing;
		ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * L_15 = V_0;
		return L_15;
	}

IL_0067:
	{
		// }
		ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * L_16 = V_3;
		return L_16;
	}
}
// System.Single LopapaGames.ScriptableObjects.SOEconomyManager::Get(LopapaGames.Common.Primitives.ResourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SOEconomyManager_Get_mFEA9EC26BB2A158618FBDB758B5BD4BB313E2C6F (SOEconomyManager_tC91CA8617FA8F7FAB2B8A55F1DEB3CFD98559221 * __this, ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * ___resource0, const RuntimeMethod* method)
{
	{
		// var existing = GetByKey(resource);
		ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * L_0 = ___resource0;
		ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * L_1 = SOEconomyManager_GetByKey_m8FE861BC2B224CB86695E58E6456E56AC3F2AFF4(__this, L_0, /*hidden argument*/NULL);
		// return existing.Value;
		NullCheck(L_1);
		float L_2 = L_1->get_Value_1();
		return L_2;
	}
}
// System.Void LopapaGames.ScriptableObjects.SOEconomyManager::Set(LopapaGames.Common.Primitives.ResourceType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SOEconomyManager_Set_mF18699D525FA71C0325BC13A638A9FAD8AFBDAEF (SOEconomyManager_tC91CA8617FA8F7FAB2B8A55F1DEB3CFD98559221 * __this, ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * ___resource0, float ___value1, const RuntimeMethod* method)
{
	{
		// ResourceFloat existing = GetByKey(resource);
		ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * L_0 = ___resource0;
		ResourceFloat_tB9792982192FCDE43731EC1768A99D967BDF1D3F * L_1 = SOEconomyManager_GetByKey_m8FE861BC2B224CB86695E58E6456E56AC3F2AFF4(__this, L_0, /*hidden argument*/NULL);
		// existing.Value = value;
		float L_2 = ___value1;
		NullCheck(L_1);
		L_1->set_Value_1(L_2);
		// }
		return;
	}
}
// System.Boolean LopapaGames.ScriptableObjects.SOEconomyManager::Pay(LopapaGames.Common.Primitives.ResourceType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SOEconomyManager_Pay_m4CBEAD6C41DE10106C38142658B4F96440CEA0F3 (SOEconomyManager_tC91CA8617FA8F7FAB2B8A55F1DEB3CFD98559221 * __this, ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * ___resource0, float ___cost1, const RuntimeMethod* method)
{
	{
		// var current = Get(resource);
		ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * L_0 = ___resource0;
		float L_1 = SOEconomyManager_Get_mFEA9EC26BB2A158618FBDB758B5BD4BB313E2C6F(__this, L_0, /*hidden argument*/NULL);
		// if (current < cost)
		float L_2 = ___cost1;
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_000c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000c:
	{
		// Add(resource, -cost);
		ResourceType_tA8A9E4FE8F7E669F8CB49578D87FBAC33B161E87 * L_3 = ___resource0;
		float L_4 = ___cost1;
		SOEconomyManager_Add_m23A2FCED445C5B1F36EB058452BAC4332454313A(__this, L_3, ((-L_4)), /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void LopapaGames.ScriptableObjects.SOEconomyManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SOEconomyManager__ctor_m438B2EB858EC0B537A4484BAE602CD029C5288D7 (SOEconomyManager_tC91CA8617FA8F7FAB2B8A55F1DEB3CFD98559221 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject LopapaGames.ScriptableObjects.Spawner::Spawn(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Spawner_Spawn_m31558F584512FFD6E9AD318FB555E8DCEF2051EC (Spawner_t0892435E0F6539E08C72391A879086340B2106CB * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Spawner_Spawn_m31558F584512FFD6E9AD318FB555E8DCEF2051EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _getUnityService().Instantiate(prefab, parent);
		RuntimeObject* L_0 = Spawner__getUnityService_m4C8B409769A4981FD4E29D43E97F210629AE463C(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_prefab_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___parent0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = InterfaceFuncInvoker2< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * >::Invoke(29 /* UnityEngine.GameObject LopapaGames.Common.Core.IUnityService::Instantiate(UnityEngine.GameObject,UnityEngine.Transform) */, IUnityService_tF1E20F5DBD4FDE2CAC09F9B94647DDCF49A56AD8_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// UnityEngine.GameObject LopapaGames.ScriptableObjects.Spawner::Spawn(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Spawner_Spawn_mD5D8B5DC63EB89E8441F7B405FBFC847F4597215 (Spawner_t0892435E0F6539E08C72391A879086340B2106CB * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Spawner_Spawn_mD5D8B5DC63EB89E8441F7B405FBFC847F4597215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _getUnityService().Instantiate(prefab, position, rotation, parent);
		RuntimeObject* L_0 = Spawner__getUnityService_m4C8B409769A4981FD4E29D43E97F210629AE463C(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_prefab_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___position1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___rotation2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___parent0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = InterfaceFuncInvoker4< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * >::Invoke(39 /* UnityEngine.GameObject LopapaGames.Common.Core.IUnityService::Instantiate(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform) */, IUnityService_tF1E20F5DBD4FDE2CAC09F9B94647DDCF49A56AD8_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// LopapaGames.Common.Core.IUnityService LopapaGames.ScriptableObjects.Spawner::_getUnityService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Spawner__getUnityService_m4C8B409769A4981FD4E29D43E97F210629AE463C (Spawner_t0892435E0F6539E08C72391A879086340B2106CB * __this, const RuntimeMethod* method)
{
	{
		// if (MyUnityService == null)
		RuntimeObject* L_0 = __this->get_MyUnityService_4();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// MyUnityService = UnityService.GetInstance();
		UnityService_t70F9308563795A71413244683338C22480922B0E * L_1 = UnityService_GetInstance_m8B3429C0A1E4D331DC2964389574700C762ED190(/*hidden argument*/NULL);
		__this->set_MyUnityService_4(L_1);
	}

IL_0013:
	{
		// return MyUnityService;
		RuntimeObject* L_2 = __this->get_MyUnityService_4();
		return L_2;
	}
}
// System.Void LopapaGames.ScriptableObjects.Spawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner__ctor_m2D7AA4461E8DBE9A716108EAC0B31ADA0AB46F99 (Spawner_t0892435E0F6539E08C72391A879086340B2106CB * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
