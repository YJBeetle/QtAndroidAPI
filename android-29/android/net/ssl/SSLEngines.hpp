#pragma once

#include "../../../JObject.hpp"

namespace javax::net::ssl
{
	class SSLEngine;
}

namespace android::net::ssl
{
	class SSLEngines : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLEngines(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SSLEngines(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isSupportedEngine(javax::net::ssl::SSLEngine arg0);
		static void setUseSessionTickets(javax::net::ssl::SSLEngine arg0, jboolean arg1);
	};
} // namespace android::net::ssl

