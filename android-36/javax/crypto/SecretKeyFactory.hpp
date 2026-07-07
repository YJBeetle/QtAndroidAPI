#pragma once

#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/security/Provider.def.hpp"
#include "./SecretKeyFactorySpi.def.hpp"
#include "./SecretKeyFactory.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	
	// Methods
	inline javax::crypto::SecretKeyFactory SecretKeyFactory::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.SecretKeyFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/SecretKeyFactory;",
			arg0.object<jstring>()
		);
	}
	inline javax::crypto::SecretKeyFactory SecretKeyFactory::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.SecretKeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/SecretKeyFactory;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline javax::crypto::SecretKeyFactory SecretKeyFactory::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.SecretKeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/SecretKeyFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject SecretKeyFactory::generateSecret(JObject arg0) const
	{
		return callObjectMethod(
			"generateSecret",
			"(Ljava/security/spec/KeySpec;)Ljavax/crypto/SecretKey;",
			arg0.object()
		);
	}
	inline JString SecretKeyFactory::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SecretKeyFactory::getKeySpec(JObject arg0, JClass arg1) const
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljavax/crypto/SecretKey;Ljava/lang/Class;)Ljava/security/spec/KeySpec;",
			arg0.object(),
			arg1.object<jclass>()
		);
	}
	inline java::security::Provider SecretKeyFactory::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline JObject SecretKeyFactory::translateKey(JObject arg0) const
	{
		return callObjectMethod(
			"translateKey",
			"(Ljavax/crypto/SecretKey;)Ljavax/crypto/SecretKey;",
			arg0.object()
		);
	}
} // namespace javax::crypto

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::crypto;
#endif
