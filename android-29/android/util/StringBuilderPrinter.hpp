#pragma once

#ifndef ANDROID_UTIL_STRINGBUILDERPRINTER
#define ANDROID_UTIL_STRINGBUILDERPRINTER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class StringBuilder;
}

namespace __jni_impl::android::util
{
	class StringBuilderPrinter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::lang::StringBuilder arg0);
		
		// Methods
		void println(jstring arg0);
		void println(const QString &arg0);
	};
} // namespace __jni_impl::android::util

#include "../../java/lang/StringBuilder.hpp"

namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void StringBuilderPrinter::__constructor(__jni_impl::java::lang::StringBuilder arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.StringBuilderPrinter",
			"(Ljava/lang/StringBuilder;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void StringBuilderPrinter::println(jstring arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StringBuilderPrinter::println(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class StringBuilderPrinter : public __jni_impl::android::util::StringBuilderPrinter
	{
	public:
		StringBuilderPrinter(QAndroidJniObject obj) { __thiz = obj; }
		StringBuilderPrinter(__jni_impl::java::lang::StringBuilder arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_STRINGBUILDERPRINTER

