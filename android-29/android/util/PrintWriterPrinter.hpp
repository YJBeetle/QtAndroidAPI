#pragma once

#ifndef ANDROID_UTIL_PRINTWRITERPRINTER
#define ANDROID_UTIL_PRINTWRITERPRINTER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class PrintWriter;
}

namespace __jni_impl::android::util
{
	class PrintWriterPrinter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::PrintWriter arg0);
		
		// Methods
		void println(jstring arg0);
	};
} // namespace __jni_impl::android::util

#include "../../java/io/PrintWriter.hpp"

namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void PrintWriterPrinter::__constructor(__jni_impl::java::io::PrintWriter arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.PrintWriterPrinter",
			"(Ljava/io/PrintWriter;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void PrintWriterPrinter::println(jstring arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class PrintWriterPrinter : public __jni_impl::android::util::PrintWriterPrinter
	{
	public:
		PrintWriterPrinter(QAndroidJniObject obj) { __thiz = obj; }
		PrintWriterPrinter(__jni_impl::java::io::PrintWriter arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_PRINTWRITERPRINTER

