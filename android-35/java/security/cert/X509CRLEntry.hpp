#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../math/BigInteger.def.hpp"
#include "./CRLReason.def.hpp"
#include "../../util/Date.def.hpp"
#include "../../../javax/security/auth/x500/X500Principal.def.hpp"
#include "./X509CRLEntry.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline X509CRLEntry::X509CRLEntry()
		: JObject(
			"java.security.cert.X509CRLEntry",
			"()V"
		) {}
	
	// Methods
	inline jboolean X509CRLEntry::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline javax::security::auth::x500::X500Principal X509CRLEntry::getCertificateIssuer() const
	{
		return callObjectMethod(
			"getCertificateIssuer",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	inline JByteArray X509CRLEntry::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	inline java::util::Date X509CRLEntry::getRevocationDate() const
	{
		return callObjectMethod(
			"getRevocationDate",
			"()Ljava/util/Date;"
		);
	}
	inline java::security::cert::CRLReason X509CRLEntry::getRevocationReason() const
	{
		return callObjectMethod(
			"getRevocationReason",
			"()Ljava/security/cert/CRLReason;"
		);
	}
	inline java::math::BigInteger X509CRLEntry::getSerialNumber() const
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	inline jboolean X509CRLEntry::hasExtensions() const
	{
		return callMethod<jboolean>(
			"hasExtensions",
			"()Z"
		);
	}
	inline jint X509CRLEntry::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString X509CRLEntry::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::cert;
#endif
