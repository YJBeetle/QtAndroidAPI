#include "../util/regex/Pattern.hpp"
#include "./PKCS12Attribute.hpp"

namespace java::security
{
	// Fields
	
	PKCS12Attribute::PKCS12Attribute(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PKCS12Attribute::PKCS12Attribute(jbyteArray &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.PKCS12Attribute",
			"([B)V",
			arg0
		);
	}
	PKCS12Attribute::PKCS12Attribute(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.PKCS12Attribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	PKCS12Attribute::PKCS12Attribute(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.PKCS12Attribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jboolean PKCS12Attribute::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray PKCS12Attribute::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jstring PKCS12Attribute::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PKCS12Attribute::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PKCS12Attribute::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PKCS12Attribute::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

