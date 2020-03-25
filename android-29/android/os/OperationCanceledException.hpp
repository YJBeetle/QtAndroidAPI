#pragma once

#ifndef ANDROID_OS_OPERATIONCANCELEDEXCEPTION
#define ANDROID_OS_OPERATIONCANCELEDEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::os
{
	class OperationCanceledException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void OperationCanceledException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.OperationCanceledException",
			"()V");
	}
	void OperationCanceledException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.OperationCanceledException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::os

namespace android::os
{
	class OperationCanceledException : public __jni_impl::android::os::OperationCanceledException
	{
	public:
		OperationCanceledException(QAndroidJniObject obj) { __thiz = obj; }
		OperationCanceledException()
		{
			__constructor();
		}
		OperationCanceledException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_OPERATIONCANCELEDEXCEPTION

