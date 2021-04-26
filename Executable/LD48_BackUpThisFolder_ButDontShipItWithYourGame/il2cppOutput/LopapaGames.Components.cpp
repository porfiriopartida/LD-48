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

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// LopapaGames.Common.Core.GameEvent
struct GameEvent_tE7932EF83316ECE53C2CF6A039BDA773CD3A7FB6;
// LopapaGames.Common.Core.IUnityService
struct IUnityService_tF1E20F5DBD4FDE2CAC09F9B94647DDCF49A56AD8;
// LopapaGames.Common.Core.Singleton`1<LopapaGames.Components.SoundManager>
struct Singleton_1_t9199A97BF8AE4CE8778B431D010A2FD76825EC93;
// LopapaGames.Common.Core.Singleton`1<System.Object>
struct Singleton_1_t4E0F1FD5054DA9D20D1453CA5CDA585D1F324166;
// LopapaGames.Components.ActionableMonobehavior
struct ActionableMonobehavior_t5A0F40EBBA2A95A18D9920784623F74189E5915B;
// LopapaGames.Components.BooleanRenderer
struct BooleanRenderer_t90BF3504BB2356B753BD3152DD49453C21D6DFD6;
// LopapaGames.Components.BroadcastOnTrigger
struct BroadcastOnTrigger_tD8174FE1D27A8A1B8FE65068C882E383B6549C02;
// LopapaGames.Components.CallbackMonobehavior
struct CallbackMonobehavior_t763F31C5D248810695B60498F4ABD2670BD55108;
// LopapaGames.Components.ConditionalShredderController
struct ConditionalShredderController_tA26415EDF3FBA46BDF228883451ADECE4244CF18;
// LopapaGames.Components.GunController
struct GunController_t2BE4CBC88034E7A719D7A6B7A6964896AC9F0C1B;
// LopapaGames.Components.MouseSpawnerController
struct MouseSpawnerController_t58F83A259C25B8422C08A155E5A0D2CB5135A2D6;
// LopapaGames.Components.PercentRenderer
struct PercentRenderer_t3BE379B6C5295134E4AEAA220795BFFE7BBB4DCE;
// LopapaGames.Components.SFXPlayer
struct SFXPlayer_tA70F3C3AA7F5419DB97FD74E5FA4E02DB00D6189;
// LopapaGames.Components.Shredder2DController
struct Shredder2DController_tE33B3E16E40AA9A62FCA844DC50A7D784F9B5A73;
// LopapaGames.Components.SimpleBulletController
struct SimpleBulletController_t13C12520ACBBB3D708AC3BE4E705F40962B9AAA2;
// LopapaGames.Components.SimpleConsumable
struct SimpleConsumable_t6ED322F192DD7F051913364ED8FFE9764AD3956C;
// LopapaGames.Components.SliderMinMaxReader
struct SliderMinMaxReader_t0B27198D6777539FAF1FC1946820F4B21BF921C7;
// LopapaGames.Components.SoundManager
struct SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70;
// LopapaGames.Components.SpawnerController
struct SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B;
// LopapaGames.Components.TimerController
struct TimerController_t01824A538CD8C68CEFF3F86CD5124929B3707839;
// LopapaGames.Components.TimerRenderer
struct TimerRenderer_t4CF755643D45B81CB0AE8A2EC9B2334D92B59523;
// LopapaGames.Components.ValueRenderer
struct ValueRenderer_tCC31B4129D924CB2A52B761169B33EA3FFB02614;
// LopapaGames.ScriptableObjects.Boolean
struct Boolean_tE84EB495B06C39F7AD1F88525FD372D1B435C2FF;
// LopapaGames.ScriptableObjects.CooldownManager
struct CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C;
// LopapaGames.ScriptableObjects.Float
struct Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5;
// LopapaGames.ScriptableObjects.MinMaxValues
struct MinMaxValues_t8B6272A6D82D7358320D25E82A5F807C8C3F9A65;
// LopapaGames.ScriptableObjects.Spawner
struct Spawner_t0892435E0F6539E08C72391A879086340B2106CB;
// LopapaGames.ScriptableObjects.TimerValue
struct TimerValue_t8973F09AEB9AB7292071EE1485C67769E159B193;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t1CE820CE6E3C698FA89A86746557529C65F97397;
// System.Collections.Generic.List`1<LopapaGames.Common.Core.GameEventListener>
struct List_1_t542371489D4552A8D393FB3CFB733D18F1D7234C;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collider2D
struct Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Slider
struct Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral191048ED5A4E50AC0CCC101C465D96FA9345BE0C;
IL2CPP_EXTERN_C String_t* _stringLiteral6227120AB7544133388A6529A55E3C3AA773B62A;
IL2CPP_EXTERN_C String_t* _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
IL2CPP_EXTERN_C String_t* _stringLiteralCD5D730D5309072864F777A82C95CBFF0FD99EF6;
IL2CPP_EXTERN_C String_t* _stringLiteralD0828728B2E8C3606163626740423BCC1A2AB4BB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSlider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09_m807D3ABE78D8980C34391517EA87ED002388DE51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C_m9C4E12C14F03699894319F5542DCB6FDC6CBD579_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mF79C747891493002787DFB94D876CF178D0ED14D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m1D4E1196E54DAB0203431EC8B125E19EE6865336_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BooleanRenderer_FixedUpdate_m1D27147982B2B471C3B7F2746E433FFDE5819EA6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BooleanRenderer_Start_m6AA93CD93E6C446EE58B116499E1CC07437E3AE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConditionalShredderController_OnTriggerEnter2D_mA4D9B38D846F1C2A59CDFCD163E63CC77B99BDF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GunController_Shoot_mD82AD9F9E380AF5BBE2BC27AA1852A62CD83BC77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GunController_Start_m8FF06883D0068EB2579F53CB919CCAB70713BA24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GunController__ctor_m6189825F9BEFEB9C01BF571915B1939C4B968B1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseSpawnerController_GetCost_m8AB23702F4522C4F77FE33105F4B0CB89FD7457E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseSpawnerController_Spawn_mB3CC552E512FAED1ADD193AC14BECF8CA589F07D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseSpawnerController_Start_mA60841ADB4AED98C1CD77E0A66EAF226DC60E2D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseSpawnerController_Update_m4FE82C6A0031AC4E43CD1E40B2E0AF20C616C2EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PercentRenderer_FixedUpdate_m5F4E73E80BBC1C9ED5817055F1FE4FE0429C519A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PercentRenderer_Start_mEC7F7BBB47C2BF9B0862F669103A17601EA33A98_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SFXPlayer_Play_m7E5053B63A6A9002F1D6CCB76CE61E916CD86233_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SFXPlayer_Play_mEB6A958FB7F3A54ADDB30D118C0526BD94A09FC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Shredder2DController_OnTriggerEnter2D_m120C382D6A3F5A8EC90EDBFB3DF2BFD179B1EC9E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleBulletController_OnTriggerEnter2D_m6447F1B2F276EBCD1A8F56001E6BC3DCBD916848_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleConsumable_OnTriggerEnter2D_mC202DCCE17626FF0B1DC21549193E4FF0498F886_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SliderMinMaxReader_Start_m1A7DA8411EC8072D4D2340067A7B807BA5AC32D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SoundManager__ctor_m0D89E9EEFBBBA8F0F99091770F60EAABEC0CF041_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpawnerController_Notify_m12C23D658201B22A54796990A76DA62C51EE78AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpawnerController_Spawn_m60234C85F9C8D7DBAF14AD97A24B78BB3534E9AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpawnerController_Start_mF3AE8CD2EE4AB123354A021505FDADECFB9D556A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpawnerController_Update_m83ABBBFA32B2BAB50F8910D2CA3AD7A58F965EFC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpawnerController__ctor_m394300C27F0B90ECE863CF53CDF261E4F8368C3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerRenderer_GetTimeValue_mA53A2D03198C6B095E2B0D854155FC5403E418CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerRenderer_Start_mFB749C79CBBE4052E944A1B0E890E5219F82EB2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueRenderer_FixedUpdate_mB48EB74DA1632B4C654E377C3778A3A71F66C4D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueRenderer_Start_mBDB25DED4EACDDAFE79B3DF7A810B2F11A01D9DC_MetadataUsageId;

struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t10470BBA56F5127A6CD8BEB02B6809FFB8576988 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
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


// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03__padding[1];
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


// UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
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

// UnityEngine.SendMessageOptions
struct SendMessageOptions_t4EA4645A7D0C4E0186BD7A984CDF4EE2C8F26250 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SendMessageOptions_t4EA4645A7D0C4E0186BD7A984CDF4EE2C8F26250, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
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

// UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// LopapaGames.Common.Core.GameEvent
struct GameEvent_tE7932EF83316ECE53C2CF6A039BDA773CD3A7FB6  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Collections.Generic.List`1<LopapaGames.Common.Core.GameEventListener> LopapaGames.Common.Core.GameEvent::listeners
	List_1_t542371489D4552A8D393FB3CFB733D18F1D7234C * ___listeners_4;

public:
	inline static int32_t get_offset_of_listeners_4() { return static_cast<int32_t>(offsetof(GameEvent_tE7932EF83316ECE53C2CF6A039BDA773CD3A7FB6, ___listeners_4)); }
	inline List_1_t542371489D4552A8D393FB3CFB733D18F1D7234C * get_listeners_4() const { return ___listeners_4; }
	inline List_1_t542371489D4552A8D393FB3CFB733D18F1D7234C ** get_address_of_listeners_4() { return &___listeners_4; }
	inline void set_listeners_4(List_1_t542371489D4552A8D393FB3CFB733D18F1D7234C * value)
	{
		___listeners_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listeners_4), (void*)value);
	}
};


// LopapaGames.ScriptableObjects.Boolean
struct Boolean_tE84EB495B06C39F7AD1F88525FD372D1B435C2FF  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean LopapaGames.ScriptableObjects.Boolean::Value
	bool ___Value_4;

public:
	inline static int32_t get_offset_of_Value_4() { return static_cast<int32_t>(offsetof(Boolean_tE84EB495B06C39F7AD1F88525FD372D1B435C2FF, ___Value_4)); }
	inline bool get_Value_4() const { return ___Value_4; }
	inline bool* get_address_of_Value_4() { return &___Value_4; }
	inline void set_Value_4(bool value)
	{
		___Value_4 = value;
	}
};


// LopapaGames.ScriptableObjects.Float
struct Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Single LopapaGames.ScriptableObjects.Float::Value
	float ___Value_4;

public:
	inline static int32_t get_offset_of_Value_4() { return static_cast<int32_t>(offsetof(Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5, ___Value_4)); }
	inline float get_Value_4() const { return ___Value_4; }
	inline float* get_address_of_Value_4() { return &___Value_4; }
	inline void set_Value_4(float value)
	{
		___Value_4 = value;
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


// LopapaGames.ScriptableObjects.TimerValue
struct TimerValue_t8973F09AEB9AB7292071EE1485C67769E159B193  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Single LopapaGames.ScriptableObjects.TimerValue::Hours
	float ___Hours_4;
	// System.Single LopapaGames.ScriptableObjects.TimerValue::Minutes
	float ___Minutes_5;
	// System.Single LopapaGames.ScriptableObjects.TimerValue::Seconds
	float ___Seconds_6;

public:
	inline static int32_t get_offset_of_Hours_4() { return static_cast<int32_t>(offsetof(TimerValue_t8973F09AEB9AB7292071EE1485C67769E159B193, ___Hours_4)); }
	inline float get_Hours_4() const { return ___Hours_4; }
	inline float* get_address_of_Hours_4() { return &___Hours_4; }
	inline void set_Hours_4(float value)
	{
		___Hours_4 = value;
	}

	inline static int32_t get_offset_of_Minutes_5() { return static_cast<int32_t>(offsetof(TimerValue_t8973F09AEB9AB7292071EE1485C67769E159B193, ___Minutes_5)); }
	inline float get_Minutes_5() const { return ___Minutes_5; }
	inline float* get_address_of_Minutes_5() { return &___Minutes_5; }
	inline void set_Minutes_5(float value)
	{
		___Minutes_5 = value;
	}

	inline static int32_t get_offset_of_Seconds_6() { return static_cast<int32_t>(offsetof(TimerValue_t8973F09AEB9AB7292071EE1485C67769E159B193, ___Seconds_6)); }
	inline float get_Seconds_6() const { return ___Seconds_6; }
	inline float* get_address_of_Seconds_6() { return &___Seconds_6; }
	inline void set_Seconds_6(float value)
	{
		___Seconds_6 = value;
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


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
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


// LopapaGames.Common.Core.Singleton`1<LopapaGames.Components.SoundManager>
struct Singleton_1_t9199A97BF8AE4CE8778B431D010A2FD76825EC93  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct Singleton_1_t9199A97BF8AE4CE8778B431D010A2FD76825EC93_StaticFields
{
public:
	// T LopapaGames.Common.Core.Singleton`1::instance
	SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(Singleton_1_t9199A97BF8AE4CE8778B431D010A2FD76825EC93_StaticFields, ___instance_4)); }
	inline SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 * get_instance_4() const { return ___instance_4; }
	inline SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
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


// LopapaGames.Components.ActionableMonobehavior
struct ActionableMonobehavior_t5A0F40EBBA2A95A18D9920784623F74189E5915B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// LopapaGames.Components.BooleanRenderer
struct BooleanRenderer_t90BF3504BB2356B753BD3152DD49453C21D6DFD6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String LopapaGames.Components.BooleanRenderer::pattern
	String_t* ___pattern_4;
	// LopapaGames.ScriptableObjects.Boolean LopapaGames.Components.BooleanRenderer::number
	Boolean_tE84EB495B06C39F7AD1F88525FD372D1B435C2FF * ___number_5;
	// UnityEngine.UI.Text LopapaGames.Components.BooleanRenderer::text
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___text_6;

public:
	inline static int32_t get_offset_of_pattern_4() { return static_cast<int32_t>(offsetof(BooleanRenderer_t90BF3504BB2356B753BD3152DD49453C21D6DFD6, ___pattern_4)); }
	inline String_t* get_pattern_4() const { return ___pattern_4; }
	inline String_t** get_address_of_pattern_4() { return &___pattern_4; }
	inline void set_pattern_4(String_t* value)
	{
		___pattern_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_4), (void*)value);
	}

	inline static int32_t get_offset_of_number_5() { return static_cast<int32_t>(offsetof(BooleanRenderer_t90BF3504BB2356B753BD3152DD49453C21D6DFD6, ___number_5)); }
	inline Boolean_tE84EB495B06C39F7AD1F88525FD372D1B435C2FF * get_number_5() const { return ___number_5; }
	inline Boolean_tE84EB495B06C39F7AD1F88525FD372D1B435C2FF ** get_address_of_number_5() { return &___number_5; }
	inline void set_number_5(Boolean_tE84EB495B06C39F7AD1F88525FD372D1B435C2FF * value)
	{
		___number_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___number_5), (void*)value);
	}

	inline static int32_t get_offset_of_text_6() { return static_cast<int32_t>(offsetof(BooleanRenderer_t90BF3504BB2356B753BD3152DD49453C21D6DFD6, ___text_6)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_text_6() const { return ___text_6; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_text_6() { return &___text_6; }
	inline void set_text_6(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___text_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_6), (void*)value);
	}
};


// LopapaGames.Components.BroadcastOnTrigger
struct BroadcastOnTrigger_tD8174FE1D27A8A1B8FE65068C882E383B6549C02  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject LopapaGames.Components.BroadcastOnTrigger::target
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___target_4;
	// System.String LopapaGames.Components.BroadcastOnTrigger::Message
	String_t* ___Message_5;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(BroadcastOnTrigger_tD8174FE1D27A8A1B8FE65068C882E383B6549C02, ___target_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_target_4() const { return ___target_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_Message_5() { return static_cast<int32_t>(offsetof(BroadcastOnTrigger_tD8174FE1D27A8A1B8FE65068C882E383B6549C02, ___Message_5)); }
	inline String_t* get_Message_5() const { return ___Message_5; }
	inline String_t** get_address_of_Message_5() { return &___Message_5; }
	inline void set_Message_5(String_t* value)
	{
		___Message_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_5), (void*)value);
	}
};


// LopapaGames.Components.CallbackMonobehavior
struct CallbackMonobehavior_t763F31C5D248810695B60498F4ABD2670BD55108  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// LopapaGames.Components.ConditionalShredderController
struct ConditionalShredderController_tA26415EDF3FBA46BDF228883451ADECE4244CF18  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String[] LopapaGames.Components.ConditionalShredderController::tagNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___tagNames_4;

public:
	inline static int32_t get_offset_of_tagNames_4() { return static_cast<int32_t>(offsetof(ConditionalShredderController_tA26415EDF3FBA46BDF228883451ADECE4244CF18, ___tagNames_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_tagNames_4() const { return ___tagNames_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_tagNames_4() { return &___tagNames_4; }
	inline void set_tagNames_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___tagNames_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tagNames_4), (void*)value);
	}
};


// LopapaGames.Components.GunController
struct GunController_t2BE4CBC88034E7A719D7A6B7A6964896AC9F0C1B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// LopapaGames.ScriptableObjects.Spawner LopapaGames.Components.GunController::spawner
	Spawner_t0892435E0F6539E08C72391A879086340B2106CB * ___spawner_4;
	// System.Single LopapaGames.Components.GunController::delay
	float ___delay_5;
	// LopapaGames.Common.Core.GameEvent LopapaGames.Components.GunController::onShootEvent
	GameEvent_tE7932EF83316ECE53C2CF6A039BDA773CD3A7FB6 * ___onShootEvent_6;
	// LopapaGames.ScriptableObjects.CooldownManager LopapaGames.Components.GunController::CooldownManager
	CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * ___CooldownManager_7;
	// System.String LopapaGames.Components.GunController::_shootEvent
	String_t* ____shootEvent_8;

public:
	inline static int32_t get_offset_of_spawner_4() { return static_cast<int32_t>(offsetof(GunController_t2BE4CBC88034E7A719D7A6B7A6964896AC9F0C1B, ___spawner_4)); }
	inline Spawner_t0892435E0F6539E08C72391A879086340B2106CB * get_spawner_4() const { return ___spawner_4; }
	inline Spawner_t0892435E0F6539E08C72391A879086340B2106CB ** get_address_of_spawner_4() { return &___spawner_4; }
	inline void set_spawner_4(Spawner_t0892435E0F6539E08C72391A879086340B2106CB * value)
	{
		___spawner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawner_4), (void*)value);
	}

	inline static int32_t get_offset_of_delay_5() { return static_cast<int32_t>(offsetof(GunController_t2BE4CBC88034E7A719D7A6B7A6964896AC9F0C1B, ___delay_5)); }
	inline float get_delay_5() const { return ___delay_5; }
	inline float* get_address_of_delay_5() { return &___delay_5; }
	inline void set_delay_5(float value)
	{
		___delay_5 = value;
	}

	inline static int32_t get_offset_of_onShootEvent_6() { return static_cast<int32_t>(offsetof(GunController_t2BE4CBC88034E7A719D7A6B7A6964896AC9F0C1B, ___onShootEvent_6)); }
	inline GameEvent_tE7932EF83316ECE53C2CF6A039BDA773CD3A7FB6 * get_onShootEvent_6() const { return ___onShootEvent_6; }
	inline GameEvent_tE7932EF83316ECE53C2CF6A039BDA773CD3A7FB6 ** get_address_of_onShootEvent_6() { return &___onShootEvent_6; }
	inline void set_onShootEvent_6(GameEvent_tE7932EF83316ECE53C2CF6A039BDA773CD3A7FB6 * value)
	{
		___onShootEvent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onShootEvent_6), (void*)value);
	}

	inline static int32_t get_offset_of_CooldownManager_7() { return static_cast<int32_t>(offsetof(GunController_t2BE4CBC88034E7A719D7A6B7A6964896AC9F0C1B, ___CooldownManager_7)); }
	inline CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * get_CooldownManager_7() const { return ___CooldownManager_7; }
	inline CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C ** get_address_of_CooldownManager_7() { return &___CooldownManager_7; }
	inline void set_CooldownManager_7(CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * value)
	{
		___CooldownManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CooldownManager_7), (void*)value);
	}

	inline static int32_t get_offset_of__shootEvent_8() { return static_cast<int32_t>(offsetof(GunController_t2BE4CBC88034E7A719D7A6B7A6964896AC9F0C1B, ____shootEvent_8)); }
	inline String_t* get__shootEvent_8() const { return ____shootEvent_8; }
	inline String_t** get_address_of__shootEvent_8() { return &____shootEvent_8; }
	inline void set__shootEvent_8(String_t* value)
	{
		____shootEvent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shootEvent_8), (void*)value);
	}
};


// LopapaGames.Components.MouseSpawnerController
struct MouseSpawnerController_t58F83A259C25B8422C08A155E5A0D2CB5135A2D6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// LopapaGames.ScriptableObjects.Spawner LopapaGames.Components.MouseSpawnerController::Spawner
	Spawner_t0892435E0F6539E08C72391A879086340B2106CB * ___Spawner_4;
	// System.String LopapaGames.Components.MouseSpawnerController::objectParent
	String_t* ___objectParent_5;
	// System.Boolean LopapaGames.Components.MouseSpawnerController::IsValidDrop
	bool ___IsValidDrop_6;
	// System.Boolean LopapaGames.Components.MouseSpawnerController::SingleSpawn
	bool ___SingleSpawn_7;
	// UnityEngine.Transform LopapaGames.Components.MouseSpawnerController::parent
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent_8;
	// LopapaGames.Components.CallbackMonobehavior LopapaGames.Components.MouseSpawnerController::Callback
	CallbackMonobehavior_t763F31C5D248810695B60498F4ABD2670BD55108 * ___Callback_9;

public:
	inline static int32_t get_offset_of_Spawner_4() { return static_cast<int32_t>(offsetof(MouseSpawnerController_t58F83A259C25B8422C08A155E5A0D2CB5135A2D6, ___Spawner_4)); }
	inline Spawner_t0892435E0F6539E08C72391A879086340B2106CB * get_Spawner_4() const { return ___Spawner_4; }
	inline Spawner_t0892435E0F6539E08C72391A879086340B2106CB ** get_address_of_Spawner_4() { return &___Spawner_4; }
	inline void set_Spawner_4(Spawner_t0892435E0F6539E08C72391A879086340B2106CB * value)
	{
		___Spawner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Spawner_4), (void*)value);
	}

	inline static int32_t get_offset_of_objectParent_5() { return static_cast<int32_t>(offsetof(MouseSpawnerController_t58F83A259C25B8422C08A155E5A0D2CB5135A2D6, ___objectParent_5)); }
	inline String_t* get_objectParent_5() const { return ___objectParent_5; }
	inline String_t** get_address_of_objectParent_5() { return &___objectParent_5; }
	inline void set_objectParent_5(String_t* value)
	{
		___objectParent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectParent_5), (void*)value);
	}

	inline static int32_t get_offset_of_IsValidDrop_6() { return static_cast<int32_t>(offsetof(MouseSpawnerController_t58F83A259C25B8422C08A155E5A0D2CB5135A2D6, ___IsValidDrop_6)); }
	inline bool get_IsValidDrop_6() const { return ___IsValidDrop_6; }
	inline bool* get_address_of_IsValidDrop_6() { return &___IsValidDrop_6; }
	inline void set_IsValidDrop_6(bool value)
	{
		___IsValidDrop_6 = value;
	}

	inline static int32_t get_offset_of_SingleSpawn_7() { return static_cast<int32_t>(offsetof(MouseSpawnerController_t58F83A259C25B8422C08A155E5A0D2CB5135A2D6, ___SingleSpawn_7)); }
	inline bool get_SingleSpawn_7() const { return ___SingleSpawn_7; }
	inline bool* get_address_of_SingleSpawn_7() { return &___SingleSpawn_7; }
	inline void set_SingleSpawn_7(bool value)
	{
		___SingleSpawn_7 = value;
	}

	inline static int32_t get_offset_of_parent_8() { return static_cast<int32_t>(offsetof(MouseSpawnerController_t58F83A259C25B8422C08A155E5A0D2CB5135A2D6, ___parent_8)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_parent_8() const { return ___parent_8; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_parent_8() { return &___parent_8; }
	inline void set_parent_8(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_Callback_9() { return static_cast<int32_t>(offsetof(MouseSpawnerController_t58F83A259C25B8422C08A155E5A0D2CB5135A2D6, ___Callback_9)); }
	inline CallbackMonobehavior_t763F31C5D248810695B60498F4ABD2670BD55108 * get_Callback_9() const { return ___Callback_9; }
	inline CallbackMonobehavior_t763F31C5D248810695B60498F4ABD2670BD55108 ** get_address_of_Callback_9() { return &___Callback_9; }
	inline void set_Callback_9(CallbackMonobehavior_t763F31C5D248810695B60498F4ABD2670BD55108 * value)
	{
		___Callback_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_9), (void*)value);
	}
};


// LopapaGames.Components.PercentRenderer
struct PercentRenderer_t3BE379B6C5295134E4AEAA220795BFFE7BBB4DCE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String LopapaGames.Components.PercentRenderer::pattern
	String_t* ___pattern_4;
	// LopapaGames.ScriptableObjects.Float LopapaGames.Components.PercentRenderer::number
	Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * ___number_5;
	// LopapaGames.ScriptableObjects.Float LopapaGames.Components.PercentRenderer::maxNumber
	Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * ___maxNumber_6;
	// UnityEngine.UI.Text LopapaGames.Components.PercentRenderer::text
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___text_7;

public:
	inline static int32_t get_offset_of_pattern_4() { return static_cast<int32_t>(offsetof(PercentRenderer_t3BE379B6C5295134E4AEAA220795BFFE7BBB4DCE, ___pattern_4)); }
	inline String_t* get_pattern_4() const { return ___pattern_4; }
	inline String_t** get_address_of_pattern_4() { return &___pattern_4; }
	inline void set_pattern_4(String_t* value)
	{
		___pattern_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_4), (void*)value);
	}

	inline static int32_t get_offset_of_number_5() { return static_cast<int32_t>(offsetof(PercentRenderer_t3BE379B6C5295134E4AEAA220795BFFE7BBB4DCE, ___number_5)); }
	inline Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * get_number_5() const { return ___number_5; }
	inline Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 ** get_address_of_number_5() { return &___number_5; }
	inline void set_number_5(Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * value)
	{
		___number_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___number_5), (void*)value);
	}

	inline static int32_t get_offset_of_maxNumber_6() { return static_cast<int32_t>(offsetof(PercentRenderer_t3BE379B6C5295134E4AEAA220795BFFE7BBB4DCE, ___maxNumber_6)); }
	inline Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * get_maxNumber_6() const { return ___maxNumber_6; }
	inline Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 ** get_address_of_maxNumber_6() { return &___maxNumber_6; }
	inline void set_maxNumber_6(Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * value)
	{
		___maxNumber_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maxNumber_6), (void*)value);
	}

	inline static int32_t get_offset_of_text_7() { return static_cast<int32_t>(offsetof(PercentRenderer_t3BE379B6C5295134E4AEAA220795BFFE7BBB4DCE, ___text_7)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_text_7() const { return ___text_7; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_text_7() { return &___text_7; }
	inline void set_text_7(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___text_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_7), (void*)value);
	}
};


// LopapaGames.Components.SFXPlayer
struct SFXPlayer_tA70F3C3AA7F5419DB97FD74E5FA4E02DB00D6189  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.AudioClip[] LopapaGames.Components.SFXPlayer::sfx
	AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* ___sfx_4;

public:
	inline static int32_t get_offset_of_sfx_4() { return static_cast<int32_t>(offsetof(SFXPlayer_tA70F3C3AA7F5419DB97FD74E5FA4E02DB00D6189, ___sfx_4)); }
	inline AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* get_sfx_4() const { return ___sfx_4; }
	inline AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2** get_address_of_sfx_4() { return &___sfx_4; }
	inline void set_sfx_4(AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* value)
	{
		___sfx_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sfx_4), (void*)value);
	}
};


// LopapaGames.Components.Shredder2DController
struct Shredder2DController_tE33B3E16E40AA9A62FCA844DC50A7D784F9B5A73  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// LopapaGames.Components.SimpleBulletController
struct SimpleBulletController_t13C12520ACBBB3D708AC3BE4E705F40962B9AAA2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String[] LopapaGames.Components.SimpleBulletController::Targets
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___Targets_4;
	// System.String LopapaGames.Components.SimpleBulletController::AddDamageMethod
	String_t* ___AddDamageMethod_5;
	// System.Single LopapaGames.Components.SimpleBulletController::damage
	float ___damage_6;
	// System.Boolean LopapaGames.Components.SimpleBulletController::destroyOnHit
	bool ___destroyOnHit_7;
	// System.Boolean LopapaGames.Components.SimpleBulletController::TriggerEvent
	bool ___TriggerEvent_8;
	// System.String[] LopapaGames.Components.SimpleBulletController::EventsNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___EventsNames_9;

public:
	inline static int32_t get_offset_of_Targets_4() { return static_cast<int32_t>(offsetof(SimpleBulletController_t13C12520ACBBB3D708AC3BE4E705F40962B9AAA2, ___Targets_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_Targets_4() const { return ___Targets_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_Targets_4() { return &___Targets_4; }
	inline void set_Targets_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___Targets_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Targets_4), (void*)value);
	}

	inline static int32_t get_offset_of_AddDamageMethod_5() { return static_cast<int32_t>(offsetof(SimpleBulletController_t13C12520ACBBB3D708AC3BE4E705F40962B9AAA2, ___AddDamageMethod_5)); }
	inline String_t* get_AddDamageMethod_5() const { return ___AddDamageMethod_5; }
	inline String_t** get_address_of_AddDamageMethod_5() { return &___AddDamageMethod_5; }
	inline void set_AddDamageMethod_5(String_t* value)
	{
		___AddDamageMethod_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AddDamageMethod_5), (void*)value);
	}

	inline static int32_t get_offset_of_damage_6() { return static_cast<int32_t>(offsetof(SimpleBulletController_t13C12520ACBBB3D708AC3BE4E705F40962B9AAA2, ___damage_6)); }
	inline float get_damage_6() const { return ___damage_6; }
	inline float* get_address_of_damage_6() { return &___damage_6; }
	inline void set_damage_6(float value)
	{
		___damage_6 = value;
	}

	inline static int32_t get_offset_of_destroyOnHit_7() { return static_cast<int32_t>(offsetof(SimpleBulletController_t13C12520ACBBB3D708AC3BE4E705F40962B9AAA2, ___destroyOnHit_7)); }
	inline bool get_destroyOnHit_7() const { return ___destroyOnHit_7; }
	inline bool* get_address_of_destroyOnHit_7() { return &___destroyOnHit_7; }
	inline void set_destroyOnHit_7(bool value)
	{
		___destroyOnHit_7 = value;
	}

	inline static int32_t get_offset_of_TriggerEvent_8() { return static_cast<int32_t>(offsetof(SimpleBulletController_t13C12520ACBBB3D708AC3BE4E705F40962B9AAA2, ___TriggerEvent_8)); }
	inline bool get_TriggerEvent_8() const { return ___TriggerEvent_8; }
	inline bool* get_address_of_TriggerEvent_8() { return &___TriggerEvent_8; }
	inline void set_TriggerEvent_8(bool value)
	{
		___TriggerEvent_8 = value;
	}

	inline static int32_t get_offset_of_EventsNames_9() { return static_cast<int32_t>(offsetof(SimpleBulletController_t13C12520ACBBB3D708AC3BE4E705F40962B9AAA2, ___EventsNames_9)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_EventsNames_9() const { return ___EventsNames_9; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_EventsNames_9() { return &___EventsNames_9; }
	inline void set_EventsNames_9(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___EventsNames_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventsNames_9), (void*)value);
	}
};


// LopapaGames.Components.SimpleConsumable
struct SimpleConsumable_t6ED322F192DD7F051913364ED8FFE9764AD3956C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String[] LopapaGames.Components.SimpleConsumable::Targets
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___Targets_4;
	// System.String LopapaGames.Components.SimpleConsumable::ConsumeMethod
	String_t* ___ConsumeMethod_5;
	// System.Single LopapaGames.Components.SimpleConsumable::value
	float ___value_6;
	// System.Boolean LopapaGames.Components.SimpleConsumable::destroyOnHit
	bool ___destroyOnHit_7;
	// UnityEngine.AudioClip[] LopapaGames.Components.SimpleConsumable::onConsumeClips
	AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* ___onConsumeClips_8;

public:
	inline static int32_t get_offset_of_Targets_4() { return static_cast<int32_t>(offsetof(SimpleConsumable_t6ED322F192DD7F051913364ED8FFE9764AD3956C, ___Targets_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_Targets_4() const { return ___Targets_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_Targets_4() { return &___Targets_4; }
	inline void set_Targets_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___Targets_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Targets_4), (void*)value);
	}

	inline static int32_t get_offset_of_ConsumeMethod_5() { return static_cast<int32_t>(offsetof(SimpleConsumable_t6ED322F192DD7F051913364ED8FFE9764AD3956C, ___ConsumeMethod_5)); }
	inline String_t* get_ConsumeMethod_5() const { return ___ConsumeMethod_5; }
	inline String_t** get_address_of_ConsumeMethod_5() { return &___ConsumeMethod_5; }
	inline void set_ConsumeMethod_5(String_t* value)
	{
		___ConsumeMethod_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConsumeMethod_5), (void*)value);
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(SimpleConsumable_t6ED322F192DD7F051913364ED8FFE9764AD3956C, ___value_6)); }
	inline float get_value_6() const { return ___value_6; }
	inline float* get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(float value)
	{
		___value_6 = value;
	}

	inline static int32_t get_offset_of_destroyOnHit_7() { return static_cast<int32_t>(offsetof(SimpleConsumable_t6ED322F192DD7F051913364ED8FFE9764AD3956C, ___destroyOnHit_7)); }
	inline bool get_destroyOnHit_7() const { return ___destroyOnHit_7; }
	inline bool* get_address_of_destroyOnHit_7() { return &___destroyOnHit_7; }
	inline void set_destroyOnHit_7(bool value)
	{
		___destroyOnHit_7 = value;
	}

	inline static int32_t get_offset_of_onConsumeClips_8() { return static_cast<int32_t>(offsetof(SimpleConsumable_t6ED322F192DD7F051913364ED8FFE9764AD3956C, ___onConsumeClips_8)); }
	inline AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* get_onConsumeClips_8() const { return ___onConsumeClips_8; }
	inline AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2** get_address_of_onConsumeClips_8() { return &___onConsumeClips_8; }
	inline void set_onConsumeClips_8(AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* value)
	{
		___onConsumeClips_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onConsumeClips_8), (void*)value);
	}
};


// LopapaGames.Components.SliderMinMaxReader
struct SliderMinMaxReader_t0B27198D6777539FAF1FC1946820F4B21BF921C7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// LopapaGames.ScriptableObjects.MinMaxValues LopapaGames.Components.SliderMinMaxReader::playerHp
	MinMaxValues_t8B6272A6D82D7358320D25E82A5F807C8C3F9A65 * ___playerHp_4;
	// UnityEngine.UI.Slider LopapaGames.Components.SliderMinMaxReader::slider
	Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * ___slider_5;

public:
	inline static int32_t get_offset_of_playerHp_4() { return static_cast<int32_t>(offsetof(SliderMinMaxReader_t0B27198D6777539FAF1FC1946820F4B21BF921C7, ___playerHp_4)); }
	inline MinMaxValues_t8B6272A6D82D7358320D25E82A5F807C8C3F9A65 * get_playerHp_4() const { return ___playerHp_4; }
	inline MinMaxValues_t8B6272A6D82D7358320D25E82A5F807C8C3F9A65 ** get_address_of_playerHp_4() { return &___playerHp_4; }
	inline void set_playerHp_4(MinMaxValues_t8B6272A6D82D7358320D25E82A5F807C8C3F9A65 * value)
	{
		___playerHp_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerHp_4), (void*)value);
	}

	inline static int32_t get_offset_of_slider_5() { return static_cast<int32_t>(offsetof(SliderMinMaxReader_t0B27198D6777539FAF1FC1946820F4B21BF921C7, ___slider_5)); }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * get_slider_5() const { return ___slider_5; }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 ** get_address_of_slider_5() { return &___slider_5; }
	inline void set_slider_5(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * value)
	{
		___slider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_5), (void*)value);
	}
};


// LopapaGames.Components.TimerController
struct TimerController_t01824A538CD8C68CEFF3F86CD5124929B3707839  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// LopapaGames.ScriptableObjects.Float LopapaGames.Components.TimerController::number
	Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * ___number_4;

public:
	inline static int32_t get_offset_of_number_4() { return static_cast<int32_t>(offsetof(TimerController_t01824A538CD8C68CEFF3F86CD5124929B3707839, ___number_4)); }
	inline Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * get_number_4() const { return ___number_4; }
	inline Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 ** get_address_of_number_4() { return &___number_4; }
	inline void set_number_4(Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * value)
	{
		___number_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___number_4), (void*)value);
	}
};


// LopapaGames.Components.TimerRenderer
struct TimerRenderer_t4CF755643D45B81CB0AE8A2EC9B2334D92B59523  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String LopapaGames.Components.TimerRenderer::pattern
	String_t* ___pattern_4;
	// UnityEngine.UI.Text LopapaGames.Components.TimerRenderer::text
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___text_5;
	// LopapaGames.ScriptableObjects.TimerValue LopapaGames.Components.TimerRenderer::TimerValue
	TimerValue_t8973F09AEB9AB7292071EE1485C67769E159B193 * ___TimerValue_6;
	// System.Boolean LopapaGames.Components.TimerRenderer::UseDoubleZero
	bool ___UseDoubleZero_7;

public:
	inline static int32_t get_offset_of_pattern_4() { return static_cast<int32_t>(offsetof(TimerRenderer_t4CF755643D45B81CB0AE8A2EC9B2334D92B59523, ___pattern_4)); }
	inline String_t* get_pattern_4() const { return ___pattern_4; }
	inline String_t** get_address_of_pattern_4() { return &___pattern_4; }
	inline void set_pattern_4(String_t* value)
	{
		___pattern_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_4), (void*)value);
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(TimerRenderer_t4CF755643D45B81CB0AE8A2EC9B2334D92B59523, ___text_5)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_text_5() const { return ___text_5; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_5), (void*)value);
	}

	inline static int32_t get_offset_of_TimerValue_6() { return static_cast<int32_t>(offsetof(TimerRenderer_t4CF755643D45B81CB0AE8A2EC9B2334D92B59523, ___TimerValue_6)); }
	inline TimerValue_t8973F09AEB9AB7292071EE1485C67769E159B193 * get_TimerValue_6() const { return ___TimerValue_6; }
	inline TimerValue_t8973F09AEB9AB7292071EE1485C67769E159B193 ** get_address_of_TimerValue_6() { return &___TimerValue_6; }
	inline void set_TimerValue_6(TimerValue_t8973F09AEB9AB7292071EE1485C67769E159B193 * value)
	{
		___TimerValue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimerValue_6), (void*)value);
	}

	inline static int32_t get_offset_of_UseDoubleZero_7() { return static_cast<int32_t>(offsetof(TimerRenderer_t4CF755643D45B81CB0AE8A2EC9B2334D92B59523, ___UseDoubleZero_7)); }
	inline bool get_UseDoubleZero_7() const { return ___UseDoubleZero_7; }
	inline bool* get_address_of_UseDoubleZero_7() { return &___UseDoubleZero_7; }
	inline void set_UseDoubleZero_7(bool value)
	{
		___UseDoubleZero_7 = value;
	}
};


// LopapaGames.Components.ValueRenderer
struct ValueRenderer_tCC31B4129D924CB2A52B761169B33EA3FFB02614  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String LopapaGames.Components.ValueRenderer::pattern
	String_t* ___pattern_4;
	// LopapaGames.ScriptableObjects.Float LopapaGames.Components.ValueRenderer::number
	Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * ___number_5;
	// UnityEngine.UI.Text LopapaGames.Components.ValueRenderer::text
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___text_6;

public:
	inline static int32_t get_offset_of_pattern_4() { return static_cast<int32_t>(offsetof(ValueRenderer_tCC31B4129D924CB2A52B761169B33EA3FFB02614, ___pattern_4)); }
	inline String_t* get_pattern_4() const { return ___pattern_4; }
	inline String_t** get_address_of_pattern_4() { return &___pattern_4; }
	inline void set_pattern_4(String_t* value)
	{
		___pattern_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_4), (void*)value);
	}

	inline static int32_t get_offset_of_number_5() { return static_cast<int32_t>(offsetof(ValueRenderer_tCC31B4129D924CB2A52B761169B33EA3FFB02614, ___number_5)); }
	inline Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * get_number_5() const { return ___number_5; }
	inline Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 ** get_address_of_number_5() { return &___number_5; }
	inline void set_number_5(Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * value)
	{
		___number_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___number_5), (void*)value);
	}

	inline static int32_t get_offset_of_text_6() { return static_cast<int32_t>(offsetof(ValueRenderer_tCC31B4129D924CB2A52B761169B33EA3FFB02614, ___text_6)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_text_6() const { return ___text_6; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_text_6() { return &___text_6; }
	inline void set_text_6(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___text_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_6), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// LopapaGames.Components.SoundManager
struct SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70  : public Singleton_1_t9199A97BF8AE4CE8778B431D010A2FD76825EC93
{
public:
	// LopapaGames.ScriptableObjects.Boolean LopapaGames.Components.SoundManager::IsSfxOn
	Boolean_tE84EB495B06C39F7AD1F88525FD372D1B435C2FF * ___IsSfxOn_5;
	// UnityEngine.AudioSource LopapaGames.Components.SoundManager::defaultSFXAudioSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___defaultSFXAudioSource_6;

public:
	inline static int32_t get_offset_of_IsSfxOn_5() { return static_cast<int32_t>(offsetof(SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70, ___IsSfxOn_5)); }
	inline Boolean_tE84EB495B06C39F7AD1F88525FD372D1B435C2FF * get_IsSfxOn_5() const { return ___IsSfxOn_5; }
	inline Boolean_tE84EB495B06C39F7AD1F88525FD372D1B435C2FF ** get_address_of_IsSfxOn_5() { return &___IsSfxOn_5; }
	inline void set_IsSfxOn_5(Boolean_tE84EB495B06C39F7AD1F88525FD372D1B435C2FF * value)
	{
		___IsSfxOn_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsSfxOn_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultSFXAudioSource_6() { return static_cast<int32_t>(offsetof(SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70, ___defaultSFXAudioSource_6)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_defaultSFXAudioSource_6() const { return ___defaultSFXAudioSource_6; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_defaultSFXAudioSource_6() { return &___defaultSFXAudioSource_6; }
	inline void set_defaultSFXAudioSource_6(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___defaultSFXAudioSource_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultSFXAudioSource_6), (void*)value);
	}
};


// LopapaGames.Components.SpawnerController
struct SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B  : public ActionableMonobehavior_t5A0F40EBBA2A95A18D9920784623F74189E5915B
{
public:
	// LopapaGames.ScriptableObjects.Spawner LopapaGames.Components.SpawnerController::Spawner
	Spawner_t0892435E0F6539E08C72391A879086340B2106CB * ___Spawner_4;
	// System.Single LopapaGames.Components.SpawnerController::startAt
	float ___startAt_5;
	// System.Single LopapaGames.Components.SpawnerController::delay
	float ___delay_6;
	// System.Boolean LopapaGames.Components.SpawnerController::parentSelf
	bool ___parentSelf_7;
	// UnityEngine.Transform LopapaGames.Components.SpawnerController::objectParent
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___objectParent_8;
	// System.Int32 LopapaGames.Components.SpawnerController::totalSpawnCount
	int32_t ___totalSpawnCount_9;
	// UnityEngine.Transform LopapaGames.Components.SpawnerController::_parent
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ____parent_10;
	// System.Int32 LopapaGames.Components.SpawnerController::_totalSpawned
	int32_t ____totalSpawned_11;
	// System.Boolean LopapaGames.Components.SpawnerController::IsAutomatic
	bool ___IsAutomatic_12;
	// LopapaGames.ScriptableObjects.CooldownManager LopapaGames.Components.SpawnerController::CooldownManager
	CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * ___CooldownManager_13;
	// System.String LopapaGames.Components.SpawnerController::spawnEvent
	String_t* ___spawnEvent_14;
	// LopapaGames.Common.Core.GameEvent LopapaGames.Components.SpawnerController::GameEvent
	GameEvent_tE7932EF83316ECE53C2CF6A039BDA773CD3A7FB6 * ___GameEvent_15;

public:
	inline static int32_t get_offset_of_Spawner_4() { return static_cast<int32_t>(offsetof(SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B, ___Spawner_4)); }
	inline Spawner_t0892435E0F6539E08C72391A879086340B2106CB * get_Spawner_4() const { return ___Spawner_4; }
	inline Spawner_t0892435E0F6539E08C72391A879086340B2106CB ** get_address_of_Spawner_4() { return &___Spawner_4; }
	inline void set_Spawner_4(Spawner_t0892435E0F6539E08C72391A879086340B2106CB * value)
	{
		___Spawner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Spawner_4), (void*)value);
	}

	inline static int32_t get_offset_of_startAt_5() { return static_cast<int32_t>(offsetof(SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B, ___startAt_5)); }
	inline float get_startAt_5() const { return ___startAt_5; }
	inline float* get_address_of_startAt_5() { return &___startAt_5; }
	inline void set_startAt_5(float value)
	{
		___startAt_5 = value;
	}

	inline static int32_t get_offset_of_delay_6() { return static_cast<int32_t>(offsetof(SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B, ___delay_6)); }
	inline float get_delay_6() const { return ___delay_6; }
	inline float* get_address_of_delay_6() { return &___delay_6; }
	inline void set_delay_6(float value)
	{
		___delay_6 = value;
	}

	inline static int32_t get_offset_of_parentSelf_7() { return static_cast<int32_t>(offsetof(SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B, ___parentSelf_7)); }
	inline bool get_parentSelf_7() const { return ___parentSelf_7; }
	inline bool* get_address_of_parentSelf_7() { return &___parentSelf_7; }
	inline void set_parentSelf_7(bool value)
	{
		___parentSelf_7 = value;
	}

	inline static int32_t get_offset_of_objectParent_8() { return static_cast<int32_t>(offsetof(SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B, ___objectParent_8)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_objectParent_8() const { return ___objectParent_8; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_objectParent_8() { return &___objectParent_8; }
	inline void set_objectParent_8(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___objectParent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectParent_8), (void*)value);
	}

	inline static int32_t get_offset_of_totalSpawnCount_9() { return static_cast<int32_t>(offsetof(SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B, ___totalSpawnCount_9)); }
	inline int32_t get_totalSpawnCount_9() const { return ___totalSpawnCount_9; }
	inline int32_t* get_address_of_totalSpawnCount_9() { return &___totalSpawnCount_9; }
	inline void set_totalSpawnCount_9(int32_t value)
	{
		___totalSpawnCount_9 = value;
	}

	inline static int32_t get_offset_of__parent_10() { return static_cast<int32_t>(offsetof(SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B, ____parent_10)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get__parent_10() const { return ____parent_10; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of__parent_10() { return &____parent_10; }
	inline void set__parent_10(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		____parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_10), (void*)value);
	}

	inline static int32_t get_offset_of__totalSpawned_11() { return static_cast<int32_t>(offsetof(SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B, ____totalSpawned_11)); }
	inline int32_t get__totalSpawned_11() const { return ____totalSpawned_11; }
	inline int32_t* get_address_of__totalSpawned_11() { return &____totalSpawned_11; }
	inline void set__totalSpawned_11(int32_t value)
	{
		____totalSpawned_11 = value;
	}

	inline static int32_t get_offset_of_IsAutomatic_12() { return static_cast<int32_t>(offsetof(SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B, ___IsAutomatic_12)); }
	inline bool get_IsAutomatic_12() const { return ___IsAutomatic_12; }
	inline bool* get_address_of_IsAutomatic_12() { return &___IsAutomatic_12; }
	inline void set_IsAutomatic_12(bool value)
	{
		___IsAutomatic_12 = value;
	}

	inline static int32_t get_offset_of_CooldownManager_13() { return static_cast<int32_t>(offsetof(SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B, ___CooldownManager_13)); }
	inline CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * get_CooldownManager_13() const { return ___CooldownManager_13; }
	inline CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C ** get_address_of_CooldownManager_13() { return &___CooldownManager_13; }
	inline void set_CooldownManager_13(CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * value)
	{
		___CooldownManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CooldownManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_spawnEvent_14() { return static_cast<int32_t>(offsetof(SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B, ___spawnEvent_14)); }
	inline String_t* get_spawnEvent_14() const { return ___spawnEvent_14; }
	inline String_t** get_address_of_spawnEvent_14() { return &___spawnEvent_14; }
	inline void set_spawnEvent_14(String_t* value)
	{
		___spawnEvent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnEvent_14), (void*)value);
	}

	inline static int32_t get_offset_of_GameEvent_15() { return static_cast<int32_t>(offsetof(SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B, ___GameEvent_15)); }
	inline GameEvent_tE7932EF83316ECE53C2CF6A039BDA773CD3A7FB6 * get_GameEvent_15() const { return ___GameEvent_15; }
	inline GameEvent_tE7932EF83316ECE53C2CF6A039BDA773CD3A7FB6 ** get_address_of_GameEvent_15() { return &___GameEvent_15; }
	inline void set_GameEvent_15(GameEvent_tE7932EF83316ECE53C2CF6A039BDA773CD3A7FB6 * value)
	{
		___GameEvent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameEvent_15), (void*)value);
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


// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillRect_20)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleRect_21)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_OnValueChanged_27)); }
	inline SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillImage_28)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillTransform_29)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillContainerRect_30)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleTransform_31)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleContainerRect_32)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Offset_33)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * m_Items[1];

public:
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !0 LopapaGames.Common.Core.Singleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Singleton_1_get_Instance_mF775123D60D6568DE5FBA69269C554C3CF8903EE_gshared (const RuntimeMethod* method);
// System.Void LopapaGames.Common.Core.Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_mE11340E6DB851349233A9CD204067FB980453799_gshared (Singleton_1_t4E0F1FD5054DA9D20D1453CA5CDA585D1F324166 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_BroadcastMessage_mABB308EA1B7F641BFC60E091A75E5E053D23A8B5 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___methodName0, int32_t ___options1, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<LopapaGames.ScriptableObjects.CooldownManager>()
inline CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * GameObject_AddComponent_TisCooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C_m9C4E12C14F03699894319F5542DCB6FDC6CBD579 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Void LopapaGames.ScriptableObjects.CooldownManager::AddTimer(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CooldownManager_AddTimer_m183D92D65CA1F0901B3F3B7A1C2939863A50D247 (CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * __this, String_t* ___cooldownKey0, float ___delay1, const RuntimeMethod* method);
// System.Single LopapaGames.ScriptableObjects.CooldownManager::GetTimer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CooldownManager_GetTimer_mBB5D1BC32EB5391B905D398CB820299D49C07D27 (CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * __this, String_t* ___cooldownKey0, const RuntimeMethod* method);
// System.Void LopapaGames.Common.Core.GameEvent::Raise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_Raise_m411B19543D8D38F300A9CEA70B221F21A3D7D99F (GameEvent_tE7932EF83316ECE53C2CF6A039BDA773CD3A7FB6 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// UnityEngine.GameObject LopapaGames.ScriptableObjects.Spawner::Spawn(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Spawner_Spawn_mD5D8B5DC63EB89E8441F7B405FBFC847F4597215 (Spawner_t0892435E0F6539E08C72391A879086340B2106CB * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_ScreenToWorldPoint_m179BB999DC97A251D0892B39C98F3FACDF0617C5 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC (int32_t ___button0, const RuntimeMethod* method);
// System.Void LopapaGames.Components.MouseSpawnerController::Spawn(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseSpawnerController_Spawn_mB3CC552E512FAED1ADD193AC14BECF8CA589F07D (MouseSpawnerController_t58F83A259C25B8422C08A155E5A0D2CB5135A2D6 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C (float ___f0, const RuntimeMethod* method);
// !0 LopapaGames.Common.Core.Singleton`1<LopapaGames.Components.SoundManager>::get_Instance()
inline SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 * Singleton_1_get_Instance_m1D4E1196E54DAB0203431EC8B125E19EE6865336 (const RuntimeMethod* method)
{
	return ((  SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_mF775123D60D6568DE5FBA69269C554C3CF8903EE_gshared)(method);
}
// System.Void LopapaGames.Components.SoundManager::PlaySfx(UnityEngine.AudioSource,UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySfx_m0027384C9919E9C47F5527A392FD22D8120F184D (SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 * __this, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___src0, AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* ___clips1, const RuntimeMethod* method);
// System.Void LopapaGames.Components.SoundManager::PlaySfx(UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySfx_m2250F3183CE706ABA4C9105AC6CA7C5303EE24D1 (SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 * __this, AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* ___clips0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_mAF014F12A3B807BC435571585D4DD34FA89EC28E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___methodName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m9A7BE015CC1472A59F1077CADFB22AD67F8722D9 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___methodName0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * Component_GetComponent_TisSlider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09_m807D3ABE78D8980C34391517EA87ED002388DE51 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_minValue_m795F45748FA2890925E28E87AB23EEC89E15756F (Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m3517BF6A1127298F11582535887B6FE5AA7C57D3 (Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Void LopapaGames.Components.SoundManager::PlaySfx(UnityEngine.AudioSource,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySfx_m8AEFC2AAC716F852D622224518C924E8C63AAC86 (SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 * __this, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___src0, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip1, const RuntimeMethod* method);
// System.Void LopapaGames.Common.Core.Singleton`1<LopapaGames.Components.SoundManager>::.ctor()
inline void Singleton_1__ctor_mF79C747891493002787DFB94D876CF178D0ED14D (Singleton_1_t9199A97BF8AE4CE8778B431D010A2FD76825EC93 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t9199A97BF8AE4CE8778B431D010A2FD76825EC93 *, const RuntimeMethod*))Singleton_1__ctor_mE11340E6DB851349233A9CD204067FB980453799_gshared)(__this, method);
}
// System.Void LopapaGames.Components.SpawnerController::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerController_Spawn_m60234C85F9C8D7DBAF14AD97A24B78BB3534E9AE (SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B * __this, const RuntimeMethod* method);
// System.Void LopapaGames.Components.SpawnerController::Notify(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerController_Notify_m12C23D658201B22A54796990A76DA62C51EE78AF (SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___spawned0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_SendMessage_m5F9746707394086235E11ED0DBB1C55C231AB606 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, String_t* ___methodName0, RuntimeObject * ___value1, int32_t ___options2, const RuntimeMethod* method);
// System.Void LopapaGames.Components.ActionableMonobehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionableMonobehavior__ctor_mD3EFD6A7E2A7CAD801A5D561F2D906A863A8A164 (ActionableMonobehavior_t5A0F40EBBA2A95A18D9920784623F74189E5915B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.String LopapaGames.Components.TimerRenderer::GetTimeValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimerRenderer_GetTimeValue_mA53A2D03198C6B095E2B0D854155FC5403E418CD (TimerRenderer_t4CF755643D45B81CB0AE8A2EC9B2334D92B59523 * __this, float ___timerValue0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
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
// System.Void LopapaGames.Components.ActionableMonobehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionableMonobehavior__ctor_mD3EFD6A7E2A7CAD801A5D561F2D906A863A8A164 (ActionableMonobehavior_t5A0F40EBBA2A95A18D9920784623F74189E5915B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LopapaGames.Components.BooleanRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanRenderer_Start_m6AA93CD93E6C446EE58B116499E1CC07437E3AE0 (BooleanRenderer_t90BF3504BB2356B753BD3152DD49453C21D6DFD6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BooleanRenderer_Start_m6AA93CD93E6C446EE58B116499E1CC07437E3AE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = GetComponent<Text>();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854(__this, /*hidden argument*/Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854_RuntimeMethod_var);
		__this->set_text_6(L_0);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.BooleanRenderer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanRenderer_FixedUpdate_m1D27147982B2B471C3B7F2746E433FFDE5819EA6 (BooleanRenderer_t90BF3504BB2356B753BD3152DD49453C21D6DFD6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BooleanRenderer_FixedUpdate_m1D27147982B2B471C3B7F2746E433FFDE5819EA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text.text = string.Format(pattern, number.Value);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_text_6();
		String_t* L_1 = __this->get_pattern_4();
		Boolean_tE84EB495B06C39F7AD1F88525FD372D1B435C2FF * L_2 = __this->get_number_5();
		NullCheck(L_2);
		bool L_3 = L_2->get_Value_4();
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(L_1, L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_6);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.BooleanRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanRenderer__ctor_m58AB3BE8DE54735513525103E88DCE8280693C61 (BooleanRenderer_t90BF3504BB2356B753BD3152DD49453C21D6DFD6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LopapaGames.Components.BroadcastOnTrigger::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BroadcastOnTrigger_OnTriggerEnter2D_mFC3A9F2EE8AEC561DFE156DE2401E6960C193BB5 (BroadcastOnTrigger_tD8174FE1D27A8A1B8FE65068C882E383B6549C02 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	{
		// target.BroadcastMessage(Message, SendMessageOptions.DontRequireReceiver);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_target_4();
		String_t* L_1 = __this->get_Message_5();
		NullCheck(L_0);
		GameObject_BroadcastMessage_mABB308EA1B7F641BFC60E091A75E5E053D23A8B5(L_0, L_1, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.BroadcastOnTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BroadcastOnTrigger__ctor_m1F0CD898106CE3F666EDA4B49D158D8243F64D08 (BroadcastOnTrigger_tD8174FE1D27A8A1B8FE65068C882E383B6549C02 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LopapaGames.Components.CallbackMonobehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackMonobehavior__ctor_m7229DEA16C41046E661AB3FEC5C900A0B401E063 (CallbackMonobehavior_t763F31C5D248810695B60498F4ABD2670BD55108 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LopapaGames.Components.ConditionalShredderController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalShredderController_OnTriggerEnter2D_mA4D9B38D846F1C2A59CDFCD163E63CC77B99BDF4 (ConditionalShredderController_tA26415EDF3FBA46BDF228883451ADECE4244CF18 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConditionalShredderController_OnTriggerEnter2D_mA4D9B38D846F1C2A59CDFCD163E63CC77B99BDF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// foreach (string tagName in tagNames)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = __this->get_tagNames_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_002c;
	}

IL_000b:
	{
		// foreach (string tagName in tagNames)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (collision.tag == tagName)
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_5 = ___collision0;
		NullCheck(L_5);
		String_t* L_6 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_5, /*hidden argument*/NULL);
		String_t* L_7 = V_2;
		bool L_8 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0028;
		}
	}
	{
		// Destroy(collision.gameObject);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_9 = ___collision0;
		NullCheck(L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_10, /*hidden argument*/NULL);
	}

IL_0028:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002c:
	{
		// foreach (string tagName in tagNames)
		int32_t L_12 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LopapaGames.Components.ConditionalShredderController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalShredderController__ctor_mF5AD8E4CFDA7271DCAB448CA75F50BA2E1BC0C94 (ConditionalShredderController_tA26415EDF3FBA46BDF228883451ADECE4244CF18 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LopapaGames.Components.GunController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_Start_m8FF06883D0068EB2579F53CB919CCAB70713BA24 (GunController_t2BE4CBC88034E7A719D7A6B7A6964896AC9F0C1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GunController_Start_m8FF06883D0068EB2579F53CB919CCAB70713BA24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CooldownManager == null)
		CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * L_0 = __this->get_CooldownManager_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// CooldownManager = this.gameObject.AddComponent<CooldownManager>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * L_3 = GameObject_AddComponent_TisCooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C_m9C4E12C14F03699894319F5542DCB6FDC6CBD579(L_2, /*hidden argument*/GameObject_AddComponent_TisCooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C_m9C4E12C14F03699894319F5542DCB6FDC6CBD579_RuntimeMethod_var);
		__this->set_CooldownManager_7(L_3);
	}

IL_001f:
	{
		// CooldownManager.AddTimer(_shootEvent, delay);
		CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * L_4 = __this->get_CooldownManager_7();
		String_t* L_5 = __this->get__shootEvent_8();
		float L_6 = __this->get_delay_5();
		NullCheck(L_4);
		CooldownManager_AddTimer_m183D92D65CA1F0901B3F3B7A1C2939863A50D247(L_4, L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.GunController::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_Shoot_mD82AD9F9E380AF5BBE2BC27AA1852A62CD83BC77 (GunController_t2BE4CBC88034E7A719D7A6B7A6964896AC9F0C1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GunController_Shoot_mD82AD9F9E380AF5BBE2BC27AA1852A62CD83BC77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CooldownManager.GetTimer(_shootEvent) <= 0)
		CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * L_0 = __this->get_CooldownManager_7();
		String_t* L_1 = __this->get__shootEvent_8();
		NullCheck(L_0);
		float L_2 = CooldownManager_GetTimer_mBB5D1BC32EB5391B905D398CB820299D49C07D27(L_0, L_1, /*hidden argument*/NULL);
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		// onShootEvent.Raise();
		GameEvent_tE7932EF83316ECE53C2CF6A039BDA773CD3A7FB6 * L_3 = __this->get_onShootEvent_6();
		NullCheck(L_3);
		GameEvent_Raise_m411B19543D8D38F300A9CEA70B221F21A3D7D99F(L_3, /*hidden argument*/NULL);
		// spawner.Spawn(null, transform.position, Quaternion.identity);
		Spawner_t0892435E0F6539E08C72391A879086340B2106CB * L_4 = __this->get_spawner_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		NullCheck(L_4);
		Spawner_Spawn_mD5D8B5DC63EB89E8441F7B405FBFC847F4597215(L_4, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL, L_6, L_7, /*hidden argument*/NULL);
		// CooldownManager.AddTimer(_shootEvent, delay);
		CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * L_8 = __this->get_CooldownManager_7();
		String_t* L_9 = __this->get__shootEvent_8();
		float L_10 = __this->get_delay_5();
		NullCheck(L_8);
		CooldownManager_AddTimer_m183D92D65CA1F0901B3F3B7A1C2939863A50D247(L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void LopapaGames.Components.GunController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController__ctor_m6189825F9BEFEB9C01BF571915B1939C4B968B1F (GunController_t2BE4CBC88034E7A719D7A6B7A6964896AC9F0C1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GunController__ctor_m6189825F9BEFEB9C01BF571915B1939C4B968B1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _shootEvent = "shoot";
		__this->set__shootEvent_8(_stringLiteral191048ED5A4E50AC0CCC101C465D96FA9345BE0C);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LopapaGames.Components.MouseSpawnerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseSpawnerController_Start_mA60841ADB4AED98C1CD77E0A66EAF226DC60E2D3 (MouseSpawnerController_t58F83A259C25B8422C08A155E5A0D2CB5135A2D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseSpawnerController_Start_mA60841ADB4AED98C1CD77E0A66EAF226DC60E2D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// if (objectParent != "")
		String_t* L_0 = __this->get_objectParent_5();
		bool L_1 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// GameObject parentGameObject = GameObject.Find(objectParent);
		String_t* L_2 = __this->get_objectParent_5();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (parentGameObject)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// this.parent = parentGameObject.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_6, /*hidden argument*/NULL);
		__this->set_parent_8(L_7);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void LopapaGames.Components.MouseSpawnerController::Spawn(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseSpawnerController_Spawn_mB3CC552E512FAED1ADD193AC14BECF8CA589F07D (MouseSpawnerController_t58F83A259C25B8422C08A155E5A0D2CB5135A2D6 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseSpawnerController_Spawn_mB3CC552E512FAED1ADD193AC14BECF8CA589F07D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Spawner.Spawn(parent, position, Quaternion.identity);
		Spawner_t0892435E0F6539E08C72391A879086340B2106CB * L_0 = __this->get_Spawner_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = __this->get_parent_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___position0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		NullCheck(L_0);
		Spawner_Spawn_mD5D8B5DC63EB89E8441F7B405FBFC847F4597215(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.MouseSpawnerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseSpawnerController_Update_m4FE82C6A0031AC4E43CD1E40B2E0AF20C616C2EC (MouseSpawnerController_t58F83A259C25B8422C08A155E5A0D2CB5135A2D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseSpawnerController_Update_m4FE82C6A0031AC4E43CD1E40B2E0AF20C616C2EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 worldPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Camera_ScreenToWorldPoint_m179BB999DC97A251D0892B39C98F3FACDF0617C5(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// worldPosition.z = 0;
		(&V_0)->set_z_4((0.0f));
		// transform.position = worldPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		NullCheck(L_3);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_3, L_4, /*hidden argument*/NULL);
		// if (Input.GetMouseButtonUp(0))
		bool L_5 = Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC(0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0083;
		}
	}
	{
		// if(IsValidDrop){
		bool L_6 = __this->get_IsValidDrop_6();
		if (!L_6)
		{
			goto IL_0070;
		}
	}
	{
		// if (Callback && Callback.TryExecute())
		CallbackMonobehavior_t763F31C5D248810695B60498F4ABD2670BD55108 * L_7 = __this->get_Callback_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		CallbackMonobehavior_t763F31C5D248810695B60498F4ABD2670BD55108 * L_9 = __this->get_Callback_9();
		NullCheck(L_9);
		bool L_10 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(6 /* System.Boolean LopapaGames.Components.CallbackMonobehavior::TryExecute(System.Object) */, L_9, NULL);
		if (!L_10)
		{
			goto IL_005c;
		}
	}
	{
		// Spawn(worldPosition);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		MouseSpawnerController_Spawn_mB3CC552E512FAED1ADD193AC14BECF8CA589F07D(__this, L_11, /*hidden argument*/NULL);
		// }
		goto IL_0070;
	}

IL_005c:
	{
		// else if(!Callback)
		CallbackMonobehavior_t763F31C5D248810695B60498F4ABD2670BD55108 * L_12 = __this->get_Callback_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0070;
		}
	}
	{
		// Spawn(worldPosition);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		MouseSpawnerController_Spawn_mB3CC552E512FAED1ADD193AC14BECF8CA589F07D(__this, L_14, /*hidden argument*/NULL);
	}

IL_0070:
	{
		// if (SingleSpawn)
		bool L_15 = __this->get_SingleSpawn_7();
		if (!L_15)
		{
			goto IL_0083;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_16, /*hidden argument*/NULL);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Single LopapaGames.Components.MouseSpawnerController::GetCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MouseSpawnerController_GetCost_m8AB23702F4522C4F77FE33105F4B0CB89FD7457E (MouseSpawnerController_t58F83A259C25B8422C08A155E5A0D2CB5135A2D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseSpawnerController_GetCost_m8AB23702F4522C4F77FE33105F4B0CB89FD7457E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Callback)
		CallbackMonobehavior_t763F31C5D248810695B60498F4ABD2670BD55108 * L_0 = __this->get_Callback_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// return Callback.GetCost();
		CallbackMonobehavior_t763F31C5D248810695B60498F4ABD2670BD55108 * L_2 = __this->get_Callback_9();
		NullCheck(L_2);
		float L_3 = VirtFuncInvoker0< float >::Invoke(7 /* System.Single LopapaGames.Components.CallbackMonobehavior::GetCost() */, L_2);
		return L_3;
	}

IL_0019:
	{
		// Debug.LogWarning("Callback is not configured in MouseSpawnerController. Cost assumed 0.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralD0828728B2E8C3606163626740423BCC1A2AB4BB, /*hidden argument*/NULL);
		// return 0;
		return (0.0f);
	}
}
// System.Void LopapaGames.Components.MouseSpawnerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseSpawnerController__ctor_m17D5C6EF0D1E63BE3751FC0C506E21B07D48BA50 (MouseSpawnerController_t58F83A259C25B8422C08A155E5A0D2CB5135A2D6 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsValidDrop = true;
		__this->set_IsValidDrop_6((bool)1);
		// public bool SingleSpawn = true;
		__this->set_SingleSpawn_7((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LopapaGames.Components.PercentRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PercentRenderer_Start_mEC7F7BBB47C2BF9B0862F669103A17601EA33A98 (PercentRenderer_t3BE379B6C5295134E4AEAA220795BFFE7BBB4DCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PercentRenderer_Start_mEC7F7BBB47C2BF9B0862F669103A17601EA33A98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = GetComponent<Text>();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854(__this, /*hidden argument*/Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854_RuntimeMethod_var);
		__this->set_text_7(L_0);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.PercentRenderer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PercentRenderer_FixedUpdate_m5F4E73E80BBC1C9ED5817055F1FE4FE0429C519A (PercentRenderer_t3BE379B6C5295134E4AEAA220795BFFE7BBB4DCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PercentRenderer_FixedUpdate_m5F4E73E80BBC1C9ED5817055F1FE4FE0429C519A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text.text = string.Format(pattern, Mathf.FloorToInt(100 * number.Value / maxNumber.Value));
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_text_7();
		String_t* L_1 = __this->get_pattern_4();
		Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * L_2 = __this->get_number_5();
		NullCheck(L_2);
		float L_3 = L_2->get_Value_4();
		Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * L_4 = __this->get_maxNumber_6();
		NullCheck(L_4);
		float L_5 = L_4->get_Value_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_6 = Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C(((float)((float)((float)il2cpp_codegen_multiply((float)(100.0f), (float)L_3))/(float)L_5)), /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(L_1, L_8, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_9);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.PercentRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PercentRenderer__ctor_m564B450FAF6BDE24B49D54A9A575F50048B6159B (PercentRenderer_t3BE379B6C5295134E4AEAA220795BFFE7BBB4DCE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LopapaGames.Components.SFXPlayer::Play(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SFXPlayer_Play_mEB6A958FB7F3A54ADDB30D118C0526BD94A09FC8 (SFXPlayer_tA70F3C3AA7F5419DB97FD74E5FA4E02DB00D6189 * __this, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___audioSource0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SFXPlayer_Play_mEB6A958FB7F3A54ADDB30D118C0526BD94A09FC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sfx.Length > 0)
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_0 = __this->get_sfx_4();
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_001a;
		}
	}
	{
		// SoundManager.Instance.PlaySfx(audioSource, sfx);
		SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 * L_1 = Singleton_1_get_Instance_m1D4E1196E54DAB0203431EC8B125E19EE6865336(/*hidden argument*/Singleton_1_get_Instance_m1D4E1196E54DAB0203431EC8B125E19EE6865336_RuntimeMethod_var);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_2 = ___audioSource0;
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_3 = __this->get_sfx_4();
		NullCheck(L_1);
		SoundManager_PlaySfx_m0027384C9919E9C47F5527A392FD22D8120F184D(L_1, L_2, L_3, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void LopapaGames.Components.SFXPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SFXPlayer_Play_m7E5053B63A6A9002F1D6CCB76CE61E916CD86233 (SFXPlayer_tA70F3C3AA7F5419DB97FD74E5FA4E02DB00D6189 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SFXPlayer_Play_m7E5053B63A6A9002F1D6CCB76CE61E916CD86233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sfx.Length > 0)
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_0 = __this->get_sfx_4();
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0019;
		}
	}
	{
		// SoundManager.Instance.PlaySfx(sfx);
		SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 * L_1 = Singleton_1_get_Instance_m1D4E1196E54DAB0203431EC8B125E19EE6865336(/*hidden argument*/Singleton_1_get_Instance_m1D4E1196E54DAB0203431EC8B125E19EE6865336_RuntimeMethod_var);
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_2 = __this->get_sfx_4();
		NullCheck(L_1);
		SoundManager_PlaySfx_m2250F3183CE706ABA4C9105AC6CA7C5303EE24D1(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void LopapaGames.Components.SFXPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SFXPlayer__ctor_m4CA6D29F0D6C38FADDFA01FF0379859C4338B656 (SFXPlayer_tA70F3C3AA7F5419DB97FD74E5FA4E02DB00D6189 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LopapaGames.Components.Shredder2DController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shredder2DController_OnTriggerEnter2D_m120C382D6A3F5A8EC90EDBFB3DF2BFD179B1EC9E (Shredder2DController_tE33B3E16E40AA9A62FCA844DC50A7D784F9B5A73 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shredder2DController_OnTriggerEnter2D_m120C382D6A3F5A8EC90EDBFB3DF2BFD179B1EC9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(collision.gameObject);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.Shredder2DController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shredder2DController__ctor_mAD5F691E29DE0658AE78CC146579F5C573DAB76A (Shredder2DController_tE33B3E16E40AA9A62FCA844DC50A7D784F9B5A73 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LopapaGames.Components.SimpleBulletController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleBulletController_OnTriggerEnter2D_m6447F1B2F276EBCD1A8F56001E6BC3DCBD916848 (SimpleBulletController_t13C12520ACBBB3D708AC3BE4E705F40962B9AAA2 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleBulletController_OnTriggerEnter2D_m6447F1B2F276EBCD1A8F56001E6BC3DCBD916848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_4 = NULL;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	{
		// bool hitSomenthing = false;
		V_0 = (bool)0;
		// foreach (string tagName in Targets)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = __this->get_Targets_4();
		V_1 = L_0;
		V_2 = 0;
		goto IL_0078;
	}

IL_000d:
	{
		// foreach (string tagName in Targets)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// if (collision.tag == tagName)
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_5 = ___collision0;
		NullCheck(L_5);
		String_t* L_6 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_5, /*hidden argument*/NULL);
		String_t* L_7 = V_3;
		bool L_8 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		// collision.gameObject.SendMessage(AddDamageMethod, damage);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_9 = ___collision0;
		NullCheck(L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_9, /*hidden argument*/NULL);
		String_t* L_11 = __this->get_AddDamageMethod_5();
		float L_12 = __this->get_damage_6();
		float L_13 = L_12;
		RuntimeObject * L_14 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		GameObject_SendMessage_mAF014F12A3B807BC435571585D4DD34FA89EC28E(L_10, L_11, L_14, /*hidden argument*/NULL);
		// hitSomenthing = true;
		V_0 = (bool)1;
		// if (TriggerEvent)
		bool L_15 = __this->get_TriggerEvent_8();
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		// foreach (string EventName in EventsNames)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = __this->get_EventsNames_9();
		V_4 = L_16;
		V_5 = 0;
		goto IL_006c;
	}

IL_0052:
	{
		// foreach (string EventName in EventsNames)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = V_4;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		String_t* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		// gameObject.SendMessage(EventName);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		String_t* L_22 = V_6;
		NullCheck(L_21);
		GameObject_SendMessage_m9A7BE015CC1472A59F1077CADFB22AD67F8722D9(L_21, L_22, /*hidden argument*/NULL);
		int32_t L_23 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_006c:
	{
		// foreach (string EventName in EventsNames)
		int32_t L_24 = V_5;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = V_4;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))))
		{
			goto IL_0052;
		}
	}

IL_0074:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0078:
	{
		// foreach (string tagName in Targets)
		int32_t L_27 = V_2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		// if (hitSomenthing && destroyOnHit)
		bool L_29 = V_0;
		if (!L_29)
		{
			goto IL_0094;
		}
	}
	{
		bool L_30 = __this->get_destroyOnHit_7();
		if (!L_30)
		{
			goto IL_0094;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_31, /*hidden argument*/NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void LopapaGames.Components.SimpleBulletController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleBulletController__ctor_m9F912490D93880FFCBFA564577B0F0FE06A6118F (SimpleBulletController_t13C12520ACBBB3D708AC3BE4E705F40962B9AAA2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LopapaGames.Components.SimpleConsumable::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleConsumable_OnTriggerEnter2D_mC202DCCE17626FF0B1DC21549193E4FF0498F886 (SimpleConsumable_t6ED322F192DD7F051913364ED8FFE9764AD3956C * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleConsumable_OnTriggerEnter2D_mC202DCCE17626FF0B1DC21549193E4FF0498F886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// bool hitSomenthing = false;
		V_0 = (bool)0;
		// foreach (string tagName in Targets)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = __this->get_Targets_4();
		V_1 = L_0;
		V_2 = 0;
		goto IL_005a;
	}

IL_000d:
	{
		// foreach (string tagName in Targets)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// if (collision.tag == tagName)
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_5 = ___collision0;
		NullCheck(L_5);
		String_t* L_6 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_5, /*hidden argument*/NULL);
		String_t* L_7 = V_3;
		bool L_8 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		// collision.gameObject.SendMessage(ConsumeMethod, value);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_9 = ___collision0;
		NullCheck(L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_9, /*hidden argument*/NULL);
		String_t* L_11 = __this->get_ConsumeMethod_5();
		float L_12 = __this->get_value_6();
		float L_13 = L_12;
		RuntimeObject * L_14 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		GameObject_SendMessage_mAF014F12A3B807BC435571585D4DD34FA89EC28E(L_10, L_11, L_14, /*hidden argument*/NULL);
		// hitSomenthing = true;
		V_0 = (bool)1;
		// if (onConsumeClips.Length > 0)
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_15 = __this->get_onConsumeClips_8();
		NullCheck(L_15);
		if (!(((RuntimeArray*)L_15)->max_length))
		{
			goto IL_0056;
		}
	}
	{
		// SoundManager.Instance.PlaySfx(onConsumeClips);
		SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 * L_16 = Singleton_1_get_Instance_m1D4E1196E54DAB0203431EC8B125E19EE6865336(/*hidden argument*/Singleton_1_get_Instance_m1D4E1196E54DAB0203431EC8B125E19EE6865336_RuntimeMethod_var);
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_17 = __this->get_onConsumeClips_8();
		NullCheck(L_16);
		SoundManager_PlaySfx_m2250F3183CE706ABA4C9105AC6CA7C5303EE24D1(L_16, L_17, /*hidden argument*/NULL);
	}

IL_0056:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005a:
	{
		// foreach (string tagName in Targets)
		int32_t L_19 = V_2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = V_1;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		// if (hitSomenthing && destroyOnHit)
		bool L_21 = V_0;
		if (!L_21)
		{
			goto IL_0076;
		}
	}
	{
		bool L_22 = __this->get_destroyOnHit_7();
		if (!L_22)
		{
			goto IL_0076;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_23, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void LopapaGames.Components.SimpleConsumable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleConsumable__ctor_m498D8A1E124934655C6DEC3C9D93D6970C893BC0 (SimpleConsumable_t6ED322F192DD7F051913364ED8FFE9764AD3956C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LopapaGames.Components.SliderMinMaxReader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderMinMaxReader_Start_m1A7DA8411EC8072D4D2340067A7B807BA5AC32D7 (SliderMinMaxReader_t0B27198D6777539FAF1FC1946820F4B21BF921C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SliderMinMaxReader_Start_m1A7DA8411EC8072D4D2340067A7B807BA5AC32D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider = GetComponent<Slider>();
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_0 = Component_GetComponent_TisSlider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09_m807D3ABE78D8980C34391517EA87ED002388DE51(__this, /*hidden argument*/Component_GetComponent_TisSlider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09_m807D3ABE78D8980C34391517EA87ED002388DE51_RuntimeMethod_var);
		__this->set_slider_5(L_0);
		// slider.minValue = playerHp.minValue;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_1 = __this->get_slider_5();
		MinMaxValues_t8B6272A6D82D7358320D25E82A5F807C8C3F9A65 * L_2 = __this->get_playerHp_4();
		NullCheck(L_2);
		float L_3 = L_2->get_minValue_4();
		NullCheck(L_1);
		Slider_set_minValue_m795F45748FA2890925E28E87AB23EEC89E15756F(L_1, L_3, /*hidden argument*/NULL);
		// slider.maxValue = playerHp.maxValue;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_4 = __this->get_slider_5();
		MinMaxValues_t8B6272A6D82D7358320D25E82A5F807C8C3F9A65 * L_5 = __this->get_playerHp_4();
		NullCheck(L_5);
		float L_6 = L_5->get_maxValue_5();
		NullCheck(L_4);
		Slider_set_maxValue_m3517BF6A1127298F11582535887B6FE5AA7C57D3(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.SliderMinMaxReader::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderMinMaxReader_FixedUpdate_m87DEF66A84595BEE265037B3DFA7B2722BCA0CCA (SliderMinMaxReader_t0B27198D6777539FAF1FC1946820F4B21BF921C7 * __this, const RuntimeMethod* method)
{
	{
		// slider.value = playerHp.Value;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_0 = __this->get_slider_5();
		MinMaxValues_t8B6272A6D82D7358320D25E82A5F807C8C3F9A65 * L_1 = __this->get_playerHp_4();
		NullCheck(L_1);
		float L_2 = L_1->get_Value_6();
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.SliderMinMaxReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderMinMaxReader__ctor_m51FB5E6C5C77C9429C2362D90237FC4F790007F4 (SliderMinMaxReader_t0B27198D6777539FAF1FC1946820F4B21BF921C7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LopapaGames.Components.SoundManager::PlaySfx(UnityEngine.AudioSource,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySfx_m8AEFC2AAC716F852D622224518C924E8C63AAC86 (SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 * __this, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___src0, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip1, const RuntimeMethod* method)
{
	{
		// if (!IsSfxOn.Value)
		Boolean_tE84EB495B06C39F7AD1F88525FD372D1B435C2FF * L_0 = __this->get_IsSfxOn_5();
		NullCheck(L_0);
		bool L_1 = L_0->get_Value_4();
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
		// src.clip = clip;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_2 = ___src0;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_3 = ___clip1;
		NullCheck(L_2);
		AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B(L_2, L_3, /*hidden argument*/NULL);
		// src.Play();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_4 = ___src0;
		NullCheck(L_4);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.SoundManager::PlaySfx(UnityEngine.AudioSource,UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySfx_m0027384C9919E9C47F5527A392FD22D8120F184D (SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 * __this, AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___src0, AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* ___clips1, const RuntimeMethod* method)
{
	{
		// this.PlaySfx(src, clips[Random.Range(0, clips.Length)]);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = ___src0;
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_1 = ___clips1;
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_2 = ___clips1;
		NullCheck(L_2);
		int32_t L_3 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_4 = L_3;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SoundManager_PlaySfx_m8AEFC2AAC716F852D622224518C924E8C63AAC86(__this, L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.SoundManager::PlaySfx(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySfx_m2705D5DB81CC76932C7B71C18EE78FF90EFC7398 (SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, const RuntimeMethod* method)
{
	{
		// this.PlaySfx(this.defaultSFXAudioSource, clip);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = __this->get_defaultSFXAudioSource_6();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_1 = ___clip0;
		SoundManager_PlaySfx_m8AEFC2AAC716F852D622224518C924E8C63AAC86(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.SoundManager::PlaySfx(UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySfx_m2250F3183CE706ABA4C9105AC6CA7C5303EE24D1 (SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 * __this, AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* ___clips0, const RuntimeMethod* method)
{
	{
		// this.PlaySfx(this.defaultSFXAudioSource, clips);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = __this->get_defaultSFXAudioSource_6();
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_1 = ___clips0;
		SoundManager_PlaySfx_m0027384C9919E9C47F5527A392FD22D8120F184D(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m0D89E9EEFBBBA8F0F99091770F60EAABEC0CF041 (SoundManager_t8A96A47570D911ED7825AD2369E358BA93815F70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager__ctor_m0D89E9EEFBBBA8F0F99091770F60EAABEC0CF041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_mF79C747891493002787DFB94D876CF178D0ED14D(__this, /*hidden argument*/Singleton_1__ctor_mF79C747891493002787DFB94D876CF178D0ED14D_RuntimeMethod_var);
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
// System.Void LopapaGames.Components.SpawnerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerController_Start_mF3AE8CD2EE4AB123354A021505FDADECFB9D556A (SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpawnerController_Start_mF3AE8CD2EE4AB123354A021505FDADECFB9D556A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B * G_B4_0 = NULL;
	SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B * G_B3_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B5_0 = NULL;
	SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B * G_B5_1 = NULL;
	{
		// if(CooldownManager == null){
		CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * L_0 = __this->get_CooldownManager_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// this.CooldownManager = this.gameObject.AddComponent<CooldownManager>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * L_3 = GameObject_AddComponent_TisCooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C_m9C4E12C14F03699894319F5542DCB6FDC6CBD579(L_2, /*hidden argument*/GameObject_AddComponent_TisCooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C_m9C4E12C14F03699894319F5542DCB6FDC6CBD579_RuntimeMethod_var);
		__this->set_CooldownManager_13(L_3);
	}

IL_001f:
	{
		// this.CooldownManager.AddTimer(this.spawnEvent, startAt);
		CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * L_4 = __this->get_CooldownManager_13();
		String_t* L_5 = __this->get_spawnEvent_14();
		float L_6 = __this->get_startAt_5();
		NullCheck(L_4);
		CooldownManager_AddTimer_m183D92D65CA1F0901B3F3B7A1C2939863A50D247(L_4, L_5, L_6, /*hidden argument*/NULL);
		// _parent = parentSelf ? transform : objectParent;
		bool L_7 = __this->get_parentSelf_7();
		G_B3_0 = __this;
		if (L_7)
		{
			G_B4_0 = __this;
			goto IL_0047;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = __this->get_objectParent_8();
		G_B5_0 = L_8;
		G_B5_1 = G_B3_0;
		goto IL_004d;
	}

IL_0047:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		G_B5_0 = L_9;
		G_B5_1 = G_B4_0;
	}

IL_004d:
	{
		NullCheck(G_B5_1);
		G_B5_1->set__parent_10(G_B5_0);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.SpawnerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerController_Update_m83ABBBFA32B2BAB50F8910D2CA3AD7A58F965EFC (SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpawnerController_Update_m83ABBBFA32B2BAB50F8910D2CA3AD7A58F965EFC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (totalSpawnCount > 0 && _totalSpawned >= totalSpawnCount) {
		int32_t L_0 = __this->get_totalSpawnCount_9();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = __this->get__totalSpawned_11();
		int32_t L_2 = __this->get_totalSpawnCount_9();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_3, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0023:
	{
		// if (IsAutomatic && this.CooldownManager.GetTimer(spawnEvent) <= 0)
		bool L_4 = __this->get_IsAutomatic_12();
		if (!L_4)
		{
			goto IL_006e;
		}
	}
	{
		CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * L_5 = __this->get_CooldownManager_13();
		String_t* L_6 = __this->get_spawnEvent_14();
		NullCheck(L_5);
		float L_7 = CooldownManager_GetTimer_mBB5D1BC32EB5391B905D398CB820299D49C07D27(L_5, L_6, /*hidden argument*/NULL);
		if ((!(((float)L_7) <= ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		// Spawn();
		SpawnerController_Spawn_m60234C85F9C8D7DBAF14AD97A24B78BB3534E9AE(__this, /*hidden argument*/NULL);
		// this.CooldownManager.AddTimer(spawnEvent, delay);
		CooldownManager_t40DB297AFAC69368E60603FD7D70C05483CBBD7C * L_8 = __this->get_CooldownManager_13();
		String_t* L_9 = __this->get_spawnEvent_14();
		float L_10 = __this->get_delay_6();
		NullCheck(L_8);
		CooldownManager_AddTimer_m183D92D65CA1F0901B3F3B7A1C2939863A50D247(L_8, L_9, L_10, /*hidden argument*/NULL);
		// _totalSpawned++;
		int32_t L_11 = __this->get__totalSpawned_11();
		__this->set__totalSpawned_11(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void LopapaGames.Components.SpawnerController::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerController_Spawn_m60234C85F9C8D7DBAF14AD97A24B78BB3534E9AE (SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpawnerController_Spawn_m60234C85F9C8D7DBAF14AD97A24B78BB3534E9AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// GameObject spawned = Spawner.Spawn(_parent, transform.position, Quaternion.identity);
		Spawner_t0892435E0F6539E08C72391A879086340B2106CB * L_0 = __this->get_Spawner_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = __this->get__parent_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Spawner_Spawn_mD5D8B5DC63EB89E8441F7B405FBFC847F4597215(L_0, L_1, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// Notify(spawned);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		SpawnerController_Notify_m12C23D658201B22A54796990A76DA62C51EE78AF(__this, L_6, /*hidden argument*/NULL);
		// SendMessage("Spawned", spawned, SendMessageOptions.DontRequireReceiver);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_0;
		Component_SendMessage_m5F9746707394086235E11ED0DBB1C55C231AB606(__this, _stringLiteralCD5D730D5309072864F777A82C95CBFF0FD99EF6, L_7, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.SpawnerController::Notify(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerController_Notify_m12C23D658201B22A54796990A76DA62C51EE78AF (SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___spawned0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpawnerController_Notify_m12C23D658201B22A54796990A76DA62C51EE78AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameEvent)
		GameEvent_tE7932EF83316ECE53C2CF6A039BDA773CD3A7FB6 * L_0 = __this->get_GameEvent_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// GameEvent.Raise();
		GameEvent_tE7932EF83316ECE53C2CF6A039BDA773CD3A7FB6 * L_2 = __this->get_GameEvent_15();
		NullCheck(L_2);
		GameEvent_Raise_m411B19543D8D38F300A9CEA70B221F21A3D7D99F(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void LopapaGames.Components.SpawnerController::Perform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerController_Perform_mD6AC26AD7AF51A7D5609DC8DACA03F8CB1D49431 (SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B * __this, const RuntimeMethod* method)
{
	{
		// Spawn();
		SpawnerController_Spawn_m60234C85F9C8D7DBAF14AD97A24B78BB3534E9AE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.SpawnerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerController__ctor_m394300C27F0B90ECE863CF53CDF261E4F8368C3E (SpawnerController_t43D762C7ACA7B0E853C2D3AF69558B7ACEF3B73B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpawnerController__ctor_m394300C27F0B90ECE863CF53CDF261E4F8368C3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool parentSelf = true;
		__this->set_parentSelf_7((bool)1);
		// public bool IsAutomatic = true;
		__this->set_IsAutomatic_12((bool)1);
		// private string spawnEvent = "spawn";
		__this->set_spawnEvent_14(_stringLiteral6227120AB7544133388A6529A55E3C3AA773B62A);
		ActionableMonobehavior__ctor_mD3EFD6A7E2A7CAD801A5D561F2D906A863A8A164(__this, /*hidden argument*/NULL);
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
// System.Void LopapaGames.Components.TimerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_Start_mB65F5F212A34BB58DE1638A38505BD5C167C645B (TimerController_t01824A538CD8C68CEFF3F86CD5124929B3707839 * __this, const RuntimeMethod* method)
{
	{
		// number.Value = Time.time;
		Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * L_0 = __this->get_number_4();
		float L_1 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_Value_4(L_1);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.TimerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_Update_mDE2A334F68110CF04213B089C805CDDF941E3DF2 (TimerController_t01824A538CD8C68CEFF3F86CD5124929B3707839 * __this, const RuntimeMethod* method)
{
	{
		// number.Value = Time.time;
		Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * L_0 = __this->get_number_4();
		float L_1 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_Value_4(L_1);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.TimerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController__ctor_mE4ED0301A6941987C7769C354B9926148762C9DA (TimerController_t01824A538CD8C68CEFF3F86CD5124929B3707839 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LopapaGames.Components.TimerRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerRenderer_Start_mFB749C79CBBE4052E944A1B0E890E5219F82EB2B (TimerRenderer_t4CF755643D45B81CB0AE8A2EC9B2334D92B59523 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerRenderer_Start_mFB749C79CBBE4052E944A1B0E890E5219F82EB2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = GetComponent<Text>();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854(__this, /*hidden argument*/Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854_RuntimeMethod_var);
		__this->set_text_5(L_0);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.TimerRenderer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerRenderer_FixedUpdate_m77BA26B2CA792E59E5A80A123CC46F035D62BEB8 (TimerRenderer_t4CF755643D45B81CB0AE8A2EC9B2334D92B59523 * __this, const RuntimeMethod* method)
{
	{
		// text.text = string.Format(pattern, GetTimeValue(TimerValue.Hours), GetTimeValue(TimerValue.Minutes), GetTimeValue(TimerValue.Seconds));
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_text_5();
		String_t* L_1 = __this->get_pattern_4();
		TimerValue_t8973F09AEB9AB7292071EE1485C67769E159B193 * L_2 = __this->get_TimerValue_6();
		NullCheck(L_2);
		float L_3 = L_2->get_Hours_4();
		String_t* L_4 = TimerRenderer_GetTimeValue_mA53A2D03198C6B095E2B0D854155FC5403E418CD(__this, L_3, /*hidden argument*/NULL);
		TimerValue_t8973F09AEB9AB7292071EE1485C67769E159B193 * L_5 = __this->get_TimerValue_6();
		NullCheck(L_5);
		float L_6 = L_5->get_Minutes_5();
		String_t* L_7 = TimerRenderer_GetTimeValue_mA53A2D03198C6B095E2B0D854155FC5403E418CD(__this, L_6, /*hidden argument*/NULL);
		TimerValue_t8973F09AEB9AB7292071EE1485C67769E159B193 * L_8 = __this->get_TimerValue_6();
		NullCheck(L_8);
		float L_9 = L_8->get_Seconds_6();
		String_t* L_10 = TimerRenderer_GetTimeValue_mA53A2D03198C6B095E2B0D854155FC5403E418CD(__this, L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(L_1, L_4, L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_11);
		// }
		return;
	}
}
// System.String LopapaGames.Components.TimerRenderer::GetTimeValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimerRenderer_GetTimeValue_mA53A2D03198C6B095E2B0D854155FC5403E418CD (TimerRenderer_t4CF755643D45B81CB0AE8A2EC9B2334D92B59523 * __this, float ___timerValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerRenderer_GetTimeValue_mA53A2D03198C6B095E2B0D854155FC5403E418CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// timerValue = Mathf.Floor(timerValue);
		float L_0 = ___timerValue0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = floorf(L_0);
		___timerValue0 = L_1;
		// string value = timerValue.ToString();
		String_t* L_2 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)(&___timerValue0), /*hidden argument*/NULL);
		V_0 = L_2;
		// if (UseDoubleZero && timerValue<=9)
		bool L_3 = __this->get_UseDoubleZero_7();
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		float L_4 = ___timerValue0;
		if ((!(((float)L_4) <= ((float)(9.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		// value = "0" + value;
		String_t* L_5 = V_0;
		String_t* L_6 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_002c:
	{
		// return value;
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.Void LopapaGames.Components.TimerRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerRenderer__ctor_m98DBCFD64BEBC214D1457922D45A951D3677E4FE (TimerRenderer_t4CF755643D45B81CB0AE8A2EC9B2334D92B59523 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseDoubleZero = true;
		__this->set_UseDoubleZero_7((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void LopapaGames.Components.ValueRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueRenderer_Start_mBDB25DED4EACDDAFE79B3DF7A810B2F11A01D9DC (ValueRenderer_tCC31B4129D924CB2A52B761169B33EA3FFB02614 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueRenderer_Start_mBDB25DED4EACDDAFE79B3DF7A810B2F11A01D9DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = GetComponent<Text>();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854(__this, /*hidden argument*/Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854_RuntimeMethod_var);
		__this->set_text_6(L_0);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.ValueRenderer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueRenderer_FixedUpdate_mB48EB74DA1632B4C654E377C3778A3A71F66C4D2 (ValueRenderer_tCC31B4129D924CB2A52B761169B33EA3FFB02614 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueRenderer_FixedUpdate_mB48EB74DA1632B4C654E377C3778A3A71F66C4D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text.text = string.Format(pattern, number.Value);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_text_6();
		String_t* L_1 = __this->get_pattern_4();
		Float_t8EC9CC5CA054C2625ECD28787BEB24458A2D07B5 * L_2 = __this->get_number_5();
		NullCheck(L_2);
		float L_3 = L_2->get_Value_4();
		float L_4 = L_3;
		RuntimeObject * L_5 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(L_1, L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_6);
		// }
		return;
	}
}
// System.Void LopapaGames.Components.ValueRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueRenderer__ctor_m650CE6D2589E87842DCCF68B4C414FC4B5DD36CF (ValueRenderer_tCC31B4129D924CB2A52B761169B33EA3FFB02614 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
