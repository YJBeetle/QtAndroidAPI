#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./StringConcatException.def.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// Constructors
	inline StringConcatException::StringConcatException(JString arg0)
		: java::lang::Exception(
			"java.lang.invoke.StringConcatException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline StringConcatException::StringConcatException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.lang.invoke.StringConcatException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang::invoke

// Base class headers
#include "../Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::invoke;
#endif
