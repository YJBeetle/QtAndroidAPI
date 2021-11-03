#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./EncodedKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	EncodedKeySpec::EncodedKeySpec(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	EncodedKeySpec::EncodedKeySpec(JByteArray arg0)
		: JObject(
			"java.security.spec.EncodedKeySpec",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	
	// Methods
	JString EncodedKeySpec::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JByteArray EncodedKeySpec::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	JString EncodedKeySpec::getFormat()
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::spec

