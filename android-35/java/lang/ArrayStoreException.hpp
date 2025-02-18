#pragma once

#include "../../JString.hpp"
#include "./ArrayStoreException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline ArrayStoreException::ArrayStoreException()
		: java::lang::RuntimeException(
			"java.lang.ArrayStoreException",
			"()V"
		) {}
	inline ArrayStoreException::ArrayStoreException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.ArrayStoreException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
