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
	
	// QAndroidJniObject forward
	URI::URI(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jint URI::compareTo(JObject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint URI::compareTo(java::net::URI arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/net/URI;)I",
			arg0.object()
		);
	}
	jboolean URI::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString URI::getAuthority()
	{
		return callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getFragment()
	{
		return callObjectMethod(
			"getFragment",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getHost()
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getPath()
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		);
	}
	jint URI::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	JString URI::getQuery()
	{
		return callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getRawAuthority()
	{
		return callObjectMethod(
			"getRawAuthority",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getRawFragment()
	{
		return callObjectMethod(
			"getRawFragment",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getRawPath()
	{
		return callObjectMethod(
			"getRawPath",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getRawQuery()
	{
		return callObjectMethod(
			"getRawQuery",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getRawSchemeSpecificPart()
	{
		return callObjectMethod(
			"getRawSchemeSpecificPart",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getRawUserInfo()
	{
		return callObjectMethod(
			"getRawUserInfo",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getScheme()
	{
		return callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getSchemeSpecificPart()
	{
		return callObjectMethod(
			"getSchemeSpecificPart",
			"()Ljava/lang/String;"
		);
	}
	JString URI::getUserInfo()
	{
		return callObjectMethod(
			"getUserInfo",
			"()Ljava/lang/String;"
		);
	}
	jint URI::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean URI::isAbsolute()
	{
		return callMethod<jboolean>(
			"isAbsolute",
			"()Z"
		);
	}
	jboolean URI::isOpaque()
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	java::net::URI URI::normalize()
	{
		return callObjectMethod(
			"normalize",
			"()Ljava/net/URI;"
		);
	}
	java::net::URI URI::parseServerAuthority()
	{
		return callObjectMethod(
			"parseServerAuthority",
			"()Ljava/net/URI;"
		);
	}
	java::net::URI URI::relativize(java::net::URI arg0)
	{
		return callObjectMethod(
			"relativize",
			"(Ljava/net/URI;)Ljava/net/URI;",
			arg0.object()
		);
	}
	java::net::URI URI::resolve(JString arg0)
	{
		return callObjectMethod(
			"resolve",
			"(Ljava/lang/String;)Ljava/net/URI;",
			arg0.object<jstring>()
		);
	}
	java::net::URI URI::resolve(java::net::URI arg0)
	{
		return callObjectMethod(
			"resolve",
			"(Ljava/net/URI;)Ljava/net/URI;",
			arg0.object()
		);
	}
	JString URI::toASCIIString()
	{
		return callObjectMethod(
			"toASCIIString",
			"()Ljava/lang/String;"
		);
	}
	JString URI::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::net::URL URI::toURL()
	{
		return callObjectMethod(
			"toURL",
			"()Ljava/net/URL;"
		);
	}
} // namespace java::net

