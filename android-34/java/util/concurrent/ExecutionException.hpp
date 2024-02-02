#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./ExecutionException.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline ExecutionException::ExecutionException(JThrowable arg0)
		: java::lang::Exception(
			"java.util.concurrent.ExecutionException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline ExecutionException::ExecutionException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.util.concurrent.ExecutionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util::concurrent

// Base class headers
#include "../../lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
