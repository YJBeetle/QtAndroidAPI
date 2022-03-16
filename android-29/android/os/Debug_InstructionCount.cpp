#include "./Debug_InstructionCount.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	Debug_InstructionCount::Debug_InstructionCount()
		: JObject(
			"android.os.Debug$InstructionCount",
			"()V"
		) {}
	
	// Methods
	jboolean Debug_InstructionCount::collect() const
	{
		return callMethod<jboolean>(
			"collect",
			"()Z"
		);
	}
	jint Debug_InstructionCount::globalMethodInvocations() const
	{
		return callMethod<jint>(
			"globalMethodInvocations",
			"()I"
		);
	}
	jint Debug_InstructionCount::globalTotal() const
	{
		return callMethod<jint>(
			"globalTotal",
			"()I"
		);
	}
	jboolean Debug_InstructionCount::resetAndStart() const
	{
		return callMethod<jboolean>(
			"resetAndStart",
			"()Z"
		);
	}
} // namespace android::os

