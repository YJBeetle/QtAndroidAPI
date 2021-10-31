#include "./LDAPCertStoreParameters.hpp"

namespace java::security::cert
{
	// Fields
	
	LDAPCertStoreParameters::LDAPCertStoreParameters(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LDAPCertStoreParameters::LDAPCertStoreParameters()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.LDAPCertStoreParameters",
			"()V"
		);
	}
	LDAPCertStoreParameters::LDAPCertStoreParameters(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.LDAPCertStoreParameters",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	LDAPCertStoreParameters::LDAPCertStoreParameters(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.LDAPCertStoreParameters",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jobject LDAPCertStoreParameters::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint LDAPCertStoreParameters::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jstring LDAPCertStoreParameters::getServerName()
	{
		return __thiz.callObjectMethod(
			"getServerName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LDAPCertStoreParameters::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

