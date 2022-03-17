#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./MissingResourceException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline MissingResourceException::MissingResourceException(JString arg0, JString arg1, JString arg2)
		: java::lang::RuntimeException(
			"java.util.MissingResourceException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline JString MissingResourceException::getClassName() const
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		);
	}
	inline JString MissingResourceException::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
