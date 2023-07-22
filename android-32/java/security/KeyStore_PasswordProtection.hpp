#pragma once

#include "../../JCharArray.hpp"
#include "../../JString.hpp"
#include "./KeyStore_PasswordProtection.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline KeyStore_PasswordProtection::KeyStore_PasswordProtection(JCharArray arg0)
		: JObject(
			"java.security.KeyStore$PasswordProtection",
			"([C)V",
			arg0.object<jcharArray>()
		) {}
	inline KeyStore_PasswordProtection::KeyStore_PasswordProtection(JCharArray arg0, JString arg1, JObject arg2)
		: JObject(
			"java.security.KeyStore$PasswordProtection",
			"([CLjava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object<jcharArray>(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline void KeyStore_PasswordProtection::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	inline JCharArray KeyStore_PasswordProtection::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()[C"
		);
	}
	inline JString KeyStore_PasswordProtection::getProtectionAlgorithm() const
	{
		return callObjectMethod(
			"getProtectionAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline JObject KeyStore_PasswordProtection::getProtectionParameters() const
	{
		return callObjectMethod(
			"getProtectionParameters",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	inline jboolean KeyStore_PasswordProtection::isDestroyed() const
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
