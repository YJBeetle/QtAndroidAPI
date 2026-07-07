#pragma once

#include "../Network.def.hpp"
#include "./UploadDataProvider.def.hpp"
#include "./UrlRequest.def.hpp"
#include "../../../JString.hpp"
#include "./UrlRequest_Builder.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::net::http::UrlRequest_Builder UrlRequest_Builder::addHeader(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"addHeader",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/http/UrlRequest$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::net::http::UrlRequest_Builder UrlRequest_Builder::bindToNetwork(android::net::Network arg0) const
	{
		return callObjectMethod(
			"bindToNetwork",
			"(Landroid/net/Network;)Landroid/net/http/UrlRequest$Builder;",
			arg0.object()
		);
	}
	inline android::net::http::UrlRequest UrlRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/http/UrlRequest;"
		);
	}
	inline android::net::http::UrlRequest_Builder UrlRequest_Builder::setCacheDisabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setCacheDisabled",
			"(Z)Landroid/net/http/UrlRequest$Builder;",
			arg0
		);
	}
	inline android::net::http::UrlRequest_Builder UrlRequest_Builder::setDirectExecutorAllowed(jboolean arg0) const
	{
		return callObjectMethod(
			"setDirectExecutorAllowed",
			"(Z)Landroid/net/http/UrlRequest$Builder;",
			arg0
		);
	}
	inline android::net::http::UrlRequest_Builder UrlRequest_Builder::setHttpMethod(JString arg0) const
	{
		return callObjectMethod(
			"setHttpMethod",
			"(Ljava/lang/String;)Landroid/net/http/UrlRequest$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::http::UrlRequest_Builder UrlRequest_Builder::setPriority(jint arg0) const
	{
		return callObjectMethod(
			"setPriority",
			"(I)Landroid/net/http/UrlRequest$Builder;",
			arg0
		);
	}
	inline android::net::http::UrlRequest_Builder UrlRequest_Builder::setTrafficStatsTag(jint arg0) const
	{
		return callObjectMethod(
			"setTrafficStatsTag",
			"(I)Landroid/net/http/UrlRequest$Builder;",
			arg0
		);
	}
	inline android::net::http::UrlRequest_Builder UrlRequest_Builder::setTrafficStatsUid(jint arg0) const
	{
		return callObjectMethod(
			"setTrafficStatsUid",
			"(I)Landroid/net/http/UrlRequest$Builder;",
			arg0
		);
	}
	inline android::net::http::UrlRequest_Builder UrlRequest_Builder::setUploadDataProvider(android::net::http::UploadDataProvider arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setUploadDataProvider",
			"(Landroid/net/http/UploadDataProvider;Ljava/util/concurrent/Executor;)Landroid/net/http/UrlRequest$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
