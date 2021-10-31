#include "../util/regex/Pattern.hpp"
#include "./PKCS12Attribute.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	PKCS12Attribute::PKCS12Attribute(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PKCS12Attribute::PKCS12Attribute(jbyteArray arg0)
		: __JniBaseClass(
			"java.security.PKCS12Attribute",
			"([B)V",
			arg0
		) {}
	PKCS12Attribute::PKCS12Attribute(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"java.security.PKCS12Attribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean PKCS12Attribute::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray PKCS12Attribute::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jstring PKCS12Attribute::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PKCS12Attribute::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PKCS12Attribute::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PKCS12Attribute::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

