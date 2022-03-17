#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./UnsupportedTemporalTypeException.def.hpp"

namespace java::time::temporal
{
	// Fields
	
	// Constructors
	inline UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(JString arg0)
		: java::time::DateTimeException(
			"java.time.temporal.UnsupportedTemporalTypeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(JString arg0, JThrowable arg1)
		: java::time::DateTimeException(
			"java.time.temporal.UnsupportedTemporalTypeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::time::temporal

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../DateTimeException.hpp"

