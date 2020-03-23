#pragma once

#ifndef JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS
#define JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::security::cert
{
	class LDAPCertStoreParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jint arg1);
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject clone();
		jint getPort();
		QAndroidJniObject getServerName();
	};
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void LDAPCertStoreParameters::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.LDAPCertStoreParameters",
			"()V");
	}
	void LDAPCertStoreParameters::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.LDAPCertStoreParameters",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void LDAPCertStoreParameters::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.LDAPCertStoreParameters",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject LDAPCertStoreParameters::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject LDAPCertStoreParameters::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	jint LDAPCertStoreParameters::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I");
	}
	QAndroidJniObject LDAPCertStoreParameters::getServerName()
	{
		return __thiz.callObjectMethod(
			"getServerName",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class LDAPCertStoreParameters : public __jni_impl::java::security::cert::LDAPCertStoreParameters
	{
	public:
		LDAPCertStoreParameters(QAndroidJniObject obj) { __thiz = obj; }
		LDAPCertStoreParameters()
		{
			__constructor();
		}
		LDAPCertStoreParameters(jstring arg0)
		{
			__constructor(
				arg0);
		}
		LDAPCertStoreParameters(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS

