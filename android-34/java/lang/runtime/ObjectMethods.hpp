#pragma once

#include "../../../JArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../invoke/MethodHandle.def.hpp"
#include "../invoke/MethodHandles_Lookup.def.hpp"
#include "../invoke/MethodType.def.hpp"
#include "../../util/HashMap.def.hpp"
#include "./ObjectMethods.def.hpp"

namespace java::lang::runtime
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject ObjectMethods::bootstrap(java::lang::invoke::MethodHandles_Lookup arg0, JString arg1, JObject arg2, JClass arg3, JString arg4, JArray arg5)
	{
		return callStaticObjectMethod(
			"java.lang.runtime.ObjectMethods",
			"bootstrap",
			"(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/TypeDescriptor;Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/invoke/MethodHandle;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object<jclass>(),
			arg4.object<jstring>(),
			arg5.object<jarray>()
		);
	}
} // namespace java::lang::runtime

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::runtime;
#endif
