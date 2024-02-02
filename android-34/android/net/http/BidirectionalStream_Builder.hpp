#pragma once

#include "./BidirectionalStream.def.hpp"
#include "../../../JString.hpp"
#include "./BidirectionalStream_Builder.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	inline BidirectionalStream_Builder::BidirectionalStream_Builder()
		: JObject(
			"android.net.http.BidirectionalStream$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::http::BidirectionalStream_Builder BidirectionalStream_Builder::addHeader(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"addHeader",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/http/BidirectionalStream$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::net::http::BidirectionalStream BidirectionalStream_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/http/BidirectionalStream;"
		);
	}
	inline android::net::http::BidirectionalStream_Builder BidirectionalStream_Builder::setDelayRequestHeadersUntilFirstFlushEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setDelayRequestHeadersUntilFirstFlushEnabled",
			"(Z)Landroid/net/http/BidirectionalStream$Builder;",
			arg0
		);
	}
	inline android::net::http::BidirectionalStream_Builder BidirectionalStream_Builder::setHttpMethod(JString arg0) const
	{
		return callObjectMethod(
			"setHttpMethod",
			"(Ljava/lang/String;)Landroid/net/http/BidirectionalStream$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::http::BidirectionalStream_Builder BidirectionalStream_Builder::setPriority(jint arg0) const
	{
		return callObjectMethod(
			"setPriority",
			"(I)Landroid/net/http/BidirectionalStream$Builder;",
			arg0
		);
	}
	inline android::net::http::BidirectionalStream_Builder BidirectionalStream_Builder::setTrafficStatsTag(jint arg0) const
	{
		return callObjectMethod(
			"setTrafficStatsTag",
			"(I)Landroid/net/http/BidirectionalStream$Builder;",
			arg0
		);
	}
	inline android::net::http::BidirectionalStream_Builder BidirectionalStream_Builder::setTrafficStatsUid(jint arg0) const
	{
		return callObjectMethod(
			"setTrafficStatsUid",
			"(I)Landroid/net/http/BidirectionalStream$Builder;",
			arg0
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
