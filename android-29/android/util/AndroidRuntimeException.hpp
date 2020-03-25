#pragma once

#ifndef ANDROID_UTIL_ANDROIDRUNTIMEEXCEPTION
#define ANDROID_UTIL_ANDROIDRUNTIMEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::android::util
{
	class AndroidRuntimeException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::lang::Exception arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::util

#include "../../java/lang/Exception.hpp"

namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void AndroidRuntimeException::__constructor(__jni_impl::java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidRuntimeException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object());
	}
	void AndroidRuntimeException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidRuntimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void AndroidRuntimeException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidRuntimeException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void AndroidRuntimeException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidRuntimeException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class AndroidRuntimeException : public __jni_impl::android::util::AndroidRuntimeException
	{
	public:
		AndroidRuntimeException(QAndroidJniObject obj) { __thiz = obj; }
		AndroidRuntimeException(__jni_impl::java::lang::Exception arg0)
		{
			__constructor(
				arg0);
		}
		AndroidRuntimeException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AndroidRuntimeException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		AndroidRuntimeException()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_ANDROIDRUNTIMEEXCEPTION

