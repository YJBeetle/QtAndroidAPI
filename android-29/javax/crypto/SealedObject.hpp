#pragma once

#include "../../JByteArray.hpp"
#include "../../java/io/ObjectInputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Cipher.def.hpp"
#include "./SealedObject.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline SealedObject::SealedObject(JObject arg0, javax::crypto::Cipher arg1)
		: JObject(
			"javax.crypto.SealedObject",
			"(Ljava/io/Serializable;Ljavax/crypto/Cipher;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline JString SealedObject::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SealedObject::getObject(JObject arg0) const
	{
		return callObjectMethod(
			"getObject",
			"(Ljava/security/Key;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline JObject SealedObject::getObject(javax::crypto::Cipher arg0) const
	{
		return callObjectMethod(
			"getObject",
			"(Ljavax/crypto/Cipher;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline JObject SealedObject::getObject(JObject arg0, JString arg1) const
	{
		return callObjectMethod(
			"getObject",
			"(Ljava/security/Key;Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace javax::crypto

// Base class headers

