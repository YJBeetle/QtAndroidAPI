#include "./LogPrinter.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	LogPrinter::LogPrinter(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LogPrinter::LogPrinter(jint arg0, jstring arg1)
		: __JniBaseClass(
			"android.util.LogPrinter",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void LogPrinter::println(jstring arg0)
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::util

