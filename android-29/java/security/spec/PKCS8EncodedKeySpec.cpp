#include "./PKCS8EncodedKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	PKCS8EncodedKeySpec::PKCS8EncodedKeySpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PKCS8EncodedKeySpec::PKCS8EncodedKeySpec(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.PKCS8EncodedKeySpec",
			"([B)V",
			arg0
		);
	}
	PKCS8EncodedKeySpec::PKCS8EncodedKeySpec(jbyteArray arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.PKCS8EncodedKeySpec",
			"([BLjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jbyteArray PKCS8EncodedKeySpec::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jstring PKCS8EncodedKeySpec::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::spec

