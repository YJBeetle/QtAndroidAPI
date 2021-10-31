#include "../../java/io/PrintWriter.hpp"
#include "./PrintWriterPrinter.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	PrintWriterPrinter::PrintWriterPrinter(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PrintWriterPrinter::PrintWriterPrinter(java::io::PrintWriter arg0)
		: __JniBaseClass(
			"android.util.PrintWriterPrinter",
			"(Ljava/io/PrintWriter;)V",
			arg0.object()
		) {}
	
	// Methods
	void PrintWriterPrinter::println(jstring arg0)
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::util

