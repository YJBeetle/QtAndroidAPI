#pragma once

#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../lang/Exception.def.hpp"
#include "../../JString.hpp"
#include "./PrivilegedActionException.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline PrivilegedActionException::PrivilegedActionException(java::lang::Exception arg0)
		: java::lang::Exception(
			"java.security.PrivilegedActionException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	
	// Methods
	inline java::lang::Exception PrivilegedActionException::getException() const
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	inline JString PrivilegedActionException::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers
#include "../lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
