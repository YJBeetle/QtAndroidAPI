#include "../NoSuchAlgorithmException.hpp"
#include "../Provider.hpp"
#include "./CertStoreSpi.hpp"
#include "./CertStore.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertStore::CertStore(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring CertStore::getDefaultType()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getDefaultType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CertStore::getInstance(jstring arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;)Ljava/security/cert/CertStore;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject CertStore::getInstance(jstring arg0, __JniBaseClass arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;Ljava/lang/String;)Ljava/security/cert/CertStore;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	QAndroidJniObject CertStore::getInstance(jstring arg0, __JniBaseClass arg1, java::security::Provider arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;Ljava/security/Provider;)Ljava/security/cert/CertStore;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject CertStore::getCRLs(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"getCRLs",
			"(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	QAndroidJniObject CertStore::getCertStoreParameters()
	{
		return callObjectMethod(
			"getCertStoreParameters",
			"()Ljava/security/cert/CertStoreParameters;"
		);
	}
	QAndroidJniObject CertStore::getCertificates(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"getCertificates",
			"(Ljava/security/cert/CertSelector;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	QAndroidJniObject CertStore::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	jstring CertStore::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

