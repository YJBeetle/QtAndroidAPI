#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "./CRLReason.hpp"
#include "../../util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./CertificateRevokedException.hpp"

namespace java::security::cert
{
	// Fields
	
	CertificateRevokedException::CertificateRevokedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertificateRevokedException::CertificateRevokedException(java::util::Date arg0, java::security::cert::CRLReason arg1, javax::security::auth::x500::X500Principal arg2, __JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateRevokedException",
			"(Ljava/util/Date;Ljava/security/cert/CRLReason;Ljavax/security/auth/x500/X500Principal;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject CertificateRevokedException::getAuthorityName()
	{
		return __thiz.callObjectMethod(
			"getAuthorityName",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	QAndroidJniObject CertificateRevokedException::getExtensions()
	{
		return __thiz.callObjectMethod(
			"getExtensions",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject CertificateRevokedException::getInvalidityDate()
	{
		return __thiz.callObjectMethod(
			"getInvalidityDate",
			"()Ljava/util/Date;"
		);
	}
	jstring CertificateRevokedException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CertificateRevokedException::getRevocationDate()
	{
		return __thiz.callObjectMethod(
			"getRevocationDate",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject CertificateRevokedException::getRevocationReason()
	{
		return __thiz.callObjectMethod(
			"getRevocationReason",
			"()Ljava/security/cert/CRLReason;"
		);
	}
} // namespace java::security::cert

