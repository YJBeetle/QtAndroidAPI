#include "./ConditionVariable.hpp"

namespace android::os
{
	// Fields
	
	ConditionVariable::ConditionVariable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConditionVariable::ConditionVariable()
	{
		__thiz = QAndroidJniObject(
			"android.os.ConditionVariable",
			"()V"
		);
	}
	ConditionVariable::ConditionVariable(jboolean &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.ConditionVariable",
			"(Z)V",
			arg0
		);
	}
	
	// Methods
	jboolean ConditionVariable::block(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"block",
			"(J)Z",
			arg0
		);
	}
	void ConditionVariable::block()
	{
		__thiz.callMethod<void>(
			"block",
			"()V"
		);
	}
	void ConditionVariable::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void ConditionVariable::open()
	{
		__thiz.callMethod<void>(
			"open",
			"()V"
		);
	}
} // namespace android::os

