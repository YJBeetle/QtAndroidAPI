#pragma once

#include "./HeaderBlock.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/nio/ByteBuffer.def.hpp"
#include "./UrlRequest.def.hpp"

namespace android::net::http
{
	// Fields
	inline jint UrlRequest::REQUEST_PRIORITY_HIGHEST()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest",
			"REQUEST_PRIORITY_HIGHEST"
		);
	}
	inline jint UrlRequest::REQUEST_PRIORITY_IDLE()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest",
			"REQUEST_PRIORITY_IDLE"
		);
	}
	inline jint UrlRequest::REQUEST_PRIORITY_LOW()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest",
			"REQUEST_PRIORITY_LOW"
		);
	}
	inline jint UrlRequest::REQUEST_PRIORITY_LOWEST()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest",
			"REQUEST_PRIORITY_LOWEST"
		);
	}
	inline jint UrlRequest::REQUEST_PRIORITY_MEDIUM()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest",
			"REQUEST_PRIORITY_MEDIUM"
		);
	}
	
	// Constructors
	
	// Methods
	inline void UrlRequest::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline void UrlRequest::followRedirect() const
	{
		callMethod<void>(
			"followRedirect",
			"()V"
		);
	}
	inline android::net::http::HeaderBlock UrlRequest::getHeaders() const
	{
		return callObjectMethod(
			"getHeaders",
			"()Landroid/net/http/HeaderBlock;"
		);
	}
	inline JString UrlRequest::getHttpMethod() const
	{
		return callObjectMethod(
			"getHttpMethod",
			"()Ljava/lang/String;"
		);
	}
	inline jint UrlRequest::getPriority() const
	{
		return callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	inline void UrlRequest::getStatus(JObject arg0) const
	{
		callMethod<void>(
			"getStatus",
			"(Landroid/net/http/UrlRequest$StatusListener;)V",
			arg0.object()
		);
	}
	inline jint UrlRequest::getTrafficStatsTag() const
	{
		return callMethod<jint>(
			"getTrafficStatsTag",
			"()I"
		);
	}
	inline jint UrlRequest::getTrafficStatsUid() const
	{
		return callMethod<jint>(
			"getTrafficStatsUid",
			"()I"
		);
	}
	inline jboolean UrlRequest::hasTrafficStatsTag() const
	{
		return callMethod<jboolean>(
			"hasTrafficStatsTag",
			"()Z"
		);
	}
	inline jboolean UrlRequest::hasTrafficStatsUid() const
	{
		return callMethod<jboolean>(
			"hasTrafficStatsUid",
			"()Z"
		);
	}
	inline jboolean UrlRequest::isCacheDisabled() const
	{
		return callMethod<jboolean>(
			"isCacheDisabled",
			"()Z"
		);
	}
	inline jboolean UrlRequest::isDirectExecutorAllowed() const
	{
		return callMethod<jboolean>(
			"isDirectExecutorAllowed",
			"()Z"
		);
	}
	inline jboolean UrlRequest::isDone() const
	{
		return callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	inline void UrlRequest::read(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"read",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	inline void UrlRequest::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
