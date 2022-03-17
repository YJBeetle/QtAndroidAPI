#pragma once

#include "../../JString.hpp"
#include "./VerifyError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline VerifyError::VerifyError()
		: java::lang::LinkageError(
			"java.lang.VerifyError",
			"()V"
		) {}
	inline VerifyError::VerifyError(JString arg0)
		: java::lang::LinkageError(
			"java.lang.VerifyError",
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
