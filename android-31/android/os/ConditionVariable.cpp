#include "./ConditionVariable.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	ConditionVariable::ConditionVariable(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConditionVariable::ConditionVariable()
		: JObject(
			"android.os.ConditionVariable",
			"()V"
		) {}
	ConditionVariable::ConditionVariable(jboolean arg0)
		: JObject(
			"android.os.ConditionVariable",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	jboolean ConditionVariable::block(jlong arg0) const
	{
		return callMethod<jboolean>(
			"block",
			"(J)Z",
			arg0
		);
	}
	void ConditionVariable::block() const
	{
		callMethod<void>(
			"block",
			"()V"
		);
	}
	void ConditionVariable::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ConditionVariable::open() const
	{
		callMethod<void>(
			"open",
			"()V"
		);
	}
} // namespace android::os

