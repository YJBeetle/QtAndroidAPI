#pragma once

#ifndef JAVA_NET_COOKIEMANAGER
#define JAVA_NET_COOKIEMANAGER

#include "../../__JniBaseClass.hpp"
#include "CookieHandler.hpp"

namespace __jni_impl::java::net
{
	class URI;
}
namespace __jni_impl::java::net
{
	class HttpCookie;
}

namespace __jni_impl::java::net
{
	class CookieManager : public __jni_impl::java::net::CookieHandler
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject get(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1);
		void put(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1);
		void setCookiePolicy(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getCookieStore();
	};
} // namespace __jni_impl::java::net

#include "URI.hpp"
#include "HttpCookie.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void CookieManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.CookieManager",
			"()V"
		);
	}
	void CookieManager::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.CookieManager",
			"(Ljava/net/CookieStore;Ljava/net/CookiePolicy;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject CookieManager::get(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/util/Map;)Ljava/util/Map;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CookieManager::put(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/net/URI;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CookieManager::setCookiePolicy(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCookiePolicy",
			"(Ljava/net/CookiePolicy;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CookieManager::getCookieStore()
	{
		return __thiz.callObjectMethod(
			"getCookieStore",
			"()Ljava/net/CookieStore;"
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class CookieManager : public __jni_impl::java::net::CookieManager
	{
	public:
		CookieManager(QAndroidJniObject obj) { __thiz = obj; }
		CookieManager()
		{
			__constructor();
		}
		CookieManager(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::net

#endif // JAVA_NET_COOKIEMANAGER

