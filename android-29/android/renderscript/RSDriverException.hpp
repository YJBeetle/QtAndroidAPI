#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "RSRuntimeException.hpp"


namespace __jni_impl::android::renderscript
{
	class RSDriverException : public __jni_impl::android::renderscript::RSRuntimeException
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
	void RSDriverException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSDriverException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RSDriverException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSDriverException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class RSDriverException : public __jni_impl::android::renderscript::RSDriverException
	{
	public:
		RSDriverException(QAndroidJniObject obj) { __thiz = obj; }
		RSDriverException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::renderscript

