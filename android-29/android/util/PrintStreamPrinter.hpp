#pragma once

#ifndef ANDROID_UTIL_PRINTSTREAMPRINTER
#define ANDROID_UTIL_PRINTSTREAMPRINTER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class PrintStream;
}

namespace __jni_impl::android::util
{
	class PrintStreamPrinter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::PrintStream arg0);
		
		// Methods
		void println(jstring arg0);
		void println(const QString &arg0);
	};
} // namespace __jni_impl::android::util

#include "../../java/io/PrintStream.hpp"

namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void PrintStreamPrinter::__constructor(__jni_impl::java::io::PrintStream arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.PrintStreamPrinter",
			"(Ljava/io/PrintStream;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void PrintStreamPrinter::println(jstring arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PrintStreamPrinter::println(const QString &arg0)
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
	class PrintStreamPrinter : public __jni_impl::android::util::PrintStreamPrinter
	{
	public:
		PrintStreamPrinter(QAndroidJniObject obj) { __thiz = obj; }
		PrintStreamPrinter(__jni_impl::java::io::PrintStream arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_PRINTSTREAMPRINTER

