#pragma once

#ifndef JAVA_NET_HTTPCOOKIE
#define JAVA_NET_HTTPCOOKIE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class TimeZone;
}

namespace __jni_impl::java::net
{
	class HttpCookie : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
		static jboolean domainMatches(jstring arg0, jstring arg1);
		static jboolean domainMatches(const QString &arg0, const QString &arg1);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(const QString &arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		jstring getComment();
		jstring getCommentURL();
		jboolean getDiscard();
		jstring getDomain();
		jlong getMaxAge();
		jstring getName();
		jstring getPath();
		jstring getPortlist();
		jboolean getSecure();
		jstring getValue();
		jint getVersion();
		jboolean hasExpired();
		jint hashCode();
		jboolean isHttpOnly();
		void setComment(jstring arg0);
		void setComment(const QString &arg0);
		void setCommentURL(jstring arg0);
		void setCommentURL(const QString &arg0);
		void setDiscard(jboolean arg0);
		void setDomain(jstring arg0);
		void setDomain(const QString &arg0);
		void setHttpOnly(jboolean arg0);
		void setMaxAge(jlong arg0);
		void setPath(jstring arg0);
		void setPath(const QString &arg0);
		void setPortlist(jstring arg0);
		void setPortlist(const QString &arg0);
		void setSecure(jboolean arg0);
		void setValue(jstring arg0);
		void setValue(const QString &arg0);
		void setVersion(jint arg0);
		jstring toString();
	};
} // namespace __jni_impl::java::net

#include "../util/TimeZone.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void HttpCookie::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.HttpCookie",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void HttpCookie::__constructor(const QString &arg0, const QString &arg1)
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
} // namespace __jni_impl::java::net

namespace java::net
{
	class HttpCookie : public __jni_impl::java::net::HttpCookie
	{
	public:
		HttpCookie(QAndroidJniObject obj) { __thiz = obj; }
		HttpCookie(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::net

#endif // JAVA_NET_HTTPCOOKIE

