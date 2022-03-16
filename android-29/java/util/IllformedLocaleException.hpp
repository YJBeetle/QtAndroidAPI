#pragma once

#include "../../JString.hpp"
#include "./IllformedLocaleException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline IllformedLocaleException::IllformedLocaleException()
		: java::lang::RuntimeException(
			"java.util.IllformedLocaleException",
			"()V"
		) {}
	inline IllformedLocaleException::IllformedLocaleException(JString arg0)
		: java::lang::RuntimeException(
			"java.util.IllformedLocaleException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline IllformedLocaleException::IllformedLocaleException(JString arg0, jint arg1)
		: java::lang::RuntimeException(
			"java.util.IllformedLocaleException",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline jint IllformedLocaleException::getErrorIndex() const
	{
		return callMethod<jint>(
			"getErrorIndex",
			"()I"
		);
	}
} // namespace java::util

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"

