#pragma once

#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./KeyFactorySpi.def.hpp"
#include "./Provider.def.hpp"
#include "./KeyFactory.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::security::KeyFactory KeyFactory::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyFactory;",
			arg0.object<jstring>()
		);
	}
	inline java::security::KeyFactory KeyFactory::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyFactory;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline java::security::KeyFactory KeyFactory::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyFactory;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject KeyFactory::generatePrivate(JObject arg0) const
	{
		return callObjectMethod(
			"generatePrivate",
			"(Ljava/security/spec/KeySpec;)Ljava/security/PrivateKey;",
			arg0.object()
		);
	}
	inline JObject KeyFactory::generatePublic(JObject arg0) const
	{
		return callObjectMethod(
			"generatePublic",
			"(Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;",
			arg0.object()
		);
	}
	inline JString KeyFactory::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline JObject KeyFactory::getKeySpec(JObject arg0, JClass arg1) const
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;Ljava/lang/Class;)Ljava/security/spec/KeySpec;",
			arg0.object(),
			arg1.object<jclass>()
		);
	}
	inline java::security::Provider KeyFactory::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline JObject KeyFactory::translateKey(JObject arg0) const
	{
		return callObjectMethod(
			"translateKey",
			"(Ljava/security/Key;)Ljava/security/Key;",
			arg0.object()
		);
	}
} // namespace java::security

// Base class headers

