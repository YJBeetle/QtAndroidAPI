#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./IOException.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline IOException::IOException()
		: java::lang::Exception(
			"java.io.IOException",
			"()V"
		) {}
	inline IOException::IOException(JString arg0)
		: java::lang::Exception(
			"java.io.IOException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline IOException::IOException(JThrowable arg0)
		: java::lang::Exception(
			"java.io.IOException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline IOException::IOException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.io.IOException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::io

// Base class headers
#include "../lang/Exception.hpp"

