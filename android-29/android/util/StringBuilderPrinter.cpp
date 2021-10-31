#include "../../java/lang/StringBuilder.hpp"
#include "./StringBuilderPrinter.hpp"

namespace android::util
{
	// Fields
	
	StringBuilderPrinter::StringBuilderPrinter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StringBuilderPrinter::StringBuilderPrinter(java::lang::StringBuilder arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.StringBuilderPrinter",
			"(Ljava/lang/StringBuilder;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void StringBuilderPrinter::println(jstring arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::util

