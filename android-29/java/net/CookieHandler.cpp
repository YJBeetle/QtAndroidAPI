#include "./URI.hpp"
#include "./CookieHandler.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	CookieHandler::CookieHandler(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CookieHandler::CookieHandler()
		: __JniBaseClass(
			"java.net.CookieHandler",
			"()V"
		) {}
	
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
			arg0.object()
		);
	}
	QAndroidJniObject CookieHandler::get(java::net::URI arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/util/Map;)Ljava/util/Map;",
			arg0.object(),
			arg1.object()
		);
	}
	void CookieHandler::put(java::net::URI arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/net/URI;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::net

