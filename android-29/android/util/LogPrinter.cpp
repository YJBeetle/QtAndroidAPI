#include "./LogPrinter.hpp"

namespace android::util
{
	// Fields
	
	LogPrinter::LogPrinter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LogPrinter::LogPrinter(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.LogPrinter",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	void LogPrinter::println(jstring arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::util

