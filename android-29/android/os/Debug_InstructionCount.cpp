#include "./Debug_InstructionCount.hpp"

namespace android::os
{
	// Fields
	
	Debug_InstructionCount::Debug_InstructionCount(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Debug_InstructionCount::Debug_InstructionCount()
	{
		__thiz = QAndroidJniObject(
			"android.os.Debug$InstructionCount",
			"()V"
		);
	}
	
	// Methods
	jboolean Debug_InstructionCount::collect()
	{
		return __thiz.callMethod<jboolean>(
			"collect",
			"()Z"
		);
	}
	jint Debug_InstructionCount::globalMethodInvocations()
	{
		return __thiz.callMethod<jint>(
			"globalMethodInvocations",
			"()I"
		);
	}
	jint Debug_InstructionCount::globalTotal()
	{
		return __thiz.callMethod<jint>(
			"globalTotal",
			"()I"
		);
	}
	jboolean Debug_InstructionCount::resetAndStart()
	{
		return __thiz.callMethod<jboolean>(
			"resetAndStart",
			"()Z"
		);
	}
} // namespace android::os

