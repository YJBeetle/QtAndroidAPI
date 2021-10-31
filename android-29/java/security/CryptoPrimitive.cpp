#include "./CryptoPrimitive.hpp"

namespace java::security
{
	// Fields
	QAndroidJniObject CryptoPrimitive::BLOCK_CIPHER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.CryptoPrimitive",
			"BLOCK_CIPHER",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	QAndroidJniObject CryptoPrimitive::KEY_AGREEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.CryptoPrimitive",
			"KEY_AGREEMENT",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	QAndroidJniObject CryptoPrimitive::KEY_ENCAPSULATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.CryptoPrimitive",
			"KEY_ENCAPSULATION",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	QAndroidJniObject CryptoPrimitive::KEY_WRAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.CryptoPrimitive",
			"KEY_WRAP",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	QAndroidJniObject CryptoPrimitive::MAC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.CryptoPrimitive",
			"MAC",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	QAndroidJniObject CryptoPrimitive::MESSAGE_DIGEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.CryptoPrimitive",
			"MESSAGE_DIGEST",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	QAndroidJniObject CryptoPrimitive::PUBLIC_KEY_ENCRYPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.CryptoPrimitive",
			"PUBLIC_KEY_ENCRYPTION",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	QAndroidJniObject CryptoPrimitive::SECURE_RANDOM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.CryptoPrimitive",
			"SECURE_RANDOM",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	QAndroidJniObject CryptoPrimitive::SIGNATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.CryptoPrimitive",
			"SIGNATURE",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	QAndroidJniObject CryptoPrimitive::STREAM_CIPHER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.CryptoPrimitive",
			"STREAM_CIPHER",
			"Ljava/security/CryptoPrimitive;"
		);
	}
	
	// QAndroidJniObject forward
	CryptoPrimitive::CryptoPrimitive(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject CryptoPrimitive::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.CryptoPrimitive",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/CryptoPrimitive;",
			arg0
		);
	}
	jarray CryptoPrimitive::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.CryptoPrimitive",
			"values",
			"()[Ljava/security/CryptoPrimitive;"
		).object<jarray>();
	}
} // namespace java::security

