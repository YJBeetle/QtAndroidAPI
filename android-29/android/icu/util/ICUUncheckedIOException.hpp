#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./ICUUncheckedIOException.def.hpp"

namespace android::icu::util
{
	// Fields
	
	// Constructors
	inline ICUUncheckedIOException::ICUUncheckedIOException()
		: java::lang::RuntimeException(
			"android.icu.util.ICUUncheckedIOException",
			"()V"
		) {}
	inline ICUUncheckedIOException::ICUUncheckedIOException(JString arg0)
		: java::lang::RuntimeException(
			"android.icu.util.ICUUncheckedIOException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ICUUncheckedIOException::ICUUncheckedIOException(JThrowable arg0)
		: java::lang::RuntimeException(
			"android.icu.util.ICUUncheckedIOException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline ICUUncheckedIOException::ICUUncheckedIOException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"android.icu.util.ICUUncheckedIOException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::icu::util

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"

