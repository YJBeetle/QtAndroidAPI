#include "../../java/io/PrintStream.hpp"
#include "./PrintStreamPrinter.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	PrintStreamPrinter::PrintStreamPrinter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PrintStreamPrinter::PrintStreamPrinter(java::io::PrintStream arg0)
		: JObject(
			"android.util.PrintStreamPrinter",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		) {}
	
	// Methods
	void PrintStreamPrinter::println(jstring arg0)
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::util

