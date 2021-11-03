#include "../../java/io/PrintWriter.hpp"
#include "../../JString.hpp"
#include "./PrintWriterPrinter.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	PrintWriterPrinter::PrintWriterPrinter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PrintWriterPrinter::PrintWriterPrinter(java::io::PrintWriter arg0)
		: JObject(
			"android.util.PrintWriterPrinter",
			"(Ljava/io/PrintWriter;)V",
			arg0.object()
		) {}
	
	// Methods
	void PrintWriterPrinter::println(JString arg0)
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::util

