#pragma once

#ifndef ANDROID_RENDERSCRIPT_RSRUNTIMEEXCEPTION
#define ANDROID_RENDERSCRIPT_RSRUNTIMEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::renderscript
{
	class RSRuntimeException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void RSRuntimeException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSRuntimeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RSRuntimeException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSRuntimeException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class RSRuntimeException : public __jni_impl::android::renderscript::RSRuntimeException
	{
	public:
		RSRuntimeException(QAndroidJniObject obj) { __thiz = obj; }
		RSRuntimeException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_RSRUNTIMEEXCEPTION

