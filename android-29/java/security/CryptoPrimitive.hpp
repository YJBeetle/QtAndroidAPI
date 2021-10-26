#pragma once

#ifndef JAVA_SECURITY_CRYPTOPRIMITIVE
#define JAVA_SECURITY_CRYPTOPRIMITIVE

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace __jni_impl::java::security
{
	class CryptoPrimitive : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject MESSAGE_DIGEST();
		static QAndroidJniObject SECURE_RANDOM();
		static QAndroidJniObject BLOCK_CIPHER();
		static QAndroidJniObject STREAM_CIPHER();
		static QAndroidJniObject MAC();
		static QAndroidJniObject KEY_WRAP();
		static QAndroidJniObject PUBLIC_KEY_ENCRYPTION();
		static QAndroidJniObject SIGNATURE();
		static QAndroidJniObject KEY_ENCAPSULATION();
		static QAndroidJniObject KEY_AGREEMENT();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::java::security


namespace __jni_impl::java::security
{
	// Fields
	QAndroidJniObject CryptoPrimitive::MESSAGE_DIGEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.CryptoPrimitive",
			"MESSAGE_DIGEST",
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
	QAndroidJniObject CryptoPrimitive::BLOCK_CIPHER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.CryptoPrimitive",
			"BLOCK_CIPHER",
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
	QAndroidJniObject CryptoPrimitive::MAC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.CryptoPrimitive",
			"MAC",
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
	QAndroidJniObject CryptoPrimitive::PUBLIC_KEY_ENCRYPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.CryptoPrimitive",
			"PUBLIC_KEY_ENCRYPTION",
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
	QAndroidJniObject CryptoPrimitive::KEY_ENCAPSULATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.CryptoPrimitive",
			"KEY_ENCAPSULATION",
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
	
	// Constructors
	void CryptoPrimitive::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.CryptoPrimitive",
			"(V)V");
	}
	
	// Methods
	jarray CryptoPrimitive::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.CryptoPrimitive",
			"values",
			"()[Ljava/security/CryptoPrimitive;"
		).object<jarray>();
	}
	QAndroidJniObject CryptoPrimitive::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.CryptoPrimitive",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/CryptoPrimitive;",
			arg0
		);
	}
	QAndroidJniObject CryptoPrimitive::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.CryptoPrimitive",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/CryptoPrimitive;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class CryptoPrimitive : public __jni_impl::java::security::CryptoPrimitive
	{
	public:
		CryptoPrimitive(QAndroidJniObject obj) { __thiz = obj; }
		CryptoPrimitive()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_CRYPTOPRIMITIVE

