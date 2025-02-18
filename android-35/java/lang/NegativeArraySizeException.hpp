#pragma once

#include "../../JString.hpp"
#include "./NegativeArraySizeException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline NegativeArraySizeException::NegativeArraySizeException()
		: java::lang::RuntimeException(
			"java.lang.NegativeArraySizeException",
			"()V"
		) {}
	inline NegativeArraySizeException::NegativeArraySizeException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.NegativeArraySizeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
