#pragma once

#ifndef JAVA_NET_COOKIEHANDLER
#define JAVA_NET_COOKIEHANDLER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class URI;
}

namespace __jni_impl::java::net
{
	class CookieHandler : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject get(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1);
		void put(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject getDefault();
		static void setDefault(__jni_impl::java::net::CookieHandler arg0);
	};
} // namespace __jni_impl::java::net

#include "URI.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void CookieHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.CookieHandler",
			"()V");
	}
	
	// Methods
	QAndroidJniObject CookieHandler::get(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/util/Map;)Ljava/util/Map;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void CookieHandler::put(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/net/URI;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject CookieHandler::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.CookieHandler",
			"getDefault",
			"()Ljava/net/CookieHandler;");
	}
	void CookieHandler::setDefault(__jni_impl::java::net::CookieHandler arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.CookieHandler",
			"setDefault",
			"(Ljava/net/CookieHandler;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class CookieHandler : public __jni_impl::java::net::CookieHandler
	{
	public:
		CookieHandler(QAndroidJniObject obj) { __thiz = obj; }
		CookieHandler()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_COOKIEHANDLER

