#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	jboolean Certificate::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray Certificate::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
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
	JString Certificate::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Certificate::verify(JObject arg0)
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	void Certificate::verify(JObject arg0, JString arg1)
	{
		callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace javax::security::cert

