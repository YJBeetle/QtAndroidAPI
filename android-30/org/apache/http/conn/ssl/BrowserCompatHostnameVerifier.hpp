#pragma once

#include "./AbstractVerifier.hpp"

class JArray;
class JString;

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
		JString toString() const;
		void verify(JString arg0, JArray arg1, JArray arg2) const;
	};
} // namespace org::apache::http::conn::ssl

