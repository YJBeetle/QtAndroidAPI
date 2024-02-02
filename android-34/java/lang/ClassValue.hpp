#pragma once

#include "../../JArray.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../util/concurrent/atomic/AtomicInteger.def.hpp"
#include "./ClassValue.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject ClassValue::get(JClass arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.object<jclass>()
		);
	}
	inline void ClassValue::remove(JClass arg0) const
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/Class;)V",
			arg0.object<jclass>()
		);
	}
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
