#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace __jni_impl::java::security::cert
{
	class CRLReason : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject AA_COMPROMISE();
		static QAndroidJniObject AFFILIATION_CHANGED();
		static QAndroidJniObject CA_COMPROMISE();
		static QAndroidJniObject CERTIFICATE_HOLD();
		static QAndroidJniObject CESSATION_OF_OPERATION();
		static QAndroidJniObject KEY_COMPROMISE();
		static QAndroidJniObject PRIVILEGE_WITHDRAWN();
		static QAndroidJniObject REMOVE_FROM_CRL();
		static QAndroidJniObject SUPERSEDED();
		static QAndroidJniObject UNSPECIFIED();
		static QAndroidJniObject UNUSED();
		
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
	QAndroidJniObject CRLReason::AA_COMPROMISE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"AA_COMPROMISE",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::AFFILIATION_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"AFFILIATION_CHANGED",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::CA_COMPROMISE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"CA_COMPROMISE",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::CERTIFICATE_HOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"CERTIFICATE_HOLD",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::CESSATION_OF_OPERATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"CESSATION_OF_OPERATION",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::KEY_COMPROMISE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"KEY_COMPROMISE",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::PRIVILEGE_WITHDRAWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"PRIVILEGE_WITHDRAWN",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::REMOVE_FROM_CRL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"REMOVE_FROM_CRL",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::SUPERSEDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"SUPERSEDED",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"UNSPECIFIED",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::UNUSED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"UNUSED",
			"Ljava/security/cert/CRLReason;"
		);
	}
	
	// Constructors
	void CRLReason::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CRLReason",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CRLReason::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CRLReason",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/cert/CRLReason;",
			arg0
		);
	}
	QAndroidJniObject CRLReason::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CRLReason",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/cert/CRLReason;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray CRLReason::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CRLReason",
			"values",
			"()[Ljava/security/cert/CRLReason;"
		).object<jarray>();
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CRLReason : public __jni_impl::java::security::cert::CRLReason
	{
	public:
		CRLReason(QAndroidJniObject obj) { __thiz = obj; }
		CRLReason()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

