#include "../../JString.hpp"
#include "../../java/lang/StringBuilder.hpp"
#include "./StringBuilderPrinter.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	StringBuilderPrinter::StringBuilderPrinter(java::lang::StringBuilder arg0)
		: JObject(
			"android.util.StringBuilderPrinter",
			"(Ljava/lang/StringBuilder;)V",
			arg0.object()
		) {}
	
	// Methods
	void StringBuilderPrinter::println(JString arg0) const
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::util

