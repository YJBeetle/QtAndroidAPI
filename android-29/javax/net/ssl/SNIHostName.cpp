#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SNIMatcher.hpp"
#include "./SNIHostName.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	SNIHostName::SNIHostName(QJniObject obj) : javax::net::ssl::SNIServerName(obj) {}
	
	// Constructors
	SNIHostName::SNIHostName(JByteArray arg0)
		: javax::net::ssl::SNIServerName(
			"javax.net.ssl.SNIHostName",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	SNIHostName::SNIHostName(JString arg0)
		: javax::net::ssl::SNIServerName(
			"javax.net.ssl.SNIHostName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	javax::net::ssl::SNIMatcher SNIHostName::createSNIMatcher(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SNIHostName",
			"createSNIMatcher",
			"(Ljava/lang/String;)Ljavax/net/ssl/SNIMatcher;",
			arg0.object<jstring>()
		);
	}
	jboolean SNIHostName::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString SNIHostName::getAsciiName()
	{
		return callObjectMethod(
			"getAsciiName",
			"()Ljava/lang/String;"
		);
	}
	jint SNIHostName::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString SNIHostName::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::net::ssl

