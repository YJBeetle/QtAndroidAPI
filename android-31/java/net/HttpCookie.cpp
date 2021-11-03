#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/TimeZone.hpp"
#include "./HttpCookie.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	HttpCookie::HttpCookie(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	HttpCookie::HttpCookie(JString arg0, JString arg1)
		: JObject(
			"java.net.HttpCookie",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	jboolean HttpCookie::domainMatches(JString arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"java.net.HttpCookie",
			"domainMatches",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JObject HttpCookie::parse(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.HttpCookie",
			"parse",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
	JObject HttpCookie::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean HttpCookie::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString HttpCookie::getComment() const
	{
		return callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		);
	}
	JString HttpCookie::getCommentURL() const
	{
		return callObjectMethod(
			"getCommentURL",
			"()Ljava/lang/String;"
		);
	}
	jboolean HttpCookie::getDiscard() const
	{
		return callMethod<jboolean>(
			"getDiscard",
			"()Z"
		);
	}
	JString HttpCookie::getDomain() const
	{
		return callObjectMethod(
			"getDomain",
			"()Ljava/lang/String;"
		);
	}
	jlong HttpCookie::getMaxAge() const
	{
		return callMethod<jlong>(
			"getMaxAge",
			"()J"
		);
	}
	JString HttpCookie::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JString HttpCookie::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		);
	}
	JString HttpCookie::getPortlist() const
	{
		return callObjectMethod(
			"getPortlist",
			"()Ljava/lang/String;"
		);
	}
	jboolean HttpCookie::getSecure() const
	{
		return callMethod<jboolean>(
			"getSecure",
			"()Z"
		);
	}
	JString HttpCookie::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		);
	}
	jint HttpCookie::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jboolean HttpCookie::hasExpired() const
	{
		return callMethod<jboolean>(
			"hasExpired",
			"()Z"
		);
	}
	jint HttpCookie::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean HttpCookie::isHttpOnly() const
	{
		return callMethod<jboolean>(
			"isHttpOnly",
			"()Z"
		);
	}
	void HttpCookie::setComment(JString arg0) const
	{
		callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void HttpCookie::setCommentURL(JString arg0) const
	{
		callMethod<void>(
			"setCommentURL",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void HttpCookie::setDiscard(jboolean arg0) const
	{
		callMethod<void>(
			"setDiscard",
			"(Z)V",
			arg0
		);
	}
	void HttpCookie::setDomain(JString arg0) const
	{
		callMethod<void>(
			"setDomain",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void HttpCookie::setHttpOnly(jboolean arg0) const
	{
		callMethod<void>(
			"setHttpOnly",
			"(Z)V",
			arg0
		);
	}
	void HttpCookie::setMaxAge(jlong arg0) const
	{
		callMethod<void>(
			"setMaxAge",
			"(J)V",
			arg0
		);
	}
	void HttpCookie::setPath(JString arg0) const
	{
		callMethod<void>(
			"setPath",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void HttpCookie::setPortlist(JString arg0) const
	{
		callMethod<void>(
			"setPortlist",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void HttpCookie::setSecure(jboolean arg0) const
	{
		callMethod<void>(
			"setSecure",
			"(Z)V",
			arg0
		);
	}
	void HttpCookie::setValue(JString arg0) const
	{
		callMethod<void>(
			"setValue",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void HttpCookie::setVersion(jint arg0) const
	{
		callMethod<void>(
			"setVersion",
			"(I)V",
			arg0
		);
	}
	JString HttpCookie::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

