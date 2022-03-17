#pragma once

#include "./Int64Ref.def.hpp"

namespace android::system
{
	// Fields
	inline jlong Int64Ref::value()
	{
		return getField<jlong>(
			"value"
		);
	}
	
	// Constructors
	inline Int64Ref::Int64Ref(jlong arg0)
		: JObject(
			"android.system.Int64Ref",
			"(J)V",
			arg0
		) {}
	
	// Methods
} // namespace android::system

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::system;
#endif
