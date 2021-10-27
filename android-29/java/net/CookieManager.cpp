#include "./HttpCookie.hpp"
#include "./URI.hpp"
#include "./CookieManager.hpp"

namespace java::net
{
	// Fields
	
	CookieManager::CookieManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CookieManager::CookieManager()
	{
		__thiz = QAndroidJniObject(
			"java.net.CookieManager",
			"()V"
		);
	}
	CookieManager::CookieManager(__JniBaseClass &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.CookieManager",
			"(Ljava/net/CookieStore;Ljava/net/CookiePolicy;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject CookieManager::get(java::net::URI arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/util/Map;)Ljava/util/Map;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CookieManager::getCookieStore()
	{
		return __thiz.callObjectMethod(
			"getCookieStore",
			"()Ljava/net/CookieStore;"
		);
	}
	void CookieManager::put(java::net::URI arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/net/URI;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CookieManager::setCookiePolicy(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCookiePolicy",
			"(Ljava/net/CookiePolicy;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::net

