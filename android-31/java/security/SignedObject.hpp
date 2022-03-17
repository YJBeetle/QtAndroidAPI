#pragma once

#include "../../JByteArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Signature.def.hpp"
#include "./SignedObject.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline SignedObject::SignedObject(JObject arg0, JObject arg1, java::security::Signature arg2)
		: JObject(
			"java.security.SignedObject",
			"(Ljava/io/Serializable;Ljava/security/PrivateKey;Ljava/security/Signature;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline JString SignedObject::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SignedObject::getObject() const
	{
		return callObjectMethod(
			"getObject",
			"()Ljava/lang/Object;"
		);
	}
	inline JByteArray SignedObject::getSignature() const
	{
		return callObjectMethod(
			"getSignature",
			"()[B"
		);
	}
	inline jboolean SignedObject::verify(JObject arg0, java::security::Signature arg1) const
	{
		return callMethod<jboolean>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/security/Signature;)Z",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
