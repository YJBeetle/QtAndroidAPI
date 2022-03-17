#pragma once

#include "../../JString.hpp"
#include "./UnsatisfiedLinkError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline UnsatisfiedLinkError::UnsatisfiedLinkError()
		: java::lang::LinkageError(
			"java.lang.UnsatisfiedLinkError",
			"()V"
		) {}
	inline UnsatisfiedLinkError::UnsatisfiedLinkError(JString arg0)
		: java::lang::LinkageError(
			"java.lang.UnsatisfiedLinkError",
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
