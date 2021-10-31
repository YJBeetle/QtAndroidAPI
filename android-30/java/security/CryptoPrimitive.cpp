#include "./CryptoPrimitive.hpp"

namespace java::security
{
	// Fields
	java::security::CryptoPrimitive CryptoPrimitive::BLOCK_CIPHER()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"BLOCK_CIPHER",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	java::security::CryptoPrimitive CryptoPrimitive::KEY_AGREEMENT()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"KEY_AGREEMENT",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	java::security::CryptoPrimitive CryptoPrimitive::KEY_ENCAPSULATION()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"KEY_ENCAPSULATION",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	java::security::CryptoPrimitive CryptoPrimitive::KEY_WRAP()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"KEY_WRAP",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	java::security::CryptoPrimitive CryptoPrimitive::MAC()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"MAC",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	java::security::CryptoPrimitive CryptoPrimitive::MESSAGE_DIGEST()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"MESSAGE_DIGEST",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	java::security::CryptoPrimitive CryptoPrimitive::PUBLIC_KEY_ENCRYPTION()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"PUBLIC_KEY_ENCRYPTION",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	java::security::CryptoPrimitive CryptoPrimitive::SECURE_RANDOM()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"SECURE_RANDOM",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	java::security::CryptoPrimitive CryptoPrimitive::SIGNATURE()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"SIGNATURE",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	java::security::CryptoPrimitive CryptoPrimitive::STREAM_CIPHER()
	{
		return getStaticObjectField(
			"java.security.CryptoPrimitive",
			"STREAM_CIPHER",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	
	// QAndroidJniObject forward
	CryptoPrimitive::CryptoPrimitive(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::security::CryptoPrimitive CryptoPrimitive::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.security.CryptoPrimitive",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/CryptoPrimitive;",
			arg0
		);
	}
	jarray CryptoPrimitive::values()
	{
		return callStaticObjectMethod(
			"java.security.CryptoPrimitive",
			"values",
			"()[Ljava/security/CryptoPrimitive;"
		).object<jarray>();
	}
} // namespace java::security

