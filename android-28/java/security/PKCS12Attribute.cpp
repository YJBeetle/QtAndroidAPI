#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/regex/Pattern.hpp"
#include "./PKCS12Attribute.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	PKCS12Attribute::PKCS12Attribute(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PKCS12Attribute::PKCS12Attribute(JByteArray arg0)
		: JObject(
			"java.security.PKCS12Attribute",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	PKCS12Attribute::PKCS12Attribute(JString arg0, JString arg1)
		: JObject(
			"java.security.PKCS12Attribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	jboolean PKCS12Attribute::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray PKCS12Attribute::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	JString PKCS12Attribute::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JString PKCS12Attribute::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		);
	}
	jint PKCS12Attribute::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PKCS12Attribute::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

