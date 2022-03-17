#pragma once

#include "../../JString.hpp"
#include "./ClassCircularityError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline ClassCircularityError::ClassCircularityError()
		: java::lang::LinkageError(
			"java.lang.ClassCircularityError",
			"()V"
		) {}
	inline ClassCircularityError::ClassCircularityError(JString arg0)
		: java::lang::LinkageError(
			"java.lang.ClassCircularityError",
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
