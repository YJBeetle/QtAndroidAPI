#pragma once

#include "../../../JObject.hpp"

class JArray;

namespace javax::net::ssl
{
	class ExtendedSSLSession : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ExtendedSSLSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExtendedSSLSession(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ExtendedSSLSession();
		
		// Methods
		JArray getLocalSupportedSignatureAlgorithms() const;
		JArray getPeerSupportedSignatureAlgorithms() const;
		JObject getRequestedServerNames() const;
		JObject getStatusResponses() const;
	};
} // namespace javax::net::ssl

