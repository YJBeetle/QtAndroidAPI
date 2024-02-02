#pragma once

#include "./HttpException.def.hpp"

class JString;
class JThrowable;

namespace android::net::http
{
	class CallbackException : public android::net::http::HttpException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CallbackException(const char *className, const char *sig, Ts...agv) : android::net::http::HttpException(className, sig, std::forward<Ts>(agv)...) {}
		CallbackException(QJniObject obj) : android::net::http::HttpException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::http

