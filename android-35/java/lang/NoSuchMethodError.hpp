#pragma once

#include "../../JString.hpp"
#include "./NoSuchMethodError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline NoSuchMethodError::NoSuchMethodError()
		: java::lang::IncompatibleClassChangeError(
			"java.lang.NoSuchMethodError",
			"()V"
		) {}
	inline NoSuchMethodError::NoSuchMethodError(JString arg0)
		: java::lang::IncompatibleClassChangeError(
			"java.lang.NoSuchMethodError",
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
