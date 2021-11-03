#include "./Certificate.hpp"

namespace javax::security::cert
{
	// Fields
	
	// QJniObject forward
	Certificate::Certificate(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Certificate::Certificate()
		: JObject(
			"javax.security.cert.Certificate",
			"()V"
		) {}
	
	// Methods
	jboolean Certificate::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray Certificate::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	JObject Certificate::getPublicKey()
	{
		return callObjectMethod(
			"getPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	jint Certificate::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Certificate::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Certificate::verify(JObject arg0)
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	void Certificate::verify(JObject arg0, jstring arg1)
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
} // namespace javax::security::cert

