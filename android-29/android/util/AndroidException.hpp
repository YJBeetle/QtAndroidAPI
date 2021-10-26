#pragma once

#ifndef ANDROID_UTIL_ANDROIDEXCEPTION
#define ANDROID_UTIL_ANDROIDEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::android::util
{
	class AndroidException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::lang::Exception arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::util

#include "../../java/lang/Exception.hpp"

namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void AndroidException::__constructor(__jni_impl::java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	void AndroidException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void AndroidException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void AndroidException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AndroidException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AndroidException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class AndroidException : public __jni_impl::android::util::AndroidException
	{
	public:
		AndroidException(QAndroidJniObject obj) { __thiz = obj; }
		AndroidException(__jni_impl::java::lang::Exception arg0)
		{
			__constructor(
				arg0);
		}
		AndroidException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AndroidException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		AndroidException()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_ANDROIDEXCEPTION

