#pragma once

#include "./UrlRequest_Status.def.hpp"

namespace android::net::http
{
	// Fields
	inline jint UrlRequest_Status::CONNECTING()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest$Status",
			"CONNECTING"
		);
	}
	inline jint UrlRequest_Status::DOWNLOADING_PAC_FILE()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest$Status",
			"DOWNLOADING_PAC_FILE"
		);
	}
	inline jint UrlRequest_Status::ESTABLISHING_PROXY_TUNNEL()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest$Status",
			"ESTABLISHING_PROXY_TUNNEL"
		);
	}
	inline jint UrlRequest_Status::IDLE()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest$Status",
			"IDLE"
		);
	}
	inline jint UrlRequest_Status::INVALID()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest$Status",
			"INVALID"
		);
	}
	inline jint UrlRequest_Status::READING_RESPONSE()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest$Status",
			"READING_RESPONSE"
		);
	}
	inline jint UrlRequest_Status::RESOLVING_HOST()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest$Status",
			"RESOLVING_HOST"
		);
	}
	inline jint UrlRequest_Status::RESOLVING_HOST_IN_PAC_FILE()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest$Status",
			"RESOLVING_HOST_IN_PAC_FILE"
		);
	}
	inline jint UrlRequest_Status::RESOLVING_PROXY_FOR_URL()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest$Status",
			"RESOLVING_PROXY_FOR_URL"
		);
	}
	inline jint UrlRequest_Status::SENDING_REQUEST()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest$Status",
			"SENDING_REQUEST"
		);
	}
	inline jint UrlRequest_Status::SSL_HANDSHAKE()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest$Status",
			"SSL_HANDSHAKE"
		);
	}
	inline jint UrlRequest_Status::WAITING_FOR_AVAILABLE_SOCKET()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest$Status",
			"WAITING_FOR_AVAILABLE_SOCKET"
		);
	}
	inline jint UrlRequest_Status::WAITING_FOR_CACHE()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest$Status",
			"WAITING_FOR_CACHE"
		);
	}
	inline jint UrlRequest_Status::WAITING_FOR_DELEGATE()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest$Status",
			"WAITING_FOR_DELEGATE"
		);
	}
	inline jint UrlRequest_Status::WAITING_FOR_RESPONSE()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest$Status",
			"WAITING_FOR_RESPONSE"
		);
	}
	inline jint UrlRequest_Status::WAITING_FOR_STALLED_SOCKET_POOL()
	{
		return getStaticField<jint>(
			"android.net.http.UrlRequest$Status",
			"WAITING_FOR_STALLED_SOCKET_POOL"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
