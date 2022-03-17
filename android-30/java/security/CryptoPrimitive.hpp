#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./CryptoPrimitive.def.hpp"

namespace java::security
{
	// Fields
	inline java::security::CryptoPrimitive CryptoPrimitive::BLOCK_CIPHER()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"BLOCK_CIPHER",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	inline java::security::CryptoPrimitive CryptoPrimitive::KEY_AGREEMENT()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"KEY_AGREEMENT",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	inline java::security::CryptoPrimitive CryptoPrimitive::KEY_ENCAPSULATION()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"KEY_ENCAPSULATION",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	inline java::security::CryptoPrimitive CryptoPrimitive::KEY_WRAP()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"KEY_WRAP",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	inline java::security::CryptoPrimitive CryptoPrimitive::MAC()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"MAC",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	inline java::security::CryptoPrimitive CryptoPrimitive::MESSAGE_DIGEST()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"MESSAGE_DIGEST",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	inline java::security::CryptoPrimitive CryptoPrimitive::PUBLIC_KEY_ENCRYPTION()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"PUBLIC_KEY_ENCRYPTION",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	inline java::security::CryptoPrimitive CryptoPrimitive::SECURE_RANDOM()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"SECURE_RANDOM",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	inline java::security::CryptoPrimitive CryptoPrimitive::SIGNATURE()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"SIGNATURE",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	inline java::security::CryptoPrimitive CryptoPrimitive::STREAM_CIPHER()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"STREAM_CIPHER",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::security::CryptoPrimitive CryptoPrimitive::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.CryptoPrimitive",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/CryptoPrimitive;",
			arg0.object<jstring>()
		);
	}
	inline JArray CryptoPrimitive::values()
	{
		return callStaticObjectMethod(
			"java.security.CryptoPrimitive",
			"values",
			"()[Ljava/security/CryptoPrimitive;"
		);
	}
} // namespace java::security

// Base class headers
#include "../lang/Enum.hpp"

