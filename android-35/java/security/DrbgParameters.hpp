#pragma once

#include "../../JByteArray.hpp"
#include "./DrbgParameters_Capability.def.hpp"
#include "./DrbgParameters_Instantiation.def.hpp"
#include "./DrbgParameters_NextBytes.def.hpp"
#include "./DrbgParameters_Reseed.def.hpp"
#include "./DrbgParameters.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::security::DrbgParameters_Instantiation DrbgParameters::instantiation(jint arg0, java::security::DrbgParameters_Capability arg1, JByteArray arg2)
	{
		return callStaticObjectMethod(
			"java.security.DrbgParameters",
			"instantiation",
			"(ILjava/security/DrbgParameters$Capability;[B)Ljava/security/DrbgParameters$Instantiation;",
			arg0,
			arg1.object(),
			arg2.object<jbyteArray>()
		);
	}
	inline java::security::DrbgParameters_NextBytes DrbgParameters::nextBytes(jint arg0, jboolean arg1, JByteArray arg2)
	{
		return callStaticObjectMethod(
			"java.security.DrbgParameters",
			"nextBytes",
			"(IZ[B)Ljava/security/DrbgParameters$NextBytes;",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	inline java::security::DrbgParameters_Reseed DrbgParameters::reseed(jboolean arg0, JByteArray arg1)
	{
		return callStaticObjectMethod(
			"java.security.DrbgParameters",
			"reseed",
			"(Z[B)Ljava/security/DrbgParameters$Reseed;",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
