#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../util/AndroidRuntimeException.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::android::app
{
	class Fragment_InstantiationException : public __jni_impl::android::util::AndroidRuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::java::lang::Exception arg1);
		void __constructor(const QString &arg0, __jni_impl::java::lang::Exception arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::app

#include "../../java/lang/Exception.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Fragment_InstantiationException::__constructor(jstring arg0, __jni_impl::java::lang::Exception arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.Fragment$InstantiationException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Fragment_InstantiationException::__constructor(const QString &arg0, __jni_impl::java::lang::Exception arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.Fragment$InstantiationException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::app

namespace android::app
{
	class Fragment_InstantiationException : public __jni_impl::android::app::Fragment_InstantiationException
	{
	public:
		Fragment_InstantiationException(QAndroidJniObject obj) { __thiz = obj; }
		Fragment_InstantiationException(jstring arg0, __jni_impl::java::lang::Exception arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app

