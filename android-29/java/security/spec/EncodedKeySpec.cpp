#include "./EncodedKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	EncodedKeySpec::EncodedKeySpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EncodedKeySpec::EncodedKeySpec(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.EncodedKeySpec",
			"([B)V",
			arg0
		);
	}
	
	// Methods
	jstring EncodedKeySpec::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray EncodedKeySpec::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jstring EncodedKeySpec::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::spec

