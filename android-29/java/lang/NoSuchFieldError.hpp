#pragma once

#include "../../JString.hpp"
#include "./NoSuchFieldError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline NoSuchFieldError::NoSuchFieldError()
		: java::lang::IncompatibleClassChangeError(
			"java.lang.NoSuchFieldError",
			"()V"
		) {}
	inline NoSuchFieldError::NoSuchFieldError(JString arg0)
		: java::lang::IncompatibleClassChangeError(
			"java.lang.NoSuchFieldError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Error.hpp"
#include "./LinkageError.hpp"
#include "./IncompatibleClassChangeError.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
