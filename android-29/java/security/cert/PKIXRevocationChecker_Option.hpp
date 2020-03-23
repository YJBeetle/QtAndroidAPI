#pragma once

#ifndef JAVA_SECURITY_CERT_PKIXREVOCATIONCHECKER_OPTION
#define JAVA_SECURITY_CERT_PKIXREVOCATIONCHECKER_OPTION

#include "../../lang/Enum.hpp"


namespace __jni_impl::java::security::cert
{
	class PKIXRevocationChecker_Option : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ONLY_END_ENTITY();
		static QAndroidJniObject PREFER_CRLS();
		static QAndroidJniObject NO_FALLBACK();
		static QAndroidJniObject SOFT_FAIL();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	QAndroidJniObject PKIXRevocationChecker_Option::ONLY_END_ENTITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXRevocationChecker$Option",
			"ONLY_END_ENTITY",
			"Ljava/security/cert/PKIXRevocationChecker$Option;");
	}
	QAndroidJniObject PKIXRevocationChecker_Option::PREFER_CRLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXRevocationChecker$Option",
			"PREFER_CRLS",
			"Ljava/security/cert/PKIXRevocationChecker$Option;");
	}
	QAndroidJniObject PKIXRevocationChecker_Option::NO_FALLBACK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXRevocationChecker$Option",
			"NO_FALLBACK",
			"Ljava/security/cert/PKIXRevocationChecker$Option;");
	}
	QAndroidJniObject PKIXRevocationChecker_Option::SOFT_FAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXRevocationChecker$Option",
			"SOFT_FAIL",
			"Ljava/security/cert/PKIXRevocationChecker$Option;");
	}
	
	// Constructors
	void PKIXRevocationChecker_Option::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.PKIXRevocationChecker$Option",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PKIXRevocationChecker_Option::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.PKIXRevocationChecker$Option",
			"values",
			"()[Ljava/security/cert/PKIXRevocationChecker$Option;");
	}
	QAndroidJniObject PKIXRevocationChecker_Option::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.PKIXRevocationChecker$Option",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/cert/PKIXRevocationChecker$Option;",
			arg0);
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class PKIXRevocationChecker_Option : public __jni_impl::java::security::cert::PKIXRevocationChecker_Option
	{
	public:
		PKIXRevocationChecker_Option(QAndroidJniObject obj) { __thiz = obj; }
		PKIXRevocationChecker_Option()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_PKIXREVOCATIONCHECKER_OPTION

