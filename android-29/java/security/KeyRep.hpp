#pragma once

#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./KeyRep_Type.def.hpp"
#include "./KeyRep.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline KeyRep::KeyRep(java::security::KeyRep_Type arg0, JString arg1, JString arg2, JByteArray arg3)
		: JObject(
			"java.security.KeyRep",
			"(Ljava/security/KeyRep$Type;Ljava/lang/String;Ljava/lang/String;[B)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jbyteArray>()
		) {}
	
	// Methods
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
