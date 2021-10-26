#pragma once

#ifndef ANDROID_RENDERSCRIPT_RSILLEGALARGUMENTEXCEPTION
#define ANDROID_RENDERSCRIPT_RSILLEGALARGUMENTEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "RSRuntimeException.hpp"


namespace __jni_impl::android::renderscript
{
	class RSIllegalArgumentException : public __jni_impl::android::renderscript::RSRuntimeException
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
	void RSIllegalArgumentException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSIllegalArgumentException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RSIllegalArgumentException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSIllegalArgumentException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class RSIllegalArgumentException : public __jni_impl::android::renderscript::RSIllegalArgumentException
	{
	public:
		RSIllegalArgumentException(QAndroidJniObject obj) { __thiz = obj; }
		RSIllegalArgumentException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_RSILLEGALARGUMENTEXCEPTION

