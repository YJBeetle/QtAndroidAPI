#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../lang/StringBuilder.hpp"
#include "./URL.hpp"
#include "../nio/charset/CharsetEncoder.hpp"
#include "./URI.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	URI::URI(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	URI::URI(jstring arg0)
		: __JniBaseClass(
			"java.net.URI",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	URI::URI(jstring arg0, jstring arg1, jstring arg2)
		: __JniBaseClass(
			"java.net.URI",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	URI::URI(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
		: __JniBaseClass(
			"java.net.URI",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	URI::URI(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
		: __JniBaseClass(
			"java.net.URI",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	URI::URI(jstring arg0, jstring arg1, jstring arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6)
		: __JniBaseClass(
			"java.net.URI",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		) {}
	
	// Methods
	java::net::URI URI::create(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.net.URI",
			"create",
			"(Ljava/lang/String;)Ljava/net/URI;",
			arg0
		);
	}
	jint URI::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
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
	jboolean URI::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring URI::getAuthority()
	{
		return callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URI::getFragment()
	{
		return callObjectMethod(
			"getFragment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URI::getHost()
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URI::getPath()
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint URI::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jstring URI::getQuery()
	{
		return callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URI::getRawAuthority()
	{
		return callObjectMethod(
			"getRawAuthority",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URI::getRawFragment()
	{
		return callObjectMethod(
			"getRawFragment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URI::getRawPath()
	{
		return callObjectMethod(
			"getRawPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URI::getRawQuery()
	{
		return callObjectMethod(
			"getRawQuery",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URI::getRawSchemeSpecificPart()
	{
		return callObjectMethod(
			"getRawSchemeSpecificPart",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URI::getRawUserInfo()
	{
		return callObjectMethod(
			"getRawUserInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URI::getScheme()
	{
		return callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URI::getSchemeSpecificPart()
	{
		return callObjectMethod(
			"getSchemeSpecificPart",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URI::getUserInfo()
	{
		return callObjectMethod(
			"getUserInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	java::net::URI URI::resolve(jstring arg0)
	{
		return callObjectMethod(
			"resolve",
			"(Ljava/lang/String;)Ljava/net/URI;",
			arg0
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
	jstring URI::toASCIIString()
	{
		return callObjectMethod(
			"toASCIIString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URI::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::net::URL URI::toURL()
	{
		return callObjectMethod(
			"toURL",
			"()Ljava/net/URL;"
		);
	}
} // namespace java::net

