#include "./Debug_InstructionCount.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	Debug_InstructionCount::Debug_InstructionCount(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Debug_InstructionCount::Debug_InstructionCount()
		: JObject(
			"android.os.Debug$InstructionCount",
			"()V"
		) {}
	
	// Methods
	jboolean Debug_InstructionCount::collect()
	{
		return callMethod<jboolean>(
			"collect",
			"()Z"
		);
	}
	jint Debug_InstructionCount::globalMethodInvocations()
	{
		return callMethod<jint>(
			"globalMethodInvocations",
			"()I"
		);
	}
	jint Debug_InstructionCount::globalTotal()
	{
		return callMethod<jint>(
			"globalTotal",
			"()I"
		);
	}
	jboolean Debug_InstructionCount::resetAndStart()
	{
		return callMethod<jboolean>(
			"resetAndStart",
			"()Z"
		);
	}
} // namespace android::os

