#pragma once

#include "../../JString.hpp"
#include "./LogPrinter.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline LogPrinter::LogPrinter(jint arg0, JString arg1)
		: JObject(
			"android.util.LogPrinter",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline void LogPrinter::println(JString arg0) const
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
