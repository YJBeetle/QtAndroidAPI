#include "../../math/BigInteger.hpp"
#include "./CRLReason.hpp"
#include "../../util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./X509CRLEntry.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	X509CRLEntry::X509CRLEntry(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	X509CRLEntry::X509CRLEntry()
		: JObject(
			"java.security.cert.X509CRLEntry",
			"()V"
		) {}
	
	// Methods
	jboolean X509CRLEntry::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	javax::security::auth::x500::X500Principal X509CRLEntry::getCertificateIssuer()
	{
		return callObjectMethod(
			"getCertificateIssuer",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	jbyteArray X509CRLEntry::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	java::util::Date X509CRLEntry::getRevocationDate()
	{
		return callObjectMethod(
			"getRevocationDate",
			"()Ljava/util/Date;"
		);
	}
	java::security::cert::CRLReason X509CRLEntry::getRevocationReason()
	{
		return callObjectMethod(
			"getRevocationReason",
			"()Ljava/security/cert/CRLReason;"
		);
	}
	java::math::BigInteger X509CRLEntry::getSerialNumber()
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	jboolean X509CRLEntry::hasExtensions()
	{
		return callMethod<jboolean>(
			"hasExtensions",
			"()Z"
		);
	}
	jint X509CRLEntry::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring X509CRLEntry::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert

