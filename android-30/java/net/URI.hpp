#pragma once

#include "../../JCharArray.hpp"
#include "../../JIntArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuilder.def.hpp"
#include "./URL.def.hpp"
#include "../nio/charset/CharsetEncoder.def.hpp"
#include "./URI.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline URI::URI(JString arg0)
		: JObject(
			"java.net.URI",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline URI::URI(JString arg0, JString arg1, JString arg2)
		: JObject(
			"java.net.URI",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	inline URI::URI(JString arg0, JString arg1, JString arg2, JString arg3)
		: JObject(
			"java.net.URI",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	inline URI::URI(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4)
		: JObject(
			"java.net.URI",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>()
		) {}
	inline URI::URI(JString arg0, JString arg1, JString arg2, jint arg3, JString arg4, JString arg5, JString arg6)
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
	inline java::net::URI URI::create(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.URI",
			"create",
			"(Ljava/lang/String;)Ljava/net/URI;",
			arg0.object<jstring>()
		);
	}
	inline jint URI::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint URI::compareTo(java::net::URI arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/net/URI;)I",
			arg0.object()
		);
	}
	inline jboolean URI::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString URI::getAuthority() const
	{
		return callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;"
		);
	}
	inline JString URI::getFragment() const
	{
		return callObjectMethod(
			"getFragment",
			"()Ljava/lang/String;"
		);
	}
	inline JString URI::getHost() const
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		);
	}
	inline JString URI::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		);
	}
	inline jint URI::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	inline JString URI::getQuery() const
	{
		return callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		);
	}
	inline JString URI::getRawAuthority() const
	{
		return callObjectMethod(
			"getRawAuthority",
			"()Ljava/lang/String;"
		);
	}
	inline JString URI::getRawFragment() const
	{
		return callObjectMethod(
			"getRawFragment",
			"()Ljava/lang/String;"
		);
	}
	inline JString URI::getRawPath() const
	{
		return callObjectMethod(
			"getRawPath",
			"()Ljava/lang/String;"
		);
	}
	inline JString URI::getRawQuery() const
	{
		return callObjectMethod(
			"getRawQuery",
			"()Ljava/lang/String;"
		);
	}
	inline JString URI::getRawSchemeSpecificPart() const
	{
		return callObjectMethod(
			"getRawSchemeSpecificPart",
			"()Ljava/lang/String;"
		);
	}
	inline JString URI::getRawUserInfo() const
	{
		return callObjectMethod(
			"getRawUserInfo",
			"()Ljava/lang/String;"
		);
	}
	inline JString URI::getScheme() const
	{
		return callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;"
		);
	}
	inline JString URI::getSchemeSpecificPart() const
	{
		return callObjectMethod(
			"getSchemeSpecificPart",
			"()Ljava/lang/String;"
		);
	}
	inline JString URI::getUserInfo() const
	{
		return callObjectMethod(
			"getUserInfo",
			"()Ljava/lang/String;"
		);
	}
	inline jint URI::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean URI::isAbsolute() const
	{
		return callMethod<jboolean>(
			"isAbsolute",
			"()Z"
		);
	}
	inline jboolean URI::isOpaque() const
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	inline java::net::URI URI::normalize() const
	{
		return callObjectMethod(
			"normalize",
			"()Ljava/net/URI;"
		);
	}
	inline java::net::URI URI::parseServerAuthority() const
	{
		return callObjectMethod(
			"parseServerAuthority",
			"()Ljava/net/URI;"
		);
	}
	inline java::net::URI URI::relativize(java::net::URI arg0) const
	{
		return callObjectMethod(
			"relativize",
			"(Ljava/net/URI;)Ljava/net/URI;",
			arg0.object()
		);
	}
	inline java::net::URI URI::resolve(JString arg0) const
	{
		return callObjectMethod(
			"resolve",
			"(Ljava/lang/String;)Ljava/net/URI;",
			arg0.object<jstring>()
		);
	}
	inline java::net::URI URI::resolve(java::net::URI arg0) const
	{
		return callObjectMethod(
			"resolve",
			"(Ljava/net/URI;)Ljava/net/URI;",
			arg0.object()
		);
	}
	inline JString URI::toASCIIString() const
	{
		return callObjectMethod(
			"toASCIIString",
			"()Ljava/lang/String;"
		);
	}
	inline JString URI::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::net::URL URI::toURL() const
	{
		return callObjectMethod(
			"toURL",
			"()Ljava/net/URL;"
		);
	}
} // namespace java::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
