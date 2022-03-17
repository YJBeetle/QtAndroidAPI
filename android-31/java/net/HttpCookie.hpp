#pragma once

#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/TimeZone.def.hpp"
#include "./HttpCookie.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline HttpCookie::HttpCookie(JString arg0, JString arg1)
		: JObject(
			"java.net.HttpCookie",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jboolean HttpCookie::domainMatches(JString arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"java.net.HttpCookie",
			"domainMatches",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JObject HttpCookie::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.HttpCookie",
			"parse",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
	inline JObject HttpCookie::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean HttpCookie::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString HttpCookie::getComment() const
	{
		return callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		);
	}
	inline JString HttpCookie::getCommentURL() const
	{
		return callObjectMethod(
			"getCommentURL",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean HttpCookie::getDiscard() const
	{
		return callMethod<jboolean>(
			"getDiscard",
			"()Z"
		);
	}
	inline JString HttpCookie::getDomain() const
	{
		return callObjectMethod(
			"getDomain",
			"()Ljava/lang/String;"
		);
	}
	inline jlong HttpCookie::getMaxAge() const
	{
		return callMethod<jlong>(
			"getMaxAge",
			"()J"
		);
	}
	inline JString HttpCookie::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JString HttpCookie::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		);
	}
	inline JString HttpCookie::getPortlist() const
	{
		return callObjectMethod(
			"getPortlist",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean HttpCookie::getSecure() const
	{
		return callMethod<jboolean>(
			"getSecure",
			"()Z"
		);
	}
	inline JString HttpCookie::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		);
	}
	inline jint HttpCookie::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	inline jboolean HttpCookie::hasExpired() const
	{
		return callMethod<jboolean>(
			"hasExpired",
			"()Z"
		);
	}
	inline jint HttpCookie::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean HttpCookie::isHttpOnly() const
	{
		return callMethod<jboolean>(
			"isHttpOnly",
			"()Z"
		);
	}
	inline void HttpCookie::setComment(JString arg0) const
	{
		callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void HttpCookie::setCommentURL(JString arg0) const
	{
		callMethod<void>(
			"setCommentURL",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void HttpCookie::setDiscard(jboolean arg0) const
	{
		callMethod<void>(
			"setDiscard",
			"(Z)V",
			arg0
		);
	}
	inline void HttpCookie::setDomain(JString arg0) const
	{
		callMethod<void>(
			"setDomain",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void HttpCookie::setHttpOnly(jboolean arg0) const
	{
		callMethod<void>(
			"setHttpOnly",
			"(Z)V",
			arg0
		);
	}
	inline void HttpCookie::setMaxAge(jlong arg0) const
	{
		callMethod<void>(
			"setMaxAge",
			"(J)V",
			arg0
		);
	}
	inline void HttpCookie::setPath(JString arg0) const
	{
		callMethod<void>(
			"setPath",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void HttpCookie::setPortlist(JString arg0) const
	{
		callMethod<void>(
			"setPortlist",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void HttpCookie::setSecure(jboolean arg0) const
	{
		callMethod<void>(
			"setSecure",
			"(Z)V",
			arg0
		);
	}
	inline void HttpCookie::setValue(JString arg0) const
	{
		callMethod<void>(
			"setValue",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void HttpCookie::setVersion(jint arg0) const
	{
		callMethod<void>(
			"setVersion",
			"(I)V",
			arg0
		);
	}
	inline JString HttpCookie::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
