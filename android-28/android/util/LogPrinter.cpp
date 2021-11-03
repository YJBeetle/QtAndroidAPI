#include "./LogPrinter.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	LogPrinter::LogPrinter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LogPrinter::LogPrinter(jint arg0, jstring arg1)
		: JObject(
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

