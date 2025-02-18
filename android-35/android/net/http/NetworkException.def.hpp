#pragma once

#include "./HttpException.def.hpp"

class JString;
class JThrowable;

namespace android::net::http
{
	class NetworkException : public android::net::http::HttpException
	{
	public:
		// Fields
		static jint ERROR_ADDRESS_UNREACHABLE();
		static jint ERROR_CONNECTION_CLOSED();
		static jint ERROR_CONNECTION_REFUSED();
		static jint ERROR_CONNECTION_RESET();
		static jint ERROR_CONNECTION_TIMED_OUT();
		static jint ERROR_HOSTNAME_NOT_RESOLVED();
		static jint ERROR_INTERNET_DISCONNECTED();
		static jint ERROR_NETWORK_CHANGED();
		static jint ERROR_OTHER();
		static jint ERROR_QUIC_PROTOCOL_FAILED();
		static jint ERROR_TIMED_OUT();
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkException(const char *className, const char *sig, Ts...agv) : android::net::http::HttpException(className, sig, std::forward<Ts>(agv)...) {}
		NetworkException(QJniObject obj) : android::net::http::HttpException(obj) {}
		
		// Constructors
		NetworkException(JString arg0, JThrowable arg1);
		
		// Methods
		jint getErrorCode() const;
		jboolean isImmediatelyRetryable() const;
	};
} // namespace android::net::http

