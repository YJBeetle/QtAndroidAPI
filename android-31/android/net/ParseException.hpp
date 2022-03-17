#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ParseException.def.hpp"

namespace android::net
{
	// Fields
	inline JString ParseException::response()
	{
		return getObjectField(
			"response",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ParseException::ParseException(JString arg0)
		: java::lang::RuntimeException(
			"android.net.ParseException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ParseException::ParseException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"android.net.ParseException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::net

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
