#pragma once

#include "../../../JByteArray.hpp"
#include "../../../java/io/InputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/math/BigInteger.def.hpp"
#include "../../../java/util/Date.def.hpp"
#include "./X509Certificate.def.hpp"

namespace javax::security::cert
{
	// Fields
	
	// Constructors
	inline X509Certificate::X509Certificate()
		: javax::security::cert::Certificate(
			"javax.security.cert.X509Certificate",
			"()V"
		) {}
	
	// Methods
	inline javax::security::cert::X509Certificate X509Certificate::getInstance(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"javax.security.cert.X509Certificate",
			"getInstance",
			"([B)Ljavax/security/cert/X509Certificate;",
			arg0.object<jbyteArray>()
		);
	}
	inline javax::security::cert::X509Certificate X509Certificate::getInstance(java::io::InputStream arg0)
	{
		return callStaticObjectMethod(
			"javax.security.cert.X509Certificate",
			"getInstance",
			"(Ljava/io/InputStream;)Ljavax/security/cert/X509Certificate;",
			arg0.object()
		);
	}
	inline void X509Certificate::checkValidity() const
	{
		callMethod<void>(
			"checkValidity",
			"()V"
		);
	}
	inline void X509Certificate::checkValidity(java::util::Date arg0) const
	{
		callMethod<void>(
			"checkValidity",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	inline JObject X509Certificate::getIssuerDN() const
	{
		return callObjectMethod(
			"getIssuerDN",
			"()Ljava/security/Principal;"
		);
	}
	inline java::util::Date X509Certificate::getNotAfter() const
	{
		return callObjectMethod(
			"getNotAfter",
			"()Ljava/util/Date;"
		);
	}
	inline java::util::Date X509Certificate::getNotBefore() const
	{
		return callObjectMethod(
			"getNotBefore",
			"()Ljava/util/Date;"
		);
	}
	inline java::math::BigInteger X509Certificate::getSerialNumber() const
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	inline JString X509Certificate::getSigAlgName() const
	{
		return callObjectMethod(
			"getSigAlgName",
			"()Ljava/lang/String;"
		);
	}
	inline JString X509Certificate::getSigAlgOID() const
	{
		return callObjectMethod(
			"getSigAlgOID",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray X509Certificate::getSigAlgParams() const
	{
		return callObjectMethod(
			"getSigAlgParams",
			"()[B"
		);
	}
	inline JObject X509Certificate::getSubjectDN() const
	{
		return callObjectMethod(
			"getSubjectDN",
			"()Ljava/security/Principal;"
		);
	}
	inline jint X509Certificate::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
} // namespace javax::security::cert

// Base class headers
#include "./Certificate.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::security::cert;
#endif
