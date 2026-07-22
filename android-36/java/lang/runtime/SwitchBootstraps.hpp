#pragma once

#include "../../../JArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../../JClass.hpp"
#include "../Enum.def.hpp"
#include "../Integer.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../invoke/CallSite.def.hpp"
#include "../invoke/MethodHandle.def.hpp"
#include "../invoke/MethodHandles_Lookup.def.hpp"
#include "../invoke/MethodType.def.hpp"
#include "./SwitchBootstraps.def.hpp"

namespace java::lang::runtime
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::lang::invoke::CallSite SwitchBootstraps::enumSwitch(java::lang::invoke::MethodHandles_Lookup arg0, JString arg1, java::lang::invoke::MethodType arg2, JObjectArray arg3)
	{
		return callStaticObjectMethod(
			"java.lang.runtime.SwitchBootstraps",
			"enumSwitch",
			"(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object<jobjectArray>()
		);
	}
	inline java::lang::invoke::CallSite SwitchBootstraps::typeSwitch(java::lang::invoke::MethodHandles_Lookup arg0, JString arg1, java::lang::invoke::MethodType arg2, JObjectArray arg3)
	{
		return callStaticObjectMethod(
			"java.lang.runtime.SwitchBootstraps",
			"typeSwitch",
			"(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object<jobjectArray>()
		);
	}
} // namespace java::lang::runtime

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::runtime;
#endif
