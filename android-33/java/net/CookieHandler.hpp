#pragma once

#include "./URI.def.hpp"
#include "./CookieHandler.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline CookieHandler::CookieHandler()
		: JObject(
			"java.net.CookieHandler",
			"()V"
		) {}
	
	// Methods
	inline java::net::CookieHandler CookieHandler::getDefault()
	{
		return callStaticObjectMethod(
			"java.net.CookieHandler",
			"getDefault",
			"()Ljava/net/CookieHandler;"
		);
	}
	inline void CookieHandler::setDefault(java::net::CookieHandler arg0)
	{
		callStaticMethod<void>(
			"java.net.CookieHandler",
			"setDefault",
			"(Ljava/net/CookieHandler;)V",
			arg0.object()
		);
	}
	inline JObject CookieHandler::get(java::net::URI arg0, JObject arg1) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/net/URI;Ljava/util/Map;)Ljava/util/Map;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void CookieHandler::put(java::net::URI arg0, JObject arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/net/URI;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
