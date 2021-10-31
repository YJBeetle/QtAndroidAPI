#include "../util/TimeZone.hpp"
#include "./HttpCookie.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	HttpCookie::HttpCookie(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	HttpCookie::HttpCookie(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"java.net.HttpCookie",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean HttpCookie::domainMatches(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.net.HttpCookie",
			"domainMatches",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	__JniBaseClass HttpCookie::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.HttpCookie",
			"parse",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
	jobject HttpCookie::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean HttpCookie::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring HttpCookie::getComment()
	{
		return callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HttpCookie::getCommentURL()
	{
		return callObjectMethod(
			"getCommentURL",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean HttpCookie::getDiscard()
	{
		return callMethod<jboolean>(
			"getDiscard",
			"()Z"
		);
	}
	jstring HttpCookie::getDomain()
	{
		return callObjectMethod(
			"getDomain",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong HttpCookie::getMaxAge()
	{
		return callMethod<jlong>(
			"getMaxAge",
			"()J"
		);
	}
	jstring HttpCookie::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HttpCookie::getPath()
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HttpCookie::getPortlist()
	{
		return callObjectMethod(
			"getPortlist",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean HttpCookie::getSecure()
	{
		return callMethod<jboolean>(
			"getSecure",
			"()Z"
		);
	}
	jstring HttpCookie::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint HttpCookie::getVersion()
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jboolean HttpCookie::hasExpired()
	{
		return callMethod<jboolean>(
			"hasExpired",
			"()Z"
		);
	}
	jint HttpCookie::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean HttpCookie::isHttpOnly()
	{
		return callMethod<jboolean>(
			"isHttpOnly",
			"()Z"
		);
	}
	void HttpCookie::setComment(jstring arg0)
	{
		callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HttpCookie::setCommentURL(jstring arg0)
	{
		callMethod<void>(
			"setCommentURL",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HttpCookie::setDiscard(jboolean arg0)
	{
		callMethod<void>(
			"setDiscard",
			"(Z)V",
			arg0
		);
	}
	void HttpCookie::setDomain(jstring arg0)
	{
		callMethod<void>(
			"setDomain",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HttpCookie::setHttpOnly(jboolean arg0)
	{
		callMethod<void>(
			"setHttpOnly",
			"(Z)V",
			arg0
		);
	}
	void HttpCookie::setMaxAge(jlong arg0)
	{
		callMethod<void>(
			"setMaxAge",
			"(J)V",
			arg0
		);
	}
	void HttpCookie::setPath(jstring arg0)
	{
		callMethod<void>(
			"setPath",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HttpCookie::setPortlist(jstring arg0)
	{
		callMethod<void>(
			"setPortlist",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HttpCookie::setSecure(jboolean arg0)
	{
		callMethod<void>(
			"setSecure",
			"(Z)V",
			arg0
		);
	}
	void HttpCookie::setValue(jstring arg0)
	{
		callMethod<void>(
			"setValue",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HttpCookie::setVersion(jint arg0)
	{
		callMethod<void>(
			"setVersion",
			"(I)V",
			arg0
		);
	}
	jstring HttpCookie::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::net

