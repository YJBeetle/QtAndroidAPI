#include "../../../JByteArray.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "../../../java/util/Date.hpp"
#include "./X509Certificate.hpp"

namespace javax::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	X509Certificate::X509Certificate(QAndroidJniObject obj) : javax::security::cert::Certificate(obj) {}
	
	// Constructors
	X509Certificate::X509Certificate()
		: javax::security::cert::Certificate(
			"javax.security.cert.X509Certificate",
			"()V"
		) {}
	
	// Methods
	javax::security::cert::X509Certificate X509Certificate::getInstance(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"javax.security.cert.X509Certificate",
			"getInstance",
			"([B)Ljavax/security/cert/X509Certificate;",
			arg0.object<jbyteArray>()
		);
	}
	javax::security::cert::X509Certificate X509Certificate::getInstance(java::io::InputStream arg0)
	{
		return callStaticObjectMethod(
			"javax.security.cert.X509Certificate",
			"getInstance",
			"(Ljava/io/InputStream;)Ljavax/security/cert/X509Certificate;",
			arg0.object()
		);
	}
	void X509Certificate::checkValidity()
	{
		callMethod<void>(
			"checkValidity",
			"()V"
		);
	}
	void X509Certificate::checkValidity(java::util::Date arg0)
	{
		callMethod<void>(
			"checkValidity",
			"(Ljava/util/Date;)V",
			arg0.object()
		);
	}
	JObject X509Certificate::getIssuerDN()
	{
		return callObjectMethod(
			"getIssuerDN",
			"()Ljava/security/Principal;"
		);
	}
	java::util::Date X509Certificate::getNotAfter()
	{
		return callObjectMethod(
			"getNotAfter",
			"()Ljava/util/Date;"
		);
	}
	java::util::Date X509Certificate::getNotBefore()
	{
		return callObjectMethod(
			"getNotBefore",
			"()Ljava/util/Date;"
		);
	}
	java::math::BigInteger X509Certificate::getSerialNumber()
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	JString X509Certificate::getSigAlgName()
	{
		return callObjectMethod(
			"getSigAlgName",
			"()Ljava/lang/String;"
		);
	}
	JString X509Certificate::getSigAlgOID()
	{
		return callObjectMethod(
			"getSigAlgOID",
			"()Ljava/lang/String;"
		);
	}
	JByteArray X509Certificate::getSigAlgParams()
	{
		return callObjectMethod(
			"getSigAlgParams",
			"()[B"
		);
	}
	JObject X509Certificate::getSubjectDN()
	{
		return callObjectMethod(
			"getSubjectDN",
			"()Ljava/security/Principal;"
		);
	}
	jint X509Certificate::getVersion()
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
} // namespace javax::security::cert

