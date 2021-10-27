#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "./RSRuntimeException.hpp"


namespace __jni_impl::android::renderscript
{
	class RSInvalidStateException : public __jni_impl::android::renderscript::RSRuntimeException
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
	void RSInvalidStateException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSInvalidStateException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RSInvalidStateException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSInvalidStateException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class RSInvalidStateException : public __jni_impl::android::renderscript::RSInvalidStateException
	{
	public:
		RSInvalidStateException(QAndroidJniObject obj) { __thiz = obj; }
		RSInvalidStateException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::renderscript

