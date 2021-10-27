#pragma once

#ifndef JAVA_SECURITY_CERT_PKIXREASON
#define JAVA_SECURITY_CERT_PKIXREASON

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace __jni_impl::java::security::cert
{
	class PKIXReason : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject INVALID_KEY_USAGE();
		static QAndroidJniObject INVALID_NAME();
		static QAndroidJniObject INVALID_POLICY();
		static QAndroidJniObject NAME_CHAINING();
		static QAndroidJniObject NOT_CA_CERT();
		static QAndroidJniObject NO_TRUST_ANCHOR();
		static QAndroidJniObject PATH_TOO_LONG();
		static QAndroidJniObject UNRECOGNIZED_CRIT_EXT();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	QAndroidJniObject PKIXReason::INVALID_KEY_USAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXReason",
			"INVALID_KEY_USAGE",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	QAndroidJniObject PKIXReason::INVALID_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXReason",
			"INVALID_NAME",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	QAndroidJniObject PKIXReason::INVALID_POLICY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXReason",
			"INVALID_POLICY",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	QAndroidJniObject PKIXReason::NAME_CHAINING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXReason",
			"NAME_CHAINING",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	QAndroidJniObject PKIXReason::NOT_CA_CERT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXReason",
			"NOT_CA_CERT",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	QAndroidJniObject PKIXReason::NO_TRUST_ANCHOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXReason",
			"NO_TRUST_ANCHOR",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	QAndroidJniObject PKIXReason::PATH_TOO_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXReason",
			"PATH_TOO_LONG",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	QAndroidJniObject PKIXReason::UNRECOGNIZED_CRIT_EXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXReason",
			"UNRECOGNIZED_CRIT_EXT",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	
	// Constructors
	void PKIXReason::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.PKIXReason",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PKIXReason::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.PKIXReason",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/cert/PKIXReason;",
			arg0
		);
	}
	QAndroidJniObject PKIXReason::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.PKIXReason",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/cert/PKIXReason;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray PKIXReason::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.PKIXReason",
			"values",
			"()[Ljava/security/cert/PKIXReason;"
		).object<jarray>();
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class PKIXReason : public __jni_impl::java::security::cert::PKIXReason
	{
	public:
		PKIXReason(QAndroidJniObject obj) { __thiz = obj; }
		PKIXReason()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_PKIXREASON

