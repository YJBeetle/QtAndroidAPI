#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class Debug_InstructionCount : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean collect();
		jint globalMethodInvocations();
		jint globalTotal();
		jboolean resetAndStart();
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void Debug_InstructionCount::__constructor()
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
} // namespace __jni_impl::android::os

namespace android::os
{
	class Debug_InstructionCount : public __jni_impl::android::os::Debug_InstructionCount
	{
	public:
		Debug_InstructionCount(QAndroidJniObject obj) { __thiz = obj; }
		Debug_InstructionCount()
		{
			__constructor();
		}
	};
} // namespace android::os

