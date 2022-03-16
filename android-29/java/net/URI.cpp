#include "../../JCharArray.hpp"
#include "../../JIntArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuilder.hpp"
#include "./URL.hpp"
#include "../nio/charset/CharsetEncoder.hpp"
#include "./URI.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	URI::URI(JString arg0)
		: JObject(
			"java.net.URI",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	URI::URI(JString arg0, JString arg1, JString arg2)
		: JObject(
			"java.net.URI",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	URI::URI(JString arg0, JString arg1, JString arg2, JString arg3)
		: JObject(
			"java.net.URI",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	URI::URI(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4)
		: JObject(
			"java.net.URI",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>()
		) {}
	URI::URI(JString arg0, JString arg1, JString arg2, jint arg3, JString arg4, JString arg5, JString arg6)
		: JObject(
			"java.net.URI",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3,
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6.object<jstring>()
		) {}
	
	// Methods
	java::net::URI URI::create(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.URI",
			"create",
			"(Ljava/lang/String;)Ljava/net/URI;",
			arg0.object<jstring>()
		);
	}
	jint URI::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint URI::compareTo(java::net::URI arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/net/URI;)I",
			arg0.object()
		);
	}
	jboolean URI::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString URI::getAuthority() const
	{
		return callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getFragment() const
	{
		return callObjectMethod(
			"getFragment",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getHost() const
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		);
	}
	jint URI::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	JString URI::getQuery() const
	{
		return callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getRawAuthority() const
	{
		return callObjectMethod(
			"getRawAuthority",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getRawFragment() const
	{
		return callObjectMethod(
			"getRawFragment",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getRawPath() const
	{
		return callObjectMethod(
			"getRawPath",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getRawQuery() const
	{
		return callObjectMethod(
			"getRawQuery",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getRawSchemeSpecificPart() const
	{
		return callObjectMethod(
			"getRawSchemeSpecificPart",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getRawUserInfo() const
	{
		return callObjectMethod(
			"getRawUserInfo",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getScheme() const
	{
		return callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getSchemeSpecificPart() const
	{
		return callObjectMethod(
			"getSchemeSpecificPart",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getUserInfo() const
	{
		return callObjectMethod(
			"getUserInfo",
			"()Ljava/lang/String;"
		);
	}
	jint URI::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean URI::isAbsolute() const
	{
		return callMethod<jboolean>(
			"isAbsolute",
			"()Z"
		);
	}
	jboolean URI::isOpaque() const
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	java::net::URI URI::normalize() const
	{
		return callObjectMethod(
			"normalize",
			"()Ljava/net/URI;"
		);
	}
	java::net::URI URI::parseServerAuthority() const
	{
		return callObjectMethod(
			"parseServerAuthority",
			"()Ljava/net/URI;"
		);
	}
	java::net::URI URI::relativize(java::net::URI arg0) const
	{
		return callObjectMethod(
			"relativize",
			"(Ljava/net/URI;)Ljava/net/URI;",
			arg0.object()
		);
	}
	java::net::URI URI::resolve(JString arg0) const
	{
		return callObjectMethod(
			"resolve",
			"(Ljava/lang/String;)Ljava/net/URI;",
			arg0.object<jstring>()
		);
	}
	java::net::URI URI::resolve(java::net::URI arg0) const
	{
		return callObjectMethod(
			"resolve",
			"(Ljava/net/URI;)Ljava/net/URI;",
			arg0.object()
		);
	}
	JString URI::toASCIIString() const
	{
		return callObjectMethod(
			"toASCIIString",
			"()Ljava/lang/String;"
		);
	}
	JString URI::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::net::URL URI::toURL() const
	{
		return callObjectMethod(
			"toURL",
			"()Ljava/net/URL;"
		);
	}
} // namespace java::net

