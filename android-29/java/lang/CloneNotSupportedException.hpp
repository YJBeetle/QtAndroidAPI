#pragma once

#include "../../JString.hpp"
#include "./CloneNotSupportedException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline CloneNotSupportedException::CloneNotSupportedException()
		: java::lang::Exception(
			"java.lang.CloneNotSupportedException",
			"()V"
		) {}
	inline CloneNotSupportedException::CloneNotSupportedException(JString arg0)
		: java::lang::Exception(
			"java.lang.CloneNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"

