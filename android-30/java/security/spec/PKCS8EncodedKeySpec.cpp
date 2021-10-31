#include "./PKCS8EncodedKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	PKCS8EncodedKeySpec::PKCS8EncodedKeySpec(QJniObject obj) : java::security::spec::EncodedKeySpec(obj) {}
	
	// Constructors
	PKCS8EncodedKeySpec::PKCS8EncodedKeySpec(jbyteArray arg0)
		: java::security::spec::EncodedKeySpec(
			"java.security.spec.PKCS8EncodedKeySpec",
			"([B)V",
			arg0
		) {}
	PKCS8EncodedKeySpec::PKCS8EncodedKeySpec(jbyteArray arg0, jstring arg1)
		: java::security::spec::EncodedKeySpec(
			"java.security.spec.PKCS8EncodedKeySpec",
			"([BLjava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jbyteArray PKCS8EncodedKeySpec::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jstring PKCS8EncodedKeySpec::getFormat()
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::spec

