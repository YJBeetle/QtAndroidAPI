#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SNIMatcher.def.hpp"
#include "./SNIHostName.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline SNIHostName::SNIHostName(JByteArray arg0)
		: javax::net::ssl::SNIServerName(
			"javax.net.ssl.SNIHostName",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	inline SNIHostName::SNIHostName(JString arg0)
		: javax::net::ssl::SNIServerName(
			"javax.net.ssl.SNIHostName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline javax::net::ssl::SNIMatcher SNIHostName::createSNIMatcher(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.net.ssl.SNIHostName",
			"createSNIMatcher",
			"(Ljava/lang/String;)Ljavax/net/ssl/SNIMatcher;",
			arg0.object<jstring>()
		);
	}
	inline jboolean SNIHostName::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString SNIHostName::getAsciiName() const
	{
		return callObjectMethod(
			"getAsciiName",
			"()Ljava/lang/String;"
		);
	}
	inline jint SNIHostName::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString SNIHostName::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::net::ssl

// Base class headers
#include "./SNIServerName.hpp"

