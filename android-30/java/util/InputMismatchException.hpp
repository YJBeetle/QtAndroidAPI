#pragma once

#include "../../JString.hpp"
#include "./InputMismatchException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline InputMismatchException::InputMismatchException()
		: java::util::NoSuchElementException(
			"java.util.InputMismatchException",
			"()V"
		) {}
	inline InputMismatchException::InputMismatchException(JString arg0)
		: java::util::NoSuchElementException(
			"java.util.InputMismatchException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "./NoSuchElementException.hpp"

