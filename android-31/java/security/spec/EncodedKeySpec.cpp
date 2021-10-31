#include "./EncodedKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QAndroidJniObject forward
	EncodedKeySpec::EncodedKeySpec(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EncodedKeySpec::EncodedKeySpec(jbyteArray arg0)
		: __JniBaseClass(
			"java.security.spec.EncodedKeySpec",
			"([B)V",
			arg0
		) {}
	
	// Methods
	jstring EncodedKeySpec::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray EncodedKeySpec::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jstring EncodedKeySpec::getFormat()
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::spec

