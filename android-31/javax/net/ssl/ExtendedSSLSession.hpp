#pragma once

#include "../../../JObject.hpp"

class JArray;

namespace javax::net::ssl
{
	class ExtendedSSLSession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExtendedSSLSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExtendedSSLSession(QJniObject obj);
		
		// Constructors
		ExtendedSSLSession();
		
		// Methods
		JArray getLocalSupportedSignatureAlgorithms();
		JArray getPeerSupportedSignatureAlgorithms();
		JObject getRequestedServerNames();
		JObject getStatusResponses();
	};
} // namespace javax::net::ssl

