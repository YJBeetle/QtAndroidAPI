#pragma once

#ifndef ANDROID_OS_BADPARCELABLEEXCEPTION
#define ANDROID_OS_BADPARCELABLEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../util/AndroidRuntimeException.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::android::os
{
	class BadParcelableException : public __jni_impl::android::util::AndroidRuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::java::lang::Exception arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::os

#include "../../java/lang/Exception.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void BadParcelableException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.BadParcelableException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BadParcelableException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.BadParcelableException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void BadParcelableException::__constructor(__jni_impl::java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.BadParcelableException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::os

namespace android::os
{
	class BadParcelableException : public __jni_impl::android::os::BadParcelableException
	{
	public:
		BadParcelableException(QAndroidJniObject obj) { __thiz = obj; }
		BadParcelableException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		BadParcelableException(__jni_impl::java::lang::Exception arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_BADPARCELABLEEXCEPTION

