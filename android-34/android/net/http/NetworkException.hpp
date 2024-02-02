#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./NetworkException.def.hpp"

namespace android::net::http
{
	// Fields
	inline jint NetworkException::ERROR_ADDRESS_UNREACHABLE()
	{
		return getStaticField<jint>(
			"android.net.http.NetworkException",
			"ERROR_ADDRESS_UNREACHABLE"
		);
	}
	inline jint NetworkException::ERROR_CONNECTION_CLOSED()
	{
		return getStaticField<jint>(
			"android.net.http.NetworkException",
			"ERROR_CONNECTION_CLOSED"
		);
	}
	inline jint NetworkException::ERROR_CONNECTION_REFUSED()
	{
		return getStaticField<jint>(
			"android.net.http.NetworkException",
			"ERROR_CONNECTION_REFUSED"
		);
	}
	inline jint NetworkException::ERROR_CONNECTION_RESET()
	{
		return getStaticField<jint>(
			"android.net.http.NetworkException",
			"ERROR_CONNECTION_RESET"
		);
	}
	inline jint NetworkException::ERROR_CONNECTION_TIMED_OUT()
	{
		return getStaticField<jint>(
			"android.net.http.NetworkException",
			"ERROR_CONNECTION_TIMED_OUT"
		);
	}
	inline jint NetworkException::ERROR_HOSTNAME_NOT_RESOLVED()
	{
		return getStaticField<jint>(
			"android.net.http.NetworkException",
			"ERROR_HOSTNAME_NOT_RESOLVED"
		);
	}
	inline jint NetworkException::ERROR_INTERNET_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.net.http.NetworkException",
			"ERROR_INTERNET_DISCONNECTED"
		);
	}
	inline jint NetworkException::ERROR_NETWORK_CHANGED()
	{
		return getStaticField<jint>(
			"android.net.http.NetworkException",
			"ERROR_NETWORK_CHANGED"
		);
	}
	inline jint NetworkException::ERROR_OTHER()
	{
		return getStaticField<jint>(
			"android.net.http.NetworkException",
			"ERROR_OTHER"
		);
	}
	inline jint NetworkException::ERROR_QUIC_PROTOCOL_FAILED()
	{
		return getStaticField<jint>(
			"android.net.http.NetworkException",
			"ERROR_QUIC_PROTOCOL_FAILED"
		);
	}
	inline jint NetworkException::ERROR_TIMED_OUT()
	{
		return getStaticField<jint>(
			"android.net.http.NetworkException",
			"ERROR_TIMED_OUT"
		);
	}
	
	// Constructors
	inline NetworkException::NetworkException(JString arg0, JThrowable arg1)
		: android::net::http::HttpException(
			"android.net.http.NetworkException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
	inline jint NetworkException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	inline jboolean NetworkException::isImmediatelyRetryable() const
	{
		return callMethod<jboolean>(
			"isImmediatelyRetryable",
			"()Z"
		);
	}
} // namespace android::net::http

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"
#include "./HttpException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
