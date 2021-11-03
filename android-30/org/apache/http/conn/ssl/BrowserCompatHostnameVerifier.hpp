#pragma once

#include "../../../../../JObject.hpp"
#include "./AbstractVerifier.hpp"


namespace org::apache::http::conn::ssl
{
	class BrowserCompatHostnameVerifier : public org::apache::http::conn::ssl::AbstractVerifier
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BrowserCompatHostnameVerifier(const char *className, const char *sig, Ts...agv) : org::apache::http::conn::ssl::AbstractVerifier(className, sig, std::forward<Ts>(agv)...) {}
		BrowserCompatHostnameVerifier(QJniObject obj);
		
		// Constructors
		BrowserCompatHostnameVerifier();
		
		// Methods
		jstring toString();
		void verify(jstring arg0, jarray arg1, jarray arg2);
	};
} // namespace org::apache::http::conn::ssl

