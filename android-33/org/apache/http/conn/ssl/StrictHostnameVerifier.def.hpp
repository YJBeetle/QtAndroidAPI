#pragma once

#include "./AbstractVerifier.def.hpp"

class JArray;
class JString;

namespace org::apache::http::conn::ssl
{
	class StrictHostnameVerifier : public org::apache::http::conn::ssl::AbstractVerifier
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StrictHostnameVerifier(const char *className, const char *sig, Ts...agv) : org::apache::http::conn::ssl::AbstractVerifier(className, sig, std::forward<Ts>(agv)...) {}
		StrictHostnameVerifier(QAndroidJniObject obj) : org::apache::http::conn::ssl::AbstractVerifier(obj) {}
		
		// Constructors
		StrictHostnameVerifier();
		
		// Methods
		JString toString() const;
		void verify(JString arg0, JArray arg1, JArray arg2) const;
	};
} // namespace org::apache::http::conn::ssl

