#pragma once

#include "../../JString.hpp"
#include "./IllegalThreadStateException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline IllegalThreadStateException::IllegalThreadStateException()
		: java::lang::IllegalArgumentException(
			"java.lang.IllegalThreadStateException",
			"()V"
		) {}
	inline IllegalThreadStateException::IllegalThreadStateException(JString arg0)
		: java::lang::IllegalArgumentException(
			"java.lang.IllegalThreadStateException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"
#include "./IllegalArgumentException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
