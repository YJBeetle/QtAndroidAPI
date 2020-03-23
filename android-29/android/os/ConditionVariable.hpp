#pragma once

#ifndef ANDROID_OS_CONDITIONVARIABLE
#define ANDROID_OS_CONDITIONVARIABLE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class ConditionVariable : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jboolean arg0);
		
		// Methods
		void close();
		void open();
		void block();
		jboolean block(jlong arg0);
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void ConditionVariable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.ConditionVariable",
			"()V");
	}
	void ConditionVariable::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.ConditionVariable",
			"(Z)V",
			arg0);
	}
	
	// Methods
	void ConditionVariable::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	void ConditionVariable::open()
	{
		__thiz.callMethod<void>(
			"open",
			"()V");
	}
	void ConditionVariable::block()
	{
		__thiz.callMethod<void>(
			"block",
			"()V");
	}
	jboolean ConditionVariable::block(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"block",
			"(J)Z",
			arg0);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class ConditionVariable : public __jni_impl::android::os::ConditionVariable
	{
	public:
		ConditionVariable(QAndroidJniObject obj) { __thiz = obj; }
		ConditionVariable()
		{
			__constructor();
		}
		ConditionVariable(jboolean arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_CONDITIONVARIABLE

