#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./NoSuchElementException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline NoSuchElementException::NoSuchElementException()
		: java::lang::RuntimeException(
			"java.util.NoSuchElementException",
			"()V"
		) {}
	inline NoSuchElementException::NoSuchElementException(JString arg0)
		: java::lang::RuntimeException(
			"java.util.NoSuchElementException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline NoSuchElementException::NoSuchElementException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.util.NoSuchElementException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline NoSuchElementException::NoSuchElementException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.util.NoSuchElementException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
