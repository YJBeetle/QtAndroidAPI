#pragma once

#include "../../JString.hpp"
#include "./StaleDataException.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	inline StaleDataException::StaleDataException()
		: java::lang::RuntimeException(
			"android.database.StaleDataException",
			"()V"
		) {}
	inline StaleDataException::StaleDataException(JString arg0)
		: java::lang::RuntimeException(
			"android.database.StaleDataException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

