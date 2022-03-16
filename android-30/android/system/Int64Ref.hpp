#pragma once

#include "../../JString.hpp"
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
	inline JString Int64Ref::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::system

// Base class headers

