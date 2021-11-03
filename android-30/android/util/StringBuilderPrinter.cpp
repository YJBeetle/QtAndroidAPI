#include "../../JString.hpp"
#include "../../java/lang/StringBuilder.hpp"
#include "./StringBuilderPrinter.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	StringBuilderPrinter::StringBuilderPrinter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	StringBuilderPrinter::StringBuilderPrinter(java::lang::StringBuilder arg0)
		: JObject(
			"android.util.StringBuilderPrinter",
			"(Ljava/lang/StringBuilder;)V",
			arg0.object()
		) {}
	
	// Methods
	void StringBuilderPrinter::println(JString arg0)
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::util

