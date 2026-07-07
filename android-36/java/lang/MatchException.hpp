#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./MatchException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline MatchException::MatchException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.lang.MatchException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
