#pragma once

#include "./Debug_InstructionCount.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline Debug_InstructionCount::Debug_InstructionCount()
		: JObject(
			"android.os.Debug$InstructionCount",
			"()V"
		) {}
	
	// Methods
	inline jboolean Debug_InstructionCount::collect() const
	{
		return callMethod<jboolean>(
			"collect",
			"()Z"
		);
	}
	inline jint Debug_InstructionCount::globalMethodInvocations() const
	{
		return callMethod<jint>(
			"globalMethodInvocations",
			"()I"
		);
	}
	inline jint Debug_InstructionCount::globalTotal() const
	{
		return callMethod<jint>(
			"globalTotal",
			"()I"
		);
	}
	inline jboolean Debug_InstructionCount::resetAndStart() const
	{
		return callMethod<jboolean>(
			"resetAndStart",
			"()Z"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
