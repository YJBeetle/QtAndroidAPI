#include "./X509EncodedKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	X509EncodedKeySpec::X509EncodedKeySpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	X509EncodedKeySpec::X509EncodedKeySpec(jbyteArray &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.X509EncodedKeySpec",
			"([B)V",
			arg0
		);
	}
	X509EncodedKeySpec::X509EncodedKeySpec(jbyteArray &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.X509EncodedKeySpec",
			"([BLjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	X509EncodedKeySpec::X509EncodedKeySpec(jbyteArray &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.X509EncodedKeySpec",
			"([BLjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jbyteArray X509EncodedKeySpec::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jstring X509EncodedKeySpec::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::spec

