#include "./URI.hpp"
#include "./CookieHandler.hpp"

namespace java::net
{
	// Fields
	
	CookieHandler::CookieHandler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CookieHandler::CookieHandler()
	{
		__thiz = QAndroidJniObject(
			"java.net.CookieHandler",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CookieHandler::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.CookieHandler",
			"getDefault",
			"()Ljava/net/CookieHandler;"
		);
	}
	void CookieHandler::setDefault(java::net::CookieHandler arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.CookieHandler",
			"setDefault",
			"(Ljava/net/CookieHandler;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CookieHandler::get(java::net::URI arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/util/Map;)Ljava/util/Map;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CookieHandler::put(java::net::URI arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/net/URI;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace java::net

