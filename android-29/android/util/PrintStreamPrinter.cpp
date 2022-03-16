#include "../../java/io/PrintStream.hpp"
#include "../../JString.hpp"
#include "./PrintStreamPrinter.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	PrintStreamPrinter::PrintStreamPrinter(java::io::PrintStream arg0)
		: JObject(
			"android.util.PrintStreamPrinter",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		) {}
	
	// Methods
	void PrintStreamPrinter::println(JString arg0) const
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::util

