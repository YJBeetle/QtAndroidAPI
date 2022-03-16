#pragma once

#include "../../JObject.hpp"
#include "./DebugUtils.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean DebugUtils::isObjectSelected(JObject arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.DebugUtils",
			"isObjectSelected",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
} // namespace android::util

// Base class headers

