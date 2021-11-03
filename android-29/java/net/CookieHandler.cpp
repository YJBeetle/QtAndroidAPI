#include "./URI.hpp"
#include "./CookieHandler.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	CookieHandler::CookieHandler(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CookieHandler::CookieHandler()
		: JObject(
			"java.net.CookieHandler",
			"()V"
		) {}
	
	// Methods
	java::net::CookieHandler CookieHandler::getDefault()
	{
		return callStaticObjectMethod(
			"java.net.CookieHandler",
			"getDefault",
			"()Ljava/net/CookieHandler;"
		);
	}
	void CookieHandler::setDefault(java::net::CookieHandler arg0)
	{
		callStaticMethod<void>(
			"java.net.CookieHandler",
			"setDefault",
			"(Ljava/net/CookieHandler;)V",
			arg0.object()
		);
	}
	JObject CookieHandler::get(java::net::URI arg0, JObject arg1)
	{
		return callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/util/Map;)Ljava/util/Map;",
			arg0.object(),
			arg1.object()
		);
	}
	void CookieHandler::put(java::net::URI arg0, JObject arg1)
	{
		callMethod<void>(
			"put",
			"(Ljava/net/URI;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::net

