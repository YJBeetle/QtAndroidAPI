#include "../../JString.hpp"
#include "./LogPrinter.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	LogPrinter::LogPrinter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LogPrinter::LogPrinter(jint arg0, JString arg1)
		: JObject(
			"android.util.LogPrinter",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	void LogPrinter::println(JString arg0) const
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::util

