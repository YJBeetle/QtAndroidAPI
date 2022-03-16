#pragma once

#include "./ConditionVariable.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline ConditionVariable::ConditionVariable()
		: JObject(
			"android.os.ConditionVariable",
			"()V"
		) {}
	inline ConditionVariable::ConditionVariable(jboolean arg0)
		: JObject(
			"android.os.ConditionVariable",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	inline jboolean ConditionVariable::block(jlong arg0) const
	{
		return callMethod<jboolean>(
			"block",
			"(J)Z",
			arg0
		);
	}
	inline void ConditionVariable::block() const
	{
		callMethod<void>(
			"block",
			"()V"
		);
	}
	inline void ConditionVariable::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void ConditionVariable::open() const
	{
		callMethod<void>(
			"open",
			"()V"
		);
	}
} // namespace android::os

// Base class headers

