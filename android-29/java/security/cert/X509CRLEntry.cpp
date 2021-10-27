#include "../../math/BigInteger.hpp"
#include "./CRLReason.hpp"
#include "../../util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./X509CRLEntry.hpp"

namespace java::security::cert
{
	// Fields
	
	X509CRLEntry::X509CRLEntry(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	X509CRLEntry::X509CRLEntry()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.X509CRLEntry",
			"()V"
		);
	}
	
	// Methods
	jboolean X509CRLEntry::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject X509CRLEntry::getCertificateIssuer()
	{
		return __thiz.callObjectMethod(
			"getCertificateIssuer",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	jbyteArray X509CRLEntry::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject X509CRLEntry::getRevocationDate()
	{
		return __thiz.callObjectMethod(
			"getRevocationDate",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject X509CRLEntry::getRevocationReason()
	{
		return __thiz.callObjectMethod(
			"getRevocationReason",
			"()Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject X509CRLEntry::getSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	jboolean X509CRLEntry::hasExtensions()
	{
		return __thiz.callMethod<jboolean>(
			"hasExtensions",
			"()Z"
		);
	}
	jint X509CRLEntry::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring X509CRLEntry::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

