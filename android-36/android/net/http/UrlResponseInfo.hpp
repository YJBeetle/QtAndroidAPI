#pragma once

#include "./HeaderBlock.def.hpp"
#include "../../../JString.hpp"
#include "./UrlResponseInfo.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	inline UrlResponseInfo::UrlResponseInfo()
		: JObject(
			"android.net.http.UrlResponseInfo",
			"()V"
		) {}
	
	// Methods
	inline android::net::http::HeaderBlock UrlResponseInfo::getHeaders() const
	{
		return callObjectMethod(
			"getHeaders",
			"()Landroid/net/http/HeaderBlock;"
		);
	}
	inline jint UrlResponseInfo::getHttpStatusCode() const
	{
		return callMethod<jint>(
			"getHttpStatusCode",
			"()I"
		);
	}
	inline JString UrlResponseInfo::getHttpStatusText() const
	{
		return callObjectMethod(
			"getHttpStatusText",
			"()Ljava/lang/String;"
		);
	}
	inline JString UrlResponseInfo::getNegotiatedProtocol() const
	{
		return callObjectMethod(
			"getNegotiatedProtocol",
			"()Ljava/lang/String;"
		);
	}
	inline jlong UrlResponseInfo::getReceivedByteCount() const
	{
		return callMethod<jlong>(
			"getReceivedByteCount",
			"()J"
		);
	}
	inline JString UrlResponseInfo::getUrl() const
	{
		return callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		);
	}
	inline JObject UrlResponseInfo::getUrlChain() const
	{
		return callObjectMethod(
			"getUrlChain",
			"()Ljava/util/List;"
		);
	}
	inline jboolean UrlResponseInfo::wasCached() const
	{
		return callMethod<jboolean>(
			"wasCached",
			"()Z"
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
