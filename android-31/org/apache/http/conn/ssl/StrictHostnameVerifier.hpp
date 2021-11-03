#pragma once

#include "./AbstractVerifier.hpp"

class JArray;
class JString;

namespace org::apache::http::conn::ssl
{
	class StrictHostnameVerifier : public org::apache::http::conn::ssl::AbstractVerifier
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StrictHostnameVerifier(const char *className, const char *sig, Ts...agv) : org::apache::http::conn::ssl::AbstractVerifier(className, sig, std::forward<Ts>(agv)...) {}
		StrictHostnameVerifier(QJniObject obj);
		
		// Constructors
		StrictHostnameVerifier();
		
		// Methods
		JString toString();
		void verify(JString arg0, JArray arg1, JArray arg2);
	};
} // namespace org::apache::http::conn::ssl

