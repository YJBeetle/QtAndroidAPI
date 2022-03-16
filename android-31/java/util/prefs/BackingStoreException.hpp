#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./BackingStoreException.def.hpp"

namespace java::util::prefs
{
	// Fields
	
	// Constructors
	inline BackingStoreException::BackingStoreException(JString arg0)
		: java::lang::Exception(
			"java.util.prefs.BackingStoreException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline BackingStoreException::BackingStoreException(JThrowable arg0)
		: java::lang::Exception(
			"java.util.prefs.BackingStoreException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util::prefs

// Base class headers
#include "../../lang/Exception.hpp"

