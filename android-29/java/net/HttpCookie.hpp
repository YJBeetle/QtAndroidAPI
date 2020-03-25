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
		
		// Methods
		QAndroidJniObject getName();
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject clone();
		QAndroidJniObject getValue();
		void setValue(jstring arg0);
		QAndroidJniObject getPath();
		static QAndroidJniObject parse(jstring arg0);
		void setComment(jstring arg0);
		QAndroidJniObject getComment();
		jint getVersion();
		jboolean getSecure();
		jboolean isHttpOnly();
		QAndroidJniObject getPortlist();
		void setPortlist(jstring arg0);
		jboolean hasExpired();
		void setCommentURL(jstring arg0);
		QAndroidJniObject getCommentURL();
		void setDiscard(jboolean arg0);
		jboolean getDiscard();
		void setMaxAge(jlong arg0);
		jlong getMaxAge();
		void setHttpOnly(jboolean arg0);
		static jboolean domainMatches(jstring arg0, jstring arg1);
		QAndroidJniObject getDomain();
		void setDomain(jstring arg0);
		void setPath(jstring arg0);
		void setVersion(jint arg0);
		void setSecure(jboolean arg0);
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
			arg1);
	}
	
	// Methods
	QAndroidJniObject HttpCookie::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	jboolean HttpCookie::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject HttpCookie::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint HttpCookie::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject HttpCookie::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject HttpCookie::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()Ljava/lang/String;");
	}
	void HttpCookie::setValue(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setValue",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject HttpCookie::getPath()
	{
		return __thiz.callObjectMethod(
			"getPath",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject HttpCookie::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.HttpCookie",
			"parse",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0);
	}
	void HttpCookie::setComment(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject HttpCookie::getComment()
	{
		return __thiz.callObjectMethod(
			"getComment",
			"()Ljava/lang/String;");
	}
	jint HttpCookie::getVersion()
	{
		return __thiz.callMethod<jint>(
			"getVersion",
			"()I");
	}
	jboolean HttpCookie::getSecure()
	{
		return __thiz.callMethod<jboolean>(
			"getSecure",
			"()Z");
	}
	jboolean HttpCookie::isHttpOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isHttpOnly",
			"()Z");
	}
	QAndroidJniObject HttpCookie::getPortlist()
	{
		return __thiz.callObjectMethod(
			"getPortlist",
			"()Ljava/lang/String;");
	}
	void HttpCookie::setPortlist(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPortlist",
			"(Ljava/lang/String;)V",
			arg0);
	}
	jboolean HttpCookie::hasExpired()
	{
		return __thiz.callMethod<jboolean>(
			"hasExpired",
			"()Z");
	}
	void HttpCookie::setCommentURL(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCommentURL",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject HttpCookie::getCommentURL()
	{
		return __thiz.callObjectMethod(
			"getCommentURL",
			"()Ljava/lang/String;");
	}
	void HttpCookie::setDiscard(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDiscard",
			"(Z)V",
			arg0);
	}
	jboolean HttpCookie::getDiscard()
	{
		return __thiz.callMethod<jboolean>(
			"getDiscard",
			"()Z");
	}
	void HttpCookie::setMaxAge(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setMaxAge",
			"(J)V",
			arg0);
	}
	jlong HttpCookie::getMaxAge()
	{
		return __thiz.callMethod<jlong>(
			"getMaxAge",
			"()J");
	}
	void HttpCookie::setHttpOnly(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHttpOnly",
			"(Z)V",
			arg0);
	}
	jboolean HttpCookie::domainMatches(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.net.HttpCookie",
			"domainMatches",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1);
	}
	QAndroidJniObject HttpCookie::getDomain()
	{
		return __thiz.callObjectMethod(
			"getDomain",
			"()Ljava/lang/String;");
	}
	void HttpCookie::setDomain(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDomain",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void HttpCookie::setPath(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPath",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void HttpCookie::setVersion(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVersion",
			"(I)V",
			arg0);
	}
	void HttpCookie::setSecure(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSecure",
			"(Z)V",
			arg0);
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

