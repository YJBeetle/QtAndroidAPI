#pragma once

#include "../../../JString.hpp"
#include "./IllformedLocaleException.def.hpp"

namespace android::icu::util
{
	// Fields
	
	// Constructors
	inline IllformedLocaleException::IllformedLocaleException()
		: java::lang::RuntimeException(
			"android.icu.util.IllformedLocaleException",
			"()V"
		) {}
	inline IllformedLocaleException::IllformedLocaleException(JString arg0)
		: java::lang::RuntimeException(
			"android.icu.util.IllformedLocaleException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline IllformedLocaleException::IllformedLocaleException(JString arg0, jint arg1)
		: java::lang::RuntimeException(
			"android.icu.util.IllformedLocaleException",
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
} // namespace android::icu::util

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"

