#pragma once

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
		void __constructor(__jni_impl::java::lang::Exception arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::os

#include "../../java/lang/Exception.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void BadParcelableException::__constructor(__jni_impl::java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.BadParcelableException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
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
	
	// Methods
} // namespace __jni_impl::android::os

namespace android::os
{
	class BadParcelableException : public __jni_impl::android::os::BadParcelableException
	{
	public:
		BadParcelableException(QAndroidJniObject obj) { __thiz = obj; }
		BadParcelableException(__jni_impl::java::lang::Exception arg0)
		{
			__constructor(
				arg0);
		}
		BadParcelableException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

