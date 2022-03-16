#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./Exception.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline Exception::Exception()
		: JThrowable(
			"java.lang.Exception",
			"()V"
		) {}
	inline Exception::Exception(JString arg0)
		: JThrowable(
			"java.lang.Exception",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline Exception::Exception(JThrowable arg0)
		: JThrowable(
			"java.lang.Exception",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline Exception::Exception(JString arg0, JThrowable arg1)
		: JThrowable(
			"java.lang.Exception",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers

