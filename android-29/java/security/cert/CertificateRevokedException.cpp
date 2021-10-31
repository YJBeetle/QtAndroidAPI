#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "./CRLReason.hpp"
#include "../../util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./CertificateRevokedException.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertificateRevokedException::CertificateRevokedException(QAndroidJniObject obj) : java::security::cert::CertificateException(obj) {}
	
	// Constructors
	CertificateRevokedException::CertificateRevokedException(java::util::Date arg0, java::security::cert::CRLReason arg1, javax::security::auth::x500::X500Principal arg2, __JniBaseClass arg3)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateRevokedException",
			"(Ljava/util/Date;Ljava/security/cert/CRLReason;Ljavax/security/auth/x500/X500Principal;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	QAndroidJniObject CertificateRevokedException::getAuthorityName()
	{
		return callObjectMethod(
			"getAuthorityName",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	QAndroidJniObject CertificateRevokedException::getExtensions()
	{
		return callObjectMethod(
			"getExtensions",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject CertificateRevokedException::getInvalidityDate()
	{
		return callObjectMethod(
			"getInvalidityDate",
			"()Ljava/util/Date;"
		);
	}
	jstring CertificateRevokedException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CertificateRevokedException::getRevocationDate()
	{
		return callObjectMethod(
			"getRevocationDate",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject CertificateRevokedException::getRevocationReason()
	{
		return callObjectMethod(
			"getRevocationReason",
			"()Ljava/security/cert/CRLReason;"
		);
	}
} // namespace java::security::cert

