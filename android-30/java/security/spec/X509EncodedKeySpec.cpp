#include "./X509EncodedKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	X509EncodedKeySpec::X509EncodedKeySpec(QJniObject obj) : java::security::spec::EncodedKeySpec(obj) {}
	
	// Constructors
	X509EncodedKeySpec::X509EncodedKeySpec(jbyteArray arg0)
		: java::security::spec::EncodedKeySpec(
			"java.security.spec.X509EncodedKeySpec",
			"([B)V",
			arg0
		) {}
	X509EncodedKeySpec::X509EncodedKeySpec(jbyteArray arg0, jstring arg1)
		: java::security::spec::EncodedKeySpec(
			"java.security.spec.X509EncodedKeySpec",
			"([BLjava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jbyteArray X509EncodedKeySpec::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jstring X509EncodedKeySpec::getFormat()
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::spec

