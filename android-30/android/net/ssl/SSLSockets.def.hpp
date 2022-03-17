#pragma once

#include "../../../JObject.hpp"

namespace javax::net::ssl
{
	class SSLSocket;
}

namespace android::net::ssl
{
	class SSLSockets : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLSockets(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SSLSockets(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jboolean isSupportedSocket(javax::net::ssl::SSLSocket arg0);
		static void setUseSessionTickets(javax::net::ssl::SSLSocket arg0, jboolean arg1);
	};
} // namespace android::net::ssl

