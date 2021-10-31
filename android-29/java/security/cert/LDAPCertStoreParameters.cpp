#include "./LDAPCertStoreParameters.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	LDAPCertStoreParameters::LDAPCertStoreParameters(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LDAPCertStoreParameters::LDAPCertStoreParameters()
		: __JniBaseClass(
			"java.security.cert.LDAPCertStoreParameters",
			"()V"
		) {}
	LDAPCertStoreParameters::LDAPCertStoreParameters(jstring arg0)
		: __JniBaseClass(
			"java.security.cert.LDAPCertStoreParameters",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	LDAPCertStoreParameters::LDAPCertStoreParameters(jstring arg0, jint arg1)
		: __JniBaseClass(
			"java.security.cert.LDAPCertStoreParameters",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jobject LDAPCertStoreParameters::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint LDAPCertStoreParameters::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jstring LDAPCertStoreParameters::getServerName()
	{
		return callObjectMethod(
			"getServerName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LDAPCertStoreParameters::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

