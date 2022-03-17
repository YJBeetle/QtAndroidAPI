#pragma once

#include "../../JString.hpp"
#include "./UnsupportedClassVersionError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline UnsupportedClassVersionError::UnsupportedClassVersionError()
		: java::lang::ClassFormatError(
			"java.lang.UnsupportedClassVersionError",
			"()V"
		) {}
	inline UnsupportedClassVersionError::UnsupportedClassVersionError(JString arg0)
		: java::lang::ClassFormatError(
			"java.lang.UnsupportedClassVersionError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Error.hpp"
#include "./LinkageError.hpp"
#include "./ClassFormatError.hpp"

