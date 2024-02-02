#pragma once

#include "./QuicOptions.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "./QuicOptions_Builder.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	inline QuicOptions_Builder::QuicOptions_Builder()
		: JObject(
			"android.net.http.QuicOptions$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::http::QuicOptions_Builder QuicOptions_Builder::addAllowedQuicHost(JString arg0) const
	{
		return callObjectMethod(
			"addAllowedQuicHost",
			"(Ljava/lang/String;)Landroid/net/http/QuicOptions$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::http::QuicOptions QuicOptions_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/http/QuicOptions;"
		);
	}
	inline android::net::http::QuicOptions_Builder QuicOptions_Builder::setHandshakeUserAgent(JString arg0) const
	{
		return callObjectMethod(
			"setHandshakeUserAgent",
			"(Ljava/lang/String;)Landroid/net/http/QuicOptions$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::http::QuicOptions_Builder QuicOptions_Builder::setIdleConnectionTimeout(java::time::Duration arg0) const
	{
		return callObjectMethod(
			"setIdleConnectionTimeout",
			"(Ljava/time/Duration;)Landroid/net/http/QuicOptions$Builder;",
			arg0.object()
		);
	}
	inline android::net::http::QuicOptions_Builder QuicOptions_Builder::setInMemoryServerConfigsCacheSize(jint arg0) const
	{
		return callObjectMethod(
			"setInMemoryServerConfigsCacheSize",
			"(I)Landroid/net/http/QuicOptions$Builder;",
			arg0
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
