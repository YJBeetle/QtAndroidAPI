#include "../../java/io/PrintStream.hpp"
#include "./PrintStreamPrinter.hpp"

namespace android::util
{
	// Fields
	
	PrintStreamPrinter::PrintStreamPrinter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PrintStreamPrinter::PrintStreamPrinter(java::io::PrintStream arg0)
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
} // namespace android::util

