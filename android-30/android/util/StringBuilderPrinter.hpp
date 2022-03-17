#pragma once

#include "../../JString.hpp"
#include "../../java/lang/StringBuilder.def.hpp"
#include "./StringBuilderPrinter.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline StringBuilderPrinter::StringBuilderPrinter(java::lang::StringBuilder arg0)
		: JObject(
			"android.util.StringBuilderPrinter",
			"(Ljava/lang/StringBuilder;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void StringBuilderPrinter::println(JString arg0) const
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
