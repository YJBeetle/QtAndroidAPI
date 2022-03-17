#pragma once

#include "../../../JString.hpp"
#include "./GenericSignatureFormatError.def.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// Constructors
	inline GenericSignatureFormatError::GenericSignatureFormatError()
		: java::lang::ClassFormatError(
			"java.lang.reflect.GenericSignatureFormatError",
			"()V"
		) {}
	inline GenericSignatureFormatError::GenericSignatureFormatError(JString arg0)
		: java::lang::ClassFormatError(
			"java.lang.reflect.GenericSignatureFormatError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang::reflect

// Base class headers
#include "../Error.hpp"
#include "../LinkageError.hpp"
#include "../ClassFormatError.hpp"

