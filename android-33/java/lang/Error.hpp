#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./Error.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline Error::Error()
		: JThrowable(
			"java.lang.Error",
			"()V"
		) {}
	inline Error::Error(JString arg0)
		: JThrowable(
			"java.lang.Error",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline Error::Error(JThrowable arg0)
		: JThrowable(
			"java.lang.Error",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline Error::Error(JString arg0, JThrowable arg1)
		: JThrowable(
			"java.lang.Error",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
