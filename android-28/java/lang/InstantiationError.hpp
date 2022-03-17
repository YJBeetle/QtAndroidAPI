#pragma once

#include "../../JString.hpp"
#include "./InstantiationError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline InstantiationError::InstantiationError()
		: java::lang::IncompatibleClassChangeError(
			"java.lang.InstantiationError",
			"()V"
		) {}
	inline InstantiationError::InstantiationError(JString arg0)
		: java::lang::IncompatibleClassChangeError(
			"java.lang.InstantiationError",
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
