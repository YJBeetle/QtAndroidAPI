#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./PKCS8EncodedKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QAndroidJniObject forward
	PKCS8EncodedKeySpec::PKCS8EncodedKeySpec(QAndroidJniObject obj) : java::security::spec::EncodedKeySpec(obj) {}
	
	// Constructors
	PKCS8EncodedKeySpec::PKCS8EncodedKeySpec(JByteArray arg0)
		: java::security::spec::EncodedKeySpec(
			"java.security.spec.PKCS8EncodedKeySpec",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	PKCS8EncodedKeySpec::PKCS8EncodedKeySpec(JByteArray arg0, JString arg1)
		: java::security::spec::EncodedKeySpec(
			"java.security.spec.PKCS8EncodedKeySpec",
			"([BLjava/lang/String;)V",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	JByteArray PKCS8EncodedKeySpec::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	JString PKCS8EncodedKeySpec::getFormat()
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::spec

