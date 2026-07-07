#pragma once

#include "../Network.def.hpp"
#include "./BidirectionalStream_Builder.def.hpp"
#include "./UrlRequest_Builder.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/URL.def.hpp"
#include "../../../java/net/URLConnection.def.hpp"
#include "./HttpEngine.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString HttpEngine::getVersionString()
	{
		return callStaticObjectMethod(
			"android.net.http.HttpEngine",
			"getVersionString",
			"()Ljava/lang/String;"
		);
	}
	inline void HttpEngine::bindToNetwork(android::net::Network arg0) const
	{
		callMethod<void>(
			"bindToNetwork",
			"(Landroid/net/Network;)V",
			arg0.object()
		);
	}
	inline JObject HttpEngine::createUrlStreamHandlerFactory() const
	{
		return callObjectMethod(
			"createUrlStreamHandlerFactory",
			"()Ljava/net/URLStreamHandlerFactory;"
		);
	}
	inline android::net::http::BidirectionalStream_Builder HttpEngine::newBidirectionalStreamBuilder(JString arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"newBidirectionalStreamBuilder",
			"(Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/net/http/BidirectionalStream$Callback;)Landroid/net/http/BidirectionalStream$Builder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::net::http::UrlRequest_Builder HttpEngine::newUrlRequestBuilder(JString arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"newUrlRequestBuilder",
			"(Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/net/http/UrlRequest$Callback;)Landroid/net/http/UrlRequest$Builder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::net::URLConnection HttpEngine::openConnection(java::net::URL arg0) const
	{
		return callObjectMethod(
			"openConnection",
			"(Ljava/net/URL;)Ljava/net/URLConnection;",
			arg0.object()
		);
	}
	inline void HttpEngine::shutdown() const
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
