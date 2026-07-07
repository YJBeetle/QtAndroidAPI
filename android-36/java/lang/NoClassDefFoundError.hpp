#pragma once

#include "../../JString.hpp"
#include "./NoClassDefFoundError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline NoClassDefFoundError::NoClassDefFoundError()
		: java::lang::LinkageError(
			"java.lang.NoClassDefFoundError",
			"()V"
		) {}
	inline NoClassDefFoundError::NoClassDefFoundError(JString arg0)
		: java::lang::LinkageError(
			"java.lang.NoClassDefFoundError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Error.hpp"
#include "./LinkageError.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
