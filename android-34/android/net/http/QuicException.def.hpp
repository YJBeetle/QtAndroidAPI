#pragma once

#include "./NetworkException.def.hpp"

class JString;
class JThrowable;

namespace android::net::http
{
	class QuicException : public android::net::http::NetworkException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit QuicException(const char *className, const char *sig, Ts...agv) : android::net::http::NetworkException(className, sig, std::forward<Ts>(agv)...) {}
		QuicException(QJniObject obj) : android::net::http::NetworkException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::http

