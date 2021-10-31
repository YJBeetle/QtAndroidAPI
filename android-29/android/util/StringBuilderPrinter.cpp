#include "../../java/lang/StringBuilder.hpp"
#include "./StringBuilderPrinter.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	StringBuilderPrinter::StringBuilderPrinter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	StringBuilderPrinter::StringBuilderPrinter(java::lang::StringBuilder arg0)
		: __JniBaseClass(
			"android.util.StringBuilderPrinter",
			"(Ljava/lang/StringBuilder;)V",
			arg0.object()
		) {}
	
	// Methods
	void StringBuilderPrinter::println(jstring arg0)
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::util

