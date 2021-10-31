#include "./ConditionVariable.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	ConditionVariable::ConditionVariable(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ConditionVariable::ConditionVariable()
		: __JniBaseClass(
			"android.os.ConditionVariable",
			"()V"
		) {}
	ConditionVariable::ConditionVariable(jboolean arg0)
		: __JniBaseClass(
			"android.os.ConditionVariable",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	jboolean ConditionVariable::block(jlong arg0)
	{
		return callMethod<jboolean>(
			"block",
			"(J)Z",
			arg0
		);
	}
	void ConditionVariable::block()
	{
		callMethod<void>(
			"block",
			"()V"
		);
	}
	void ConditionVariable::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ConditionVariable::open()
	{
		callMethod<void>(
			"open",
			"()V"
		);
	}
} // namespace android::os

