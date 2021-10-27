#include "../util/TimeZone.hpp"
#include "./HttpCookie.hpp"

namespace java::net
{
	// Fields
	
	HttpCookie::HttpCookie(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	HttpCookie::HttpCookie(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.HttpCookie",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	HttpCookie::HttpCookie(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.HttpCookie",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
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
	jboolean HttpCookie::domainMatches(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.net.HttpCookie",
			"domainMatches",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject HttpCookie::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.HttpCookie",
			"parse",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject HttpCookie::parse(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.HttpCookie",
			"parse",
			"(Ljava/lang/String;)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jobject HttpCookie::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean HttpCookie::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring HttpCookie::getComment()
	{
		return __thiz.callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HttpCookie::getCommentURL()
	{
		return __thiz.callObjectMethod(
			"getCommentURL",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean HttpCookie::getDiscard()
	{
		return __thiz.callMethod<jboolean>(
			"getDiscard",
			"()Z"
		);
	}
	jstring HttpCookie::getDomain()
	{
		return __thiz.callObjectMethod(
			"getDomain",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong HttpCookie::getMaxAge()
	{
		return __thiz.callMethod<jlong>(
			"getMaxAge",
			"()J"
		);
	}
	jstring HttpCookie::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HttpCookie::getPath()
	{
		return __thiz.callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HttpCookie::getPortlist()
	{
		return __thiz.callObjectMethod(
			"getPortlist",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean HttpCookie::getSecure()
	{
		return __thiz.callMethod<jboolean>(
			"getSecure",
			"()Z"
		);
	}
	jstring HttpCookie::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint HttpCookie::getVersion()
	{
		return __thiz.callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jboolean HttpCookie::hasExpired()
	{
		return __thiz.callMethod<jboolean>(
			"hasExpired",
			"()Z"
		);
	}
	jint HttpCookie::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean HttpCookie::isHttpOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isHttpOnly",
			"()Z"
		);
	}
	void HttpCookie::setComment(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HttpCookie::setComment(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void HttpCookie::setCommentURL(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCommentURL",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HttpCookie::setCommentURL(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setCommentURL",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void HttpCookie::setDiscard(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDiscard",
			"(Z)V",
			arg0
		);
	}
	void HttpCookie::setDomain(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDomain",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HttpCookie::setDomain(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDomain",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void HttpCookie::setHttpOnly(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHttpOnly",
			"(Z)V",
			arg0
		);
	}
	void HttpCookie::setMaxAge(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setMaxAge",
			"(J)V",
			arg0
		);
	}
	void HttpCookie::setPath(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPath",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HttpCookie::setPath(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPath",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void HttpCookie::setPortlist(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPortlist",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HttpCookie::setPortlist(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPortlist",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void HttpCookie::setSecure(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSecure",
			"(Z)V",
			arg0
		);
	}
	void HttpCookie::setValue(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setValue",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HttpCookie::setValue(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setValue",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void HttpCookie::setVersion(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVersion",
			"(I)V",
			arg0
		);
	}
	jstring HttpCookie::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::net

