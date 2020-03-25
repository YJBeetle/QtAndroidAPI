#pragma once

#ifndef ANDROID_SYSTEM_ERRNOEXCEPTION
#define ANDROID_SYSTEM_ERRNOEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace __jni_impl::android::system
{
	class ErrnoException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		jint errno();
		
		// Constructors
		void __constructor(jstring arg0, jint arg1);
		void __constructor(jstring arg0, jint arg1, jthrowable arg2);
		
		// Methods
		QAndroidJniObject getMessage();
	};
} // namespace __jni_impl::android::system


namespace __jni_impl::android::system
{
	// Fields
	jint ErrnoException::errno()
	{
		return __thiz.getField<jint>(
			"errno");
	}
	
	// Constructors
	void ErrnoException::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.system.ErrnoException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	void ErrnoException::__constructor(jstring arg0, jint arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"android.system.ErrnoException",
			"(Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	QAndroidJniObject ErrnoException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::system

namespace android::system
{
	class ErrnoException : public __jni_impl::android::system::ErrnoException
	{
	public:
		ErrnoException(QAndroidJniObject obj) { __thiz = obj; }
		ErrnoException(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ErrnoException(jstring arg0, jint arg1, jthrowable arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::system

#endif // ANDROID_SYSTEM_ERRNOEXCEPTION

