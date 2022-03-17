#pragma once

#include "./KeyPair.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline KeyPair::KeyPair(JObject arg0, JObject arg1)
		: JObject(
			"java.security.KeyPair",
			"(Ljava/security/PublicKey;Ljava/security/PrivateKey;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline JObject KeyPair::getPrivate() const
	{
		return callObjectMethod(
			"getPrivate",
			"()Ljava/security/PrivateKey;"
		);
	}
	inline JObject KeyPair::getPublic() const
	{
		return callObjectMethod(
			"getPublic",
			"()Ljava/security/PublicKey;"
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
