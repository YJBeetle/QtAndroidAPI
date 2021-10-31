#include "../../../java/io/InputStream.hpp"
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
	QAndroidJniObject X509Certificate::getInstance(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.security.cert.X509Certificate",
			"getInstance",
			"([B)Ljavax/security/cert/X509Certificate;",
			arg0
		);
	}
	QAndroidJniObject X509Certificate::getInstance(java::io::InputStream arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	QAndroidJniObject X509Certificate::getIssuerDN()
	{
		return callObjectMethod(
			"getIssuerDN",
			"()Ljava/security/Principal;"
		);
	}
	QAndroidJniObject X509Certificate::getNotAfter()
	{
		return callObjectMethod(
			"getNotAfter",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject X509Certificate::getNotBefore()
	{
		return callObjectMethod(
			"getNotBefore",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject X509Certificate::getSerialNumber()
	{
		return callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	jstring X509Certificate::getSigAlgName()
	{
		return callObjectMethod(
			"getSigAlgName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring X509Certificate::getSigAlgOID()
	{
		return callObjectMethod(
			"getSigAlgOID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray X509Certificate::getSigAlgParams()
	{
		return callObjectMethod(
			"getSigAlgParams",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject X509Certificate::getSubjectDN()
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
