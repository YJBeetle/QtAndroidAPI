#include "../../java/io/PrintWriter.hpp"
#include "./PrintWriterPrinter.hpp"

namespace android::util
{
	// Fields
	
	PrintWriterPrinter::PrintWriterPrinter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PrintWriterPrinter::PrintWriterPrinter(java::io::PrintWriter arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.PrintWriterPrinter",
			"(Ljava/io/PrintWriter;)V",
			arg0.__jniObject().object()
		);
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
} // namespace android::util

